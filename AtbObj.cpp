// AtbObj.cpp: implementation of the CAtbObj class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "AtbObj.h"

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CAtbObj::CAtbObj()
{
	m_ulRef = 1;
}

CAtbObj::~CAtbObj()
{

}

///////////////////////////////////////////////////////////
// IUnknown implementation
//
STDMETHODIMP CAtbObj::QueryInterface(REFIID riid, 
	LPVOID *ppReturn)
{
	*ppReturn = NULL;

	//IUnknown
	if(IsEqualIID(riid, IID_IUnknown))
	{
		*ppReturn = this;
	}

	if(*ppReturn)
	{
		(*(LPUNKNOWN*)ppReturn)->AddRef();
		return S_OK;
	}
	return E_NOINTERFACE;
}                                             

STDMETHODIMP_(DWORD) CAtbObj::AddRef()
{
	return ++m_ulRef;
}

STDMETHODIMP_(DWORD) CAtbObj::Release()
{
	if(--m_ulRef == 0)
	{
		delete this;
		return 0;
	}
	return m_ulRef;
}

STDMETHODIMP CAtbObj::Hello()
{
	::MessageBox(NULL, " Hello world", "Aydin T.Bakir", MB_SYSTEMMODAL);
	return S_OK;
}
