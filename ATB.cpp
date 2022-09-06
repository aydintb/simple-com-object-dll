// ATB.cpp : Defines the entry point for the DLL application.
//

#include "stdafx.h"


#define INC_OLE2

#include "AtbObj.h"

#include <windows.h>
#include <initguid.h>
// #define _WIN32_IE as 0x0400 if you want ShellVersion 4.71 specific interfaces
// to be declared in shlobj.h
#include <shlobj.h>
#include <tchar.h>
#include <stdlib.h>


#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

const IID IID_IAtbObj = {0x19720219,0xEC52,0x4B33,{0x87,0xE7,0xAF,0xCA,0x38,0x10,0xD3,0x54}};


//
// Global variables
//
UINT		g_uiRefThisDll = 0;		// Reference count for this DLL
HINSTANCE	g_hInstance;			// Instance handle for this DLL



// {19720219-7E60-11d2-A355-00C04FB9D26E}
DEFINE_GUID(CLSID_Atb_Sample_Obj, 
0x19720219, 0x7e60, 0x11d2, 0xa3, 0x55, 0x0, 0xc0, 0x4f, 0xb9, 0xd2, 0x6e);

#define SZ_GUID _T("{19720219-7E60-11d2-A355-00C04FB9D26E}")

class CAtbClassFactory : public IClassFactory
{
protected:
	ULONG   m_ulRef;         // Object reference count
public:
	CAtbClassFactory();
	~CAtbClassFactory();
        
    // IUnknown methods
	STDMETHODIMP            QueryInterface (REFIID, LPVOID FAR *);
	STDMETHODIMP_(ULONG)    AddRef ();
	STDMETHODIMP_(ULONG)    Release ();
    
	// IClassFactory methods
	STDMETHODIMP    CreateInstance (LPUNKNOWN, REFIID, LPVOID FAR *);
	STDMETHODIMP    LockServer (BOOL);
};


extern "C" int APIENTRY DllMain (HINSTANCE hInstance, DWORD dwReason, LPVOID lpReserved)
{
	if (dwReason == DLL_PROCESS_ATTACH)
	{
		g_hInstance = hInstance;
	}
	return TRUE;
}


STDAPI DllGetClassObject (REFCLSID rclsid, REFIID riid, LPVOID *ppv)
{
	*ppv = NULL;

	if (!IsEqualCLSID (rclsid, CLSID_Atb_Sample_Obj))
	{
		return ResultFromScode (CLASS_E_CLASSNOTAVAILABLE);
	}
    
	CAtbClassFactory *pClassFactory = new CAtbClassFactory;

	if (pClassFactory == NULL)
	{
		return ResultFromScode (E_OUTOFMEMORY);
	}

	HRESULT hr = pClassFactory->QueryInterface (riid, ppv);
	
	// -> This line is wrong!!!!   pClassFactory->Release ();
	return hr;
}

STDAPI DllCanUnloadNow (void)
{
	return ResultFromScode ((g_uiRefThisDll == 0) ? S_OK : S_FALSE);
}

#define SZ_CLSID				_T("CLSID\\{19720219-7E60-11d2-A355-00C04FB9D26E}")
#define SZ_INPROCSERVER32		_T("CLSID\\{19720219-7E60-11d2-A355-00C04FB9D26E}\\InprocServer32")
#define SZ_DEFAULT				_T("")
#define SZ_DEFAULTICON			_T("CLSID\\{19720219-7E60-11d2-A355-00C04FB9D26E}\\DefaultIcon")
#define SZ_THREADINGMODEL		_T("ThreadingModel")
#define SZ_APARTMENT			_T("Apartment")

