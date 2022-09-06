/* this ALWAYS GENERATED file contains the definitions for the interfaces */


/* File created by MIDL compiler version 5.01.0164 */
/* at Thu May 18 17:09:11 2000
 */
/* Compiler settings for E:\ProjectError\SourceCode\IR\IRStub\IRStub.idl:
    Oicf (OptLev=i2), W1, Zp8, env=Win32, ms_ext, c_ext
    error checks: allocation ref bounds_check enum stub_data 
*/
//@@MIDL_FILE_HEADING(  )


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 440
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __IRStub_h__
#define __IRStub_h__

#ifdef __cplusplus
extern "C"{
#endif 

/* Forward Declarations */ 

#ifndef __IIRMsgStub_FWD_DEFINED__
#define __IIRMsgStub_FWD_DEFINED__
typedef interface IIRMsgStub IIRMsgStub;
#endif 	/* __IIRMsgStub_FWD_DEFINED__ */


#ifndef __IStubSink_FWD_DEFINED__
#define __IStubSink_FWD_DEFINED__
typedef interface IStubSink IStubSink;
#endif 	/* __IStubSink_FWD_DEFINED__ */


#ifndef ___IIRMsgStubEvents_FWD_DEFINED__
#define ___IIRMsgStubEvents_FWD_DEFINED__
typedef interface _IIRMsgStubEvents _IIRMsgStubEvents;
#endif 	/* ___IIRMsgStubEvents_FWD_DEFINED__ */


#ifndef __IObjHolder_FWD_DEFINED__
#define __IObjHolder_FWD_DEFINED__
typedef interface IObjHolder IObjHolder;
#endif 	/* __IObjHolder_FWD_DEFINED__ */


#ifndef __IRMsgStub_FWD_DEFINED__
#define __IRMsgStub_FWD_DEFINED__

#ifdef __cplusplus
typedef class IRMsgStub IRMsgStub;
#else
typedef struct IRMsgStub IRMsgStub;
#endif /* __cplusplus */

#endif 	/* __IRMsgStub_FWD_DEFINED__ */


#ifndef __ObjHolder_FWD_DEFINED__
#define __ObjHolder_FWD_DEFINED__

#ifdef __cplusplus
typedef class ObjHolder ObjHolder;
#else
typedef struct ObjHolder ObjHolder;
#endif /* __cplusplus */

#endif 	/* __ObjHolder_FWD_DEFINED__ */


#ifndef ___IStubSinkEvents_FWD_DEFINED__
#define ___IStubSinkEvents_FWD_DEFINED__
typedef interface _IStubSinkEvents _IStubSinkEvents;
#endif 	/* ___IStubSinkEvents_FWD_DEFINED__ */


#ifndef __StubSink_FWD_DEFINED__
#define __StubSink_FWD_DEFINED__

#ifdef __cplusplus
typedef class StubSink StubSink;
#else
typedef struct StubSink StubSink;
#endif /* __cplusplus */

#endif 	/* __StubSink_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

#ifndef __IIRMsgStub_INTERFACE_DEFINED__
#define __IIRMsgStub_INTERFACE_DEFINED__

/* interface IIRMsgStub */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IIRMsgStub;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("85B935CF-A245-11D3-A745-0080AD7C2BD2")
    IIRMsgStub : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SinkDataWent( 
            BSTR label,
            BSTR FileName,
            VARIANT vData) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SinkError( 
            long ErrorCode) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Initialize( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Uninitialize( void) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Queue( 
            /* [retval][out] */ BSTR __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Queue( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SourcePath( 
            /* [retval][out] */ BSTR __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_SourcePath( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Disable( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IsEnable( 
            /* [out][retval] */ BOOL __RPC_FAR *bEnable) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ActiveThreadCount( 
            /* [retval][out] */ long __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ServiceShutDown( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Enable( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IIRMsgStubVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IIRMsgStub __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IIRMsgStub __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IIRMsgStub __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IIRMsgStub __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IIRMsgStub __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IIRMsgStub __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IIRMsgStub __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SinkDataWent )( 
            IIRMsgStub __RPC_FAR * This,
            BSTR label,
            BSTR FileName,
            VARIANT vData);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SinkError )( 
            IIRMsgStub __RPC_FAR * This,
            long ErrorCode);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Initialize )( 
            IIRMsgStub __RPC_FAR * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Uninitialize )( 
            IIRMsgStub __RPC_FAR * This);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Queue )( 
            IIRMsgStub __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_Queue )( 
            IIRMsgStub __RPC_FAR * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_SourcePath )( 
            IIRMsgStub __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_SourcePath )( 
            IIRMsgStub __RPC_FAR * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Disable )( 
            IIRMsgStub __RPC_FAR * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *IsEnable )( 
            IIRMsgStub __RPC_FAR * This,
            /* [out][retval] */ BOOL __RPC_FAR *bEnable);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_ActiveThreadCount )( 
            IIRMsgStub __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ServiceShutDown )( 
            IIRMsgStub __RPC_FAR * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Enable )( 
            IIRMsgStub __RPC_FAR * This);
        
        END_INTERFACE
    } IIRMsgStubVtbl;

    interface IIRMsgStub
    {
        CONST_VTBL struct IIRMsgStubVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIRMsgStub_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IIRMsgStub_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IIRMsgStub_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IIRMsgStub_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IIRMsgStub_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IIRMsgStub_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IIRMsgStub_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IIRMsgStub_SinkDataWent(This,label,FileName,vData)	\
    (This)->lpVtbl -> SinkDataWent(This,label,FileName,vData)

#define IIRMsgStub_SinkError(This,ErrorCode)	\
    (This)->lpVtbl -> SinkError(This,ErrorCode)

#define IIRMsgStub_Initialize(This)	\
    (This)->lpVtbl -> Initialize(This)

#define IIRMsgStub_Uninitialize(This)	\
    (This)->lpVtbl -> Uninitialize(This)

#define IIRMsgStub_get_Queue(This,pVal)	\
    (This)->lpVtbl -> get_Queue(This,pVal)

#define IIRMsgStub_put_Queue(This,newVal)	\
    (This)->lpVtbl -> put_Queue(This,newVal)

#define IIRMsgStub_get_SourcePath(This,pVal)	\
    (This)->lpVtbl -> get_SourcePath(This,pVal)

#define IIRMsgStub_put_SourcePath(This,newVal)	\
    (This)->lpVtbl -> put_SourcePath(This,newVal)

#define IIRMsgStub_Disable(This)	\
    (This)->lpVtbl -> Disable(This)

#define IIRMsgStub_IsEnable(This,bEnable)	\
    (This)->lpVtbl -> IsEnable(This,bEnable)

#define IIRMsgStub_get_ActiveThreadCount(This,pVal)	\
    (This)->lpVtbl -> get_ActiveThreadCount(This,pVal)

#define IIRMsgStub_ServiceShutDown(This)	\
    (This)->lpVtbl -> ServiceShutDown(This)

#define IIRMsgStub_Enable(This)	\
    (This)->lpVtbl -> Enable(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IIRMsgStub_SinkDataWent_Proxy( 
    IIRMsgStub __RPC_FAR * This,
    BSTR label,
    BSTR FileName,
    VARIANT vData);


void __RPC_STUB IIRMsgStub_SinkDataWent_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IIRMsgStub_SinkError_Proxy( 
    IIRMsgStub __RPC_FAR * This,
    long ErrorCode);


void __RPC_STUB IIRMsgStub_SinkError_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IIRMsgStub_Initialize_Proxy( 
    IIRMsgStub __RPC_FAR * This);


void __RPC_STUB IIRMsgStub_Initialize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IIRMsgStub_Uninitialize_Proxy( 
    IIRMsgStub __RPC_FAR * This);


void __RPC_STUB IIRMsgStub_Uninitialize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IIRMsgStub_get_Queue_Proxy( 
    IIRMsgStub __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pVal);


void __RPC_STUB IIRMsgStub_get_Queue_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IIRMsgStub_put_Queue_Proxy( 
    IIRMsgStub __RPC_FAR * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IIRMsgStub_put_Queue_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IIRMsgStub_get_SourcePath_Proxy( 
    IIRMsgStub __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pVal);


void __RPC_STUB IIRMsgStub_get_SourcePath_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IIRMsgStub_put_SourcePath_Proxy( 
    IIRMsgStub __RPC_FAR * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IIRMsgStub_put_SourcePath_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IIRMsgStub_Disable_Proxy( 
    IIRMsgStub __RPC_FAR * This);


void __RPC_STUB IIRMsgStub_Disable_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IIRMsgStub_IsEnable_Proxy( 
    IIRMsgStub __RPC_FAR * This,
    /* [out][retval] */ BOOL __RPC_FAR *bEnable);


void __RPC_STUB IIRMsgStub_IsEnable_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IIRMsgStub_get_ActiveThreadCount_Proxy( 
    IIRMsgStub __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *pVal);


void __RPC_STUB IIRMsgStub_get_ActiveThreadCount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IIRMsgStub_ServiceShutDown_Proxy( 
    IIRMsgStub __RPC_FAR * This);


void __RPC_STUB IIRMsgStub_ServiceShutDown_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IIRMsgStub_Enable_Proxy( 
    IIRMsgStub __RPC_FAR * This);


void __RPC_STUB IIRMsgStub_Enable_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IIRMsgStub_INTERFACE_DEFINED__ */


#ifndef __IStubSink_INTERFACE_DEFINED__
#define __IStubSink_INTERFACE_DEFINED__

/* interface IStubSink */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IStubSink;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("54C4E9C6-8EEE-4955-9987-A55C12D704DE")
    IStubSink : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Arrived( 
            /* [in] */ IDispatch __RPC_FAR *Queue,
            /* [in] */ long Cursor) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ArrivedError( 
            /* [in] */ IDispatch __RPC_FAR *Queue,
            /* [in] */ long ErrorCode,
            /* [in] */ long Cursor) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Initialize( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Uninitialize( void) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_active( 
            /* [retval][out] */ BOOL __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_active( 
            /* [in] */ BOOL newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SourcePath( 
            /* [retval][out] */ BSTR __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_SourcePath( 
            /* [in] */ BSTR newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IStubSinkVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IStubSink __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IStubSink __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IStubSink __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IStubSink __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IStubSink __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IStubSink __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IStubSink __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Arrived )( 
            IStubSink __RPC_FAR * This,
            /* [in] */ IDispatch __RPC_FAR *Queue,
            /* [in] */ long Cursor);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ArrivedError )( 
            IStubSink __RPC_FAR * This,
            /* [in] */ IDispatch __RPC_FAR *Queue,
            /* [in] */ long ErrorCode,
            /* [in] */ long Cursor);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Initialize )( 
            IStubSink __RPC_FAR * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Uninitialize )( 
            IStubSink __RPC_FAR * This);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_active )( 
            IStubSink __RPC_FAR * This,
            /* [retval][out] */ BOOL __RPC_FAR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_active )( 
            IStubSink __RPC_FAR * This,
            /* [in] */ BOOL newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_SourcePath )( 
            IStubSink __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_SourcePath )( 
            IStubSink __RPC_FAR * This,
            /* [in] */ BSTR newVal);
        
        END_INTERFACE
    } IStubSinkVtbl;

    interface IStubSink
    {
        CONST_VTBL struct IStubSinkVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IStubSink_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IStubSink_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IStubSink_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IStubSink_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IStubSink_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IStubSink_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IStubSink_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IStubSink_Arrived(This,Queue,Cursor)	\
    (This)->lpVtbl -> Arrived(This,Queue,Cursor)

#define IStubSink_ArrivedError(This,Queue,ErrorCode,Cursor)	\
    (This)->lpVtbl -> ArrivedError(This,Queue,ErrorCode,Cursor)

#define IStubSink_Initialize(This)	\
    (This)->lpVtbl -> Initialize(This)

#define IStubSink_Uninitialize(This)	\
    (This)->lpVtbl -> Uninitialize(This)

#define IStubSink_get_active(This,pVal)	\
    (This)->lpVtbl -> get_active(This,pVal)

#define IStubSink_put_active(This,newVal)	\
    (This)->lpVtbl -> put_active(This,newVal)

#define IStubSink_get_SourcePath(This,pVal)	\
    (This)->lpVtbl -> get_SourcePath(This,pVal)

#define IStubSink_put_SourcePath(This,newVal)	\
    (This)->lpVtbl -> put_SourcePath(This,newVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IStubSink_Arrived_Proxy( 
    IStubSink __RPC_FAR * This,
    /* [in] */ IDispatch __RPC_FAR *Queue,
    /* [in] */ long Cursor);


void __RPC_STUB IStubSink_Arrived_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IStubSink_ArrivedError_Proxy( 
    IStubSink __RPC_FAR * This,
    /* [in] */ IDispatch __RPC_FAR *Queue,
    /* [in] */ long ErrorCode,
    /* [in] */ long Cursor);


void __RPC_STUB IStubSink_ArrivedError_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IStubSink_Initialize_Proxy( 
    IStubSink __RPC_FAR * This);


void __RPC_STUB IStubSink_Initialize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IStubSink_Uninitialize_Proxy( 
    IStubSink __RPC_FAR * This);


void __RPC_STUB IStubSink_Uninitialize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IStubSink_get_active_Proxy( 
    IStubSink __RPC_FAR * This,
    /* [retval][out] */ BOOL __RPC_FAR *pVal);


void __RPC_STUB IStubSink_get_active_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IStubSink_put_active_Proxy( 
    IStubSink __RPC_FAR * This,
    /* [in] */ BOOL newVal);


void __RPC_STUB IStubSink_put_active_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IStubSink_get_SourcePath_Proxy( 
    IStubSink __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *pVal);


void __RPC_STUB IStubSink_get_SourcePath_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IStubSink_put_SourcePath_Proxy( 
    IStubSink __RPC_FAR * This,
    /* [in] */ BSTR newVal);


void __RPC_STUB IStubSink_put_SourcePath_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IStubSink_INTERFACE_DEFINED__ */



#ifndef __IRSTUBLib_LIBRARY_DEFINED__
#define __IRSTUBLib_LIBRARY_DEFINED__

/* library IRSTUBLib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_IRSTUBLib;

#ifndef ___IIRMsgStubEvents_DISPINTERFACE_DEFINED__
#define ___IIRMsgStubEvents_DISPINTERFACE_DEFINED__

/* dispinterface _IIRMsgStubEvents */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID__IIRMsgStubEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("85B935D1-A245-11D3-A745-0080AD7C2BD2")
    _IIRMsgStubEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _IIRMsgStubEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            _IIRMsgStubEvents __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            _IIRMsgStubEvents __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            _IIRMsgStubEvents __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            _IIRMsgStubEvents __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            _IIRMsgStubEvents __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            _IIRMsgStubEvents __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            _IIRMsgStubEvents __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        END_INTERFACE
    } _IIRMsgStubEventsVtbl;

    interface _IIRMsgStubEvents
    {
        CONST_VTBL struct _IIRMsgStubEventsVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _IIRMsgStubEvents_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define _IIRMsgStubEvents_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define _IIRMsgStubEvents_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define _IIRMsgStubEvents_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define _IIRMsgStubEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define _IIRMsgStubEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define _IIRMsgStubEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___IIRMsgStubEvents_DISPINTERFACE_DEFINED__ */


#ifndef __IObjHolder_INTERFACE_DEFINED__
#define __IObjHolder_INTERFACE_DEFINED__

/* interface IObjHolder */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IObjHolder;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E3D7D076-D750-4900-8D96-867CC373D622")
    IObjHolder : public IDispatch
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct IObjHolderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IObjHolder __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IObjHolder __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IObjHolder __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IObjHolder __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IObjHolder __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IObjHolder __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IObjHolder __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        END_INTERFACE
    } IObjHolderVtbl;

    interface IObjHolder
    {
        CONST_VTBL struct IObjHolderVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IObjHolder_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IObjHolder_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IObjHolder_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IObjHolder_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IObjHolder_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IObjHolder_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IObjHolder_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IObjHolder_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_IRMsgStub;

#ifdef __cplusplus

class DECLSPEC_UUID("85B935D0-A245-11D3-A745-0080AD7C2BD2")
IRMsgStub;
#endif

EXTERN_C const CLSID CLSID_ObjHolder;

#ifdef __cplusplus

class DECLSPEC_UUID("23F45D8A-10C5-425C-90BB-60A52E9FB67C")
ObjHolder;
#endif

#ifndef ___IStubSinkEvents_DISPINTERFACE_DEFINED__
#define ___IStubSinkEvents_DISPINTERFACE_DEFINED__

/* dispinterface _IStubSinkEvents */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID__IStubSinkEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("BD9B128E-5564-481B-BE6B-1AB37CB6F3D5")
    _IStubSinkEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _IStubSinkEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            _IStubSinkEvents __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            _IStubSinkEvents __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            _IStubSinkEvents __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            _IStubSinkEvents __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            _IStubSinkEvents __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            _IStubSinkEvents __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            _IStubSinkEvents __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        END_INTERFACE
    } _IStubSinkEventsVtbl;

    interface _IStubSinkEvents
    {
        CONST_VTBL struct _IStubSinkEventsVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _IStubSinkEvents_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define _IStubSinkEvents_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define _IStubSinkEvents_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define _IStubSinkEvents_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define _IStubSinkEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define _IStubSinkEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define _IStubSinkEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___IStubSinkEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_StubSink;

#ifdef __cplusplus

class DECLSPEC_UUID("7158BF14-A26B-11D3-A745-0080AD7C2BD2")
StubSink;
#endif
#endif /* __IRSTUBLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long __RPC_FAR *, unsigned long            , BSTR __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  BSTR_UserMarshal(  unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, BSTR __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  BSTR_UserUnmarshal(unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, BSTR __RPC_FAR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long __RPC_FAR *, BSTR __RPC_FAR * ); 

unsigned long             __RPC_USER  VARIANT_UserSize(     unsigned long __RPC_FAR *, unsigned long            , VARIANT __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  VARIANT_UserMarshal(  unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, VARIANT __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  VARIANT_UserUnmarshal(unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, VARIANT __RPC_FAR * ); 
void                      __RPC_USER  VARIANT_UserFree(     unsigned long __RPC_FAR *, VARIANT __RPC_FAR * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif
