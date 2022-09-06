// AtbObj.h: interface for the CAtbObj class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_ATBOBJ_H__5111A591_49FC_40C0_AC60_2D973C9DD7C5__INCLUDED_)
#define AFX_ATBOBJ_H__5111A591_49FC_40C0_AC60_2D973C9DD7C5__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include <objbase.h>

/*
class IMyUnknown {
   public:
	STDMETHOD (QueryInterface) (REFIID riid, LPVOID * ppvObj) = 0;
	STDMETHOD_ (ULONG, AddRef) (void) = 0;
	STDMETHOD_ (ULONG, Release) (void) = 0;
};

*/

class CAtbObj  : IUnknown // IMyUnknown
{
protected:
	ULONG m_ulRef;

public:
	CAtbObj();
	virtual ~CAtbObj();

	//IUnknown methods
	STDMETHOD (QueryInterface) (REFIID riid, LPVOID * ppvObj);
	STDMETHOD_ (ULONG, AddRef) (void);
	STDMETHOD_ (ULONG, Release) (void);
	STDMETHOD (Hello) (void);

};

#endif // !defined(AFX_ATBOBJ_H__5111A591_49FC_40C0_AC60_2D973C9DD7C5__INCLUDED_)

/*
IMyObj : IUnknown
{
   // Property data

   __declspec(property(get=GetObjectString,put=PutObjectString))
   _bstr_t ObjectString;

   // Wrapper methods for error-handling

   _bstr_t GetObjectString ( );
   void PutObjectString ( _bstr_t pVal );
   HRESULT QueryString ( );

   // Raw methods provided by interface

   virtual HRESULT __stdcall get_ObjectString ( BSTR * pVal ) = 0;
   virtual HRESULT __stdcall put_ObjectString ( BSTR pVal ) = 0;
   virtual HRESULT __stdcall raw_QueryString ( ) = 0;
};
*/
