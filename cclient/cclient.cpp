// cclient.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "cclient.h"

#include "..\\AtbObj.h"

#include <atlbase.h>
CComModule _Module;
#include <atlcom.h>

#include "IRStub.h"
#include "IRStub_i.c"


#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// The one and only application object

CWinApp theApp;

using namespace std;


void InvokeFunction(IDispatch *pDispatch, LPTSTR lpFunctionName)
{
	UINT uiTypeInfoCount;
	HRESULT hr = pDispatch->GetTypeInfoCount(&uiTypeInfoCount);

	DISPID dispid;
	CComBSTR cbstrMember(lpFunctionName);
	BSTR bstrMember;

	cbstrMember.CopyTo(&bstrMember);

	hr = pDispatch->GetIDsOfNames(
			IID_NULL,
			&bstrMember,
			1, LOCALE_SYSTEM_DEFAULT,
			&dispid);

	CComVariant varResult;
	CComVariant pvars;
	if (pDispatch != NULL)
	{
		VariantClear(&pvars);
		VariantClear(&varResult);
		pvars = 0;
		DISPPARAMS disp = { &pvars, NULL, 0, 0 };
		pDispatch->Invoke(dispid, IID_NULL, LOCALE_USER_DEFAULT, DISPATCH_METHOD, &disp, &varResult, NULL, NULL);
	}

}

#define SZ_GUID L"{19720219-7E60-11d2-A355-00C04FB9D26E}"

int _tmain(int argc, TCHAR* argv[], TCHAR* envp[])
{

	HRESULT hr = CoInitialize(NULL);

	hr = _Module.Init(NULL, NULL);
	int nRetCode = 0;
	CLSID clsid;

	IUnknown *pUnknown;

	// Create Catalog object into memory.
//	CLSIDFromProgID(SZ_GUID, &clsid);
	CLSIDFromString(SZ_GUID, &clsid); 


	bool bErrorOccured = false;
	
	hr = CoCreateInstance(clsid, NULL, CLSCTX_ALL, IID_IUnknown,
		  reinterpret_cast<void**>(&pUnknown));

	pUnknown->AddRef();

	// Call a method
	CAtbObj *pMyInv = reinterpret_cast<CAtbObj*>(pUnknown);
	
	pMyInv->Hello();

	pUnknown->Release();


	CoUninitialize();

	return nRetCode;
}