STDAPI DllRegisterServer(void)
{
	HRESULT hr = E_UNEXPECTED;

	static TCHAR szDescr[] = _T("ATB Test Com Component");

	TCHAR szFilePath[_MAX_PATH];
	GetModuleFileName(g_hInstance, szFilePath, _MAX_PATH);
	
	// Create SZ_CLSID
	HKEY hKeyCLSID = NULL;
	if (::RegCreateKey(HKEY_CLASSES_ROOT, SZ_CLSID, &hKeyCLSID) != ERROR_SUCCESS)
	{
		return E_UNEXPECTED;	// No point in continuing further
	}
	if (::RegSetValueEx(hKeyCLSID, SZ_DEFAULT, 0, REG_SZ,  (const BYTE*)szDescr, 
				(lstrlen(szDescr)+1) * sizeof(TCHAR)) != ERROR_SUCCESS)
	{
		return E_UNEXPECTED;	// No point in continuing further
	}
	::RegCloseKey(hKeyCLSID);

	HKEY hkeyInprocServer32 = NULL;
	if (::RegCreateKey(HKEY_CLASSES_ROOT, SZ_INPROCSERVER32, &hkeyInprocServer32) == ERROR_SUCCESS)
	{
		static TCHAR szApartment[] = SZ_APARTMENT;
		if (::RegSetValueEx(hkeyInprocServer32, SZ_DEFAULT, 0, REG_SZ, 
				(const BYTE*)szFilePath, (lstrlen(szFilePath)+1) * sizeof(TCHAR)) == ERROR_SUCCESS)
		{
			if (::RegSetValueEx(hkeyInprocServer32, SZ_THREADINGMODEL, 0, REG_SZ, 
				(const BYTE*)szApartment, (lstrlen(szApartment)+1) * sizeof(TCHAR)) == ERROR_SUCCESS)
			{
				hr = S_OK;
			}
		}
		::RegCloseKey(hkeyInprocServer32);
	}

	// Set the default icon for the NameSpace extension folder
	HKEY hkeyDefaultIcon = NULL;
	if (::RegCreateKey(HKEY_CLASSES_ROOT, SZ_DEFAULTICON, &hkeyDefaultIcon) == ERROR_SUCCESS)
	{
		static TCHAR szDefaultIcon[MAX_PATH];
		strcpy(szDefaultIcon, szFilePath);
		strcat(szDefaultIcon, ",0");
		if (::RegSetValueEx(hkeyDefaultIcon, SZ_DEFAULT, 0, REG_SZ, 
				(const BYTE*)szDefaultIcon, (lstrlen(szDefaultIcon)+1) * sizeof(TCHAR)) == ERROR_SUCCESS)
		{
			hr = S_OK;
		}
		::RegCloseKey(hkeyDefaultIcon);
	}
	else
	{
		hr = E_UNEXPECTED;
	}


	return hr;
}




STDAPI DllUnregisterServer(void)
{
	HRESULT hr = E_UNEXPECTED;

	::RegDeleteKey(HKEY_CLASSES_ROOT, SZ_INPROCSERVER32);
	::RegDeleteKey(HKEY_CLASSES_ROOT, SZ_DEFAULTICON);
	
	if (::RegDeleteKey(HKEY_CLASSES_ROOT, SZ_CLSID) == ERROR_SUCCESS)
	{
		hr = S_OK;
	}

	return hr;
}


///////////////////////////////////////////////////////////
// CAtbClassFactory member functions

CAtbClassFactory::CAtbClassFactory()
{
	m_ulRef = 1;
	g_uiRefThisDll++;
}

CAtbClassFactory::~CAtbClassFactory()
{
	g_uiRefThisDll--;
}

///////////////////////////////////////////////////////////
// IUnknown implementation
//
STDMETHODIMP CAtbClassFactory::QueryInterface (REFIID riid, LPVOID FAR *ppv)
{
	if (IsEqualIID (riid, IID_IUnknown)) 
	{
		*ppv = (LPUNKNOWN) (LPCLASSFACTORY) this;
		m_ulRef++;
		return NOERROR;
	}

	else if (IsEqualIID (riid, IID_IClassFactory)) 
	{
		*ppv = (LPCLASSFACTORY) this;
		m_ulRef++;
		return NOERROR;
	}
	else 
	{  
		*ppv = NULL;
		return ResultFromScode (E_NOINTERFACE);
	}
}

STDMETHODIMP_(ULONG) CAtbClassFactory::AddRef ()
{
	return ++m_ulRef;
}

STDMETHODIMP_(ULONG) CAtbClassFactory::Release ()
{
	if (--m_ulRef == 0)
	{
		delete this;
	}
	return m_ulRef;
}

STDMETHODIMP CAtbClassFactory::CreateInstance (LPUNKNOWN pUnkOuter, REFIID riid,
    LPVOID FAR *ppvObj)
{
    *ppvObj = NULL;

    //
    // Return an error code if pUnkOuter is not NULL, because we don't
    // support aggregation.
    //
    if (pUnkOuter != NULL)
        return ResultFromScode (CLASS_E_NOAGGREGATION);

	CAtbObj *pAtbObj = new CAtbObj();
	if(NULL == pAtbObj)
	{
		return E_OUTOFMEMORY;
	}
	HRESULT hr = pAtbObj->QueryInterface(riid, ppvObj);
	pAtbObj->Release();
	return hr;
}

STDMETHODIMP CAtbClassFactory::LockServer (BOOL fLock)
{
	return ResultFromScode (E_NOTIMPL);
}

