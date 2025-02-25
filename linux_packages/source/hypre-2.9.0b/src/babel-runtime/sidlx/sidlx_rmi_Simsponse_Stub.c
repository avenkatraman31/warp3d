/*
 * File:          sidlx_rmi_Simsponse_Stub.c
 * Symbol:        sidlx.rmi.Simsponse-v0.1
 * Symbol Type:   class
 * Babel Version: 1.0.4
 * Description:   Client-side glue code for sidlx.rmi.Simsponse
 * 
 * WARNING: Automatically generated; changes will be lost
 * 
 */

#include "sidlx_rmi_Simsponse.h"
#include "sidlx_rmi_Simsponse_IOR.h"
#ifndef included_sidl_interface_IOR_h
#include "sidl_interface_IOR.h"
#endif
#ifndef included_sidl_rmi_InstanceHandle_h
#include "sidl_rmi_InstanceHandle.h"
#endif
#ifndef included_sidl_rmi_ConnectRegistry_h
#include "sidl_rmi_ConnectRegistry.h"
#endif
#include "sidl_Exception.h"
#ifndef included_sidl_interface_IOR_h
#include "sidl_interface_IOR.h"
#endif
#include <stddef.h>
#include <string.h>
#include "sidl_BaseInterface_IOR.h"
#include "babel_config.h"
#ifdef SIDL_DYNAMIC_LIBRARY
#include <stdio.h>
#include <stdlib.h>
#include "sidl_Loader.h"
#endif

#define LANG_SPECIFIC_INIT()
/*
 * connect_loaded is a boolean value showing if the IHConnect for this object has been loaded into the connectRegistry
 */

static int connect_loaded = 0;

/*
 * Hold pointer to IOR functions.
 */

static const struct sidlx_rmi_Simsponse__external *_externals = NULL;
/*
 * Lookup the symbol to get the IOR functions.
 */

static const struct sidlx_rmi_Simsponse__external* _loadIOR(void)
/*
 * Return pointer to internal IOR functions.
 */

{
#ifdef SIDL_STATIC_LIBRARY
  _externals = sidlx_rmi_Simsponse__externals();
#else
  _externals = (struct sidlx_rmi_Simsponse__external*)sidl_dynamicLoadIOR(
    "sidlx.rmi.Simsponse","sidlx_rmi_Simsponse__externals") ;
  sidl_checkIORVersion("sidlx.rmi.Simsponse", _externals->d_ior_major_version, 
    _externals->d_ior_minor_version, 1, 0);
#endif
  return _externals;
}

#define _getExternals() (_externals ? _externals : _loadIOR())

/*
 * Constructor function for the class.
 */

sidlx_rmi_Simsponse
sidlx_rmi_Simsponse__create(sidl_BaseInterface* _ex)
{
  return (*(_getExternals()->createObject))(NULL,_ex);
}

/**
 * Wraps up the private data struct pointer (struct sidlx_rmi_Simsponse__data) passed in rather than running the constructor.
 */
sidlx_rmi_Simsponse
sidlx_rmi_Simsponse__wrapObj(void* data, sidl_BaseInterface* _ex)
{
  return (*(_getExternals()->createObject))(data,_ex);
}

static sidlx_rmi_Simsponse sidlx_rmi_Simsponse__remoteCreate(const char* url, 
  sidl_BaseInterface *_ex);
/*
 * RMI constructor function for the class.
 */

sidlx_rmi_Simsponse
sidlx_rmi_Simsponse__createRemote(const char* url, sidl_BaseInterface *_ex)
{
  return sidlx_rmi_Simsponse__remoteCreate(url, _ex);
}

static struct sidlx_rmi_Simsponse__object* sidlx_rmi_Simsponse__remoteConnect(
  const char* url, sidl_bool ar, sidl_BaseInterface *_ex);
static struct sidlx_rmi_Simsponse__object* sidlx_rmi_Simsponse__IHConnect(
  struct sidl_rmi_InstanceHandle__object* instance, sidl_BaseInterface *_ex);
/*
 * RMI connector function for the class.
 */

sidlx_rmi_Simsponse
sidlx_rmi_Simsponse__connect(const char* url, sidl_BaseInterface *_ex)
{
  return sidlx_rmi_Simsponse__remoteConnect(url, TRUE, _ex);
}

/*
 * Method:  init[]
 */

SIDL_C_INLINE_DEFN
void
sidlx_rmi_Simsponse_init(
  /* in */ sidlx_rmi_Simsponse self,
  /* in */ const char* methodName,
  /* in */ const char* objectid,
  /* in */ sidlx_rmi_Socket sock,
  /* out */ sidl_BaseInterface *_ex)
#if SIDL_C_INLINE_REPEAT_DEFN
{
  (*self->d_epv->f_init)(
    self,
    methodName,
    objectid,
    sock,
    _ex);
}
#else /* ISO C 1999 inline semantics */
;
#endif /* SIDL_C_INLINE_REPEAT_DEFN */

/*
 * Method:  test[]
 */

SIDL_C_INLINE_DEFN
sidl_bool
sidlx_rmi_Simsponse_test(
  /* in */ sidlx_rmi_Simsponse self,
  /* in */ int32_t secs,
  /* in */ int32_t usecs,
  /* out */ sidl_BaseInterface *_ex)
#if SIDL_C_INLINE_REPEAT_DEFN
{
  sidl_bool _result;
  _result = (*self->d_epv->f_test)(
    self,
    secs,
    usecs,
    _ex);
  return _result;
}
#else /* ISO C 1999 inline semantics */
;
#endif /* SIDL_C_INLINE_REPEAT_DEFN */

/*
 * Method:  pullData[]
 */

SIDL_C_INLINE_DEFN
void
sidlx_rmi_Simsponse_pullData(
  /* in */ sidlx_rmi_Simsponse self,
  /* out */ sidl_BaseInterface *_ex)
#if SIDL_C_INLINE_REPEAT_DEFN
{
  (*self->d_epv->f_pullData)(
    self,
    _ex);
}
#else /* ISO C 1999 inline semantics */
;
#endif /* SIDL_C_INLINE_REPEAT_DEFN */

/*
 * Method:  getMethodName[]
 */

SIDL_C_INLINE_DEFN
char*
sidlx_rmi_Simsponse_getMethodName(
  /* in */ sidlx_rmi_Simsponse self,
  /* out */ sidl_BaseInterface *_ex)
#if SIDL_C_INLINE_REPEAT_DEFN
{
  char* _result;
  _result = (*self->d_epv->f_getMethodName)(
    self,
    _ex);
  return _result;
}
#else /* ISO C 1999 inline semantics */
;
#endif /* SIDL_C_INLINE_REPEAT_DEFN */

/*
 * Method:  getObjectID[]
 */

SIDL_C_INLINE_DEFN
char*
sidlx_rmi_Simsponse_getObjectID(
  /* in */ sidlx_rmi_Simsponse self,
  /* out */ sidl_BaseInterface *_ex)
#if SIDL_C_INLINE_REPEAT_DEFN
{
  char* _result;
  _result = (*self->d_epv->f_getObjectID)(
    self,
    _ex);
  return _result;
}
#else /* ISO C 1999 inline semantics */
;
#endif /* SIDL_C_INLINE_REPEAT_DEFN */

/*
 * <p>
 * Add one to the intrinsic reference count in the underlying object.
 * Object in <code>sidl</code> have an intrinsic reference count.
 * Objects continue to exist as long as the reference count is
 * positive. Clients should call this method whenever they
 * create another ongoing reference to an object or interface.
 * </p>
 * <p>
 * This does not have a return value because there is no language
 * independent type that can refer to an interface or a
 * class.
 * </p>
 */

SIDL_C_INLINE_DEFN
void
sidlx_rmi_Simsponse_addRef(
  /* in */ sidlx_rmi_Simsponse self,
  /* out */ sidl_BaseInterface *_ex)
#if SIDL_C_INLINE_REPEAT_DEFN
{
  (*self->d_epv->f_addRef)(
    self,
    _ex);
}
#else /* ISO C 1999 inline semantics */
;
#endif /* SIDL_C_INLINE_REPEAT_DEFN */

/*
 * Decrease by one the intrinsic reference count in the underlying
 * object, and delete the object if the reference is non-positive.
 * Objects in <code>sidl</code> have an intrinsic reference count.
 * Clients should call this method whenever they remove a
 * reference to an object or interface.
 */

SIDL_C_INLINE_DEFN
void
sidlx_rmi_Simsponse_deleteRef(
  /* in */ sidlx_rmi_Simsponse self,
  /* out */ sidl_BaseInterface *_ex)
#if SIDL_C_INLINE_REPEAT_DEFN
{
  (*self->d_epv->f_deleteRef)(
    self,
    _ex);
}
#else /* ISO C 1999 inline semantics */
;
#endif /* SIDL_C_INLINE_REPEAT_DEFN */

/*
 * Return true if and only if <code>obj</code> refers to the same
 * object as this object.
 */

SIDL_C_INLINE_DEFN
sidl_bool
sidlx_rmi_Simsponse_isSame(
  /* in */ sidlx_rmi_Simsponse self,
  /* in */ sidl_BaseInterface iobj,
  /* out */ sidl_BaseInterface *_ex)
#if SIDL_C_INLINE_REPEAT_DEFN
{
  sidl_bool _result;
  _result = (*self->d_epv->f_isSame)(
    self,
    iobj,
    _ex);
  return _result;
}
#else /* ISO C 1999 inline semantics */
;
#endif /* SIDL_C_INLINE_REPEAT_DEFN */

/*
 * Return whether this object is an instance of the specified type.
 * The string name must be the <code>sidl</code> type name.  This
 * routine will return <code>true</code> if and only if a cast to
 * the string type name would succeed.
 */

SIDL_C_INLINE_DEFN
sidl_bool
sidlx_rmi_Simsponse_isType(
  /* in */ sidlx_rmi_Simsponse self,
  /* in */ const char* name,
  /* out */ sidl_BaseInterface *_ex)
#if SIDL_C_INLINE_REPEAT_DEFN
{
  sidl_bool _result;
  _result = (*self->d_epv->f_isType)(
    self,
    name,
    _ex);
  return _result;
}
#else /* ISO C 1999 inline semantics */
;
#endif /* SIDL_C_INLINE_REPEAT_DEFN */

/*
 * Return the meta-data about the class implementing this interface.
 */

SIDL_C_INLINE_DEFN
sidl_ClassInfo
sidlx_rmi_Simsponse_getClassInfo(
  /* in */ sidlx_rmi_Simsponse self,
  /* out */ sidl_BaseInterface *_ex)
#if SIDL_C_INLINE_REPEAT_DEFN
{
  sidl_ClassInfo _result;
  _result = (*self->d_epv->f_getClassInfo)(
    self,
    _ex);
  return _result;
}
#else /* ISO C 1999 inline semantics */
;
#endif /* SIDL_C_INLINE_REPEAT_DEFN */

/*
 *  
 * May return a communication exception or an execption thrown
 * from the remote server.  If it returns null, then it's safe
 * to unpack arguments
 */

SIDL_C_INLINE_DEFN
sidl_BaseException
sidlx_rmi_Simsponse_getExceptionThrown(
  /* in */ sidlx_rmi_Simsponse self,
  /* out */ sidl_BaseInterface *_ex)
#if SIDL_C_INLINE_REPEAT_DEFN
{
  sidl_BaseException _result;
  _result = (*self->d_epv->f_getExceptionThrown)(
    self,
    _ex);
  return _result;
}
#else /* ISO C 1999 inline semantics */
;
#endif /* SIDL_C_INLINE_REPEAT_DEFN */

/*
 * Method:  unpackBool[]
 */

SIDL_C_INLINE_DEFN
void
sidlx_rmi_Simsponse_unpackBool(
  /* in */ sidlx_rmi_Simsponse self,
  /* in */ const char* key,
  /* out */ sidl_bool* value,
  /* out */ sidl_BaseInterface *_ex)
#if SIDL_C_INLINE_REPEAT_DEFN
{
  (*self->d_epv->f_unpackBool)(
    self,
    key,
    value,
    _ex);
}
#else /* ISO C 1999 inline semantics */
;
#endif /* SIDL_C_INLINE_REPEAT_DEFN */

/*
 * Method:  unpackChar[]
 */

SIDL_C_INLINE_DEFN
void
sidlx_rmi_Simsponse_unpackChar(
  /* in */ sidlx_rmi_Simsponse self,
  /* in */ const char* key,
  /* out */ char* value,
  /* out */ sidl_BaseInterface *_ex)
#if SIDL_C_INLINE_REPEAT_DEFN
{
  (*self->d_epv->f_unpackChar)(
    self,
    key,
    value,
    _ex);
}
#else /* ISO C 1999 inline semantics */
;
#endif /* SIDL_C_INLINE_REPEAT_DEFN */

/*
 * Method:  unpackInt[]
 */

SIDL_C_INLINE_DEFN
void
sidlx_rmi_Simsponse_unpackInt(
  /* in */ sidlx_rmi_Simsponse self,
  /* in */ const char* key,
  /* out */ int32_t* value,
  /* out */ sidl_BaseInterface *_ex)
#if SIDL_C_INLINE_REPEAT_DEFN
{
  (*self->d_epv->f_unpackInt)(
    self,
    key,
    value,
    _ex);
}
#else /* ISO C 1999 inline semantics */
;
#endif /* SIDL_C_INLINE_REPEAT_DEFN */

/*
 * Method:  unpackLong[]
 */

SIDL_C_INLINE_DEFN
void
sidlx_rmi_Simsponse_unpackLong(
  /* in */ sidlx_rmi_Simsponse self,
  /* in */ const char* key,
  /* out */ int64_t* value,
  /* out */ sidl_BaseInterface *_ex)
#if SIDL_C_INLINE_REPEAT_DEFN
{
  (*self->d_epv->f_unpackLong)(
    self,
    key,
    value,
    _ex);
}
#else /* ISO C 1999 inline semantics */
;
#endif /* SIDL_C_INLINE_REPEAT_DEFN */

/*
 * Method:  unpackOpaque[]
 */

SIDL_C_INLINE_DEFN
void
sidlx_rmi_Simsponse_unpackOpaque(
  /* in */ sidlx_rmi_Simsponse self,
  /* in */ const char* key,
  /* out */ void** value,
  /* out */ sidl_BaseInterface *_ex)
#if SIDL_C_INLINE_REPEAT_DEFN
{
  (*self->d_epv->f_unpackOpaque)(
    self,
    key,
    value,
    _ex);
}
#else /* ISO C 1999 inline semantics */
;
#endif /* SIDL_C_INLINE_REPEAT_DEFN */

/*
 * Method:  unpackFloat[]
 */

SIDL_C_INLINE_DEFN
void
sidlx_rmi_Simsponse_unpackFloat(
  /* in */ sidlx_rmi_Simsponse self,
  /* in */ const char* key,
  /* out */ float* value,
  /* out */ sidl_BaseInterface *_ex)
#if SIDL_C_INLINE_REPEAT_DEFN
{
  (*self->d_epv->f_unpackFloat)(
    self,
    key,
    value,
    _ex);
}
#else /* ISO C 1999 inline semantics */
;
#endif /* SIDL_C_INLINE_REPEAT_DEFN */

/*
 * Method:  unpackDouble[]
 */

SIDL_C_INLINE_DEFN
void
sidlx_rmi_Simsponse_unpackDouble(
  /* in */ sidlx_rmi_Simsponse self,
  /* in */ const char* key,
  /* out */ double* value,
  /* out */ sidl_BaseInterface *_ex)
#if SIDL_C_INLINE_REPEAT_DEFN
{
  (*self->d_epv->f_unpackDouble)(
    self,
    key,
    value,
    _ex);
}
#else /* ISO C 1999 inline semantics */
;
#endif /* SIDL_C_INLINE_REPEAT_DEFN */

/*
 * Method:  unpackFcomplex[]
 */

SIDL_C_INLINE_DEFN
void
sidlx_rmi_Simsponse_unpackFcomplex(
  /* in */ sidlx_rmi_Simsponse self,
  /* in */ const char* key,
  /* out */ struct sidl_fcomplex* value,
  /* out */ sidl_BaseInterface *_ex)
#if SIDL_C_INLINE_REPEAT_DEFN
{
  (*self->d_epv->f_unpackFcomplex)(
    self,
    key,
    value,
    _ex);
}
#else /* ISO C 1999 inline semantics */
;
#endif /* SIDL_C_INLINE_REPEAT_DEFN */

/*
 * Method:  unpackDcomplex[]
 */

SIDL_C_INLINE_DEFN
void
sidlx_rmi_Simsponse_unpackDcomplex(
  /* in */ sidlx_rmi_Simsponse self,
  /* in */ const char* key,
  /* out */ struct sidl_dcomplex* value,
  /* out */ sidl_BaseInterface *_ex)
#if SIDL_C_INLINE_REPEAT_DEFN
{
  (*self->d_epv->f_unpackDcomplex)(
    self,
    key,
    value,
    _ex);
}
#else /* ISO C 1999 inline semantics */
;
#endif /* SIDL_C_INLINE_REPEAT_DEFN */

/*
 * Method:  unpackString[]
 */

SIDL_C_INLINE_DEFN
void
sidlx_rmi_Simsponse_unpackString(
  /* in */ sidlx_rmi_Simsponse self,
  /* in */ const char* key,
  /* out */ char** value,
  /* out */ sidl_BaseInterface *_ex)
#if SIDL_C_INLINE_REPEAT_DEFN
{
  (*self->d_epv->f_unpackString)(
    self,
    key,
    value,
    _ex);
}
#else /* ISO C 1999 inline semantics */
;
#endif /* SIDL_C_INLINE_REPEAT_DEFN */

/*
 * Method:  unpackSerializable[]
 */

SIDL_C_INLINE_DEFN
void
sidlx_rmi_Simsponse_unpackSerializable(
  /* in */ sidlx_rmi_Simsponse self,
  /* in */ const char* key,
  /* out */ sidl_io_Serializable* value,
  /* out */ sidl_BaseInterface *_ex)
#if SIDL_C_INLINE_REPEAT_DEFN
{
  (*self->d_epv->f_unpackSerializable)(
    self,
    key,
    value,
    _ex);
}
#else /* ISO C 1999 inline semantics */
;
#endif /* SIDL_C_INLINE_REPEAT_DEFN */

/*
 *  unpack arrays of values 
 * It is possible to ensure an array is
 * in a certain order by passing in ordering and dimension
 * requirements.  ordering should represent a value in the
 * sidl_array_ordering enumeration in sidlArray.h If either
 * argument is 0, it means there is no restriction on that
 * aspect.  The rarray flag should be set if the array being
 * passed in is actually an rarray.  The semantics are slightly
 * different for rarrays.  The passed in array MUST be reused,
 * even if the array has changed bounds.
 */

SIDL_C_INLINE_DEFN
void
sidlx_rmi_Simsponse_unpackBoolArray(
  /* in */ sidlx_rmi_Simsponse self,
  /* in */ const char* key,
  /* out array<bool> */ struct sidl_bool__array** value,
  /* in */ int32_t ordering,
  /* in */ int32_t dimen,
  /* in */ sidl_bool isRarray,
  /* out */ sidl_BaseInterface *_ex)
#if SIDL_C_INLINE_REPEAT_DEFN
{
  (*self->d_epv->f_unpackBoolArray)(
    self,
    key,
    value,
    ordering,
    dimen,
    isRarray,
    _ex);
}
#else /* ISO C 1999 inline semantics */
;
#endif /* SIDL_C_INLINE_REPEAT_DEFN */

/*
 * Method:  unpackCharArray[]
 */

SIDL_C_INLINE_DEFN
void
sidlx_rmi_Simsponse_unpackCharArray(
  /* in */ sidlx_rmi_Simsponse self,
  /* in */ const char* key,
  /* out array<char> */ struct sidl_char__array** value,
  /* in */ int32_t ordering,
  /* in */ int32_t dimen,
  /* in */ sidl_bool isRarray,
  /* out */ sidl_BaseInterface *_ex)
#if SIDL_C_INLINE_REPEAT_DEFN
{
  (*self->d_epv->f_unpackCharArray)(
    self,
    key,
    value,
    ordering,
    dimen,
    isRarray,
    _ex);
}
#else /* ISO C 1999 inline semantics */
;
#endif /* SIDL_C_INLINE_REPEAT_DEFN */

/*
 * Method:  unpackIntArray[]
 */

SIDL_C_INLINE_DEFN
void
sidlx_rmi_Simsponse_unpackIntArray(
  /* in */ sidlx_rmi_Simsponse self,
  /* in */ const char* key,
  /* out array<int> */ struct sidl_int__array** value,
  /* in */ int32_t ordering,
  /* in */ int32_t dimen,
  /* in */ sidl_bool isRarray,
  /* out */ sidl_BaseInterface *_ex)
#if SIDL_C_INLINE_REPEAT_DEFN
{
  (*self->d_epv->f_unpackIntArray)(
    self,
    key,
    value,
    ordering,
    dimen,
    isRarray,
    _ex);
}
#else /* ISO C 1999 inline semantics */
;
#endif /* SIDL_C_INLINE_REPEAT_DEFN */

/*
 * Method:  unpackLongArray[]
 */

SIDL_C_INLINE_DEFN
void
sidlx_rmi_Simsponse_unpackLongArray(
  /* in */ sidlx_rmi_Simsponse self,
  /* in */ const char* key,
  /* out array<long> */ struct sidl_long__array** value,
  /* in */ int32_t ordering,
  /* in */ int32_t dimen,
  /* in */ sidl_bool isRarray,
  /* out */ sidl_BaseInterface *_ex)
#if SIDL_C_INLINE_REPEAT_DEFN
{
  (*self->d_epv->f_unpackLongArray)(
    self,
    key,
    value,
    ordering,
    dimen,
    isRarray,
    _ex);
}
#else /* ISO C 1999 inline semantics */
;
#endif /* SIDL_C_INLINE_REPEAT_DEFN */

/*
 * Method:  unpackOpaqueArray[]
 */

SIDL_C_INLINE_DEFN
void
sidlx_rmi_Simsponse_unpackOpaqueArray(
  /* in */ sidlx_rmi_Simsponse self,
  /* in */ const char* key,
  /* out array<opaque> */ struct sidl_opaque__array** value,
  /* in */ int32_t ordering,
  /* in */ int32_t dimen,
  /* in */ sidl_bool isRarray,
  /* out */ sidl_BaseInterface *_ex)
#if SIDL_C_INLINE_REPEAT_DEFN
{
  (*self->d_epv->f_unpackOpaqueArray)(
    self,
    key,
    value,
    ordering,
    dimen,
    isRarray,
    _ex);
}
#else /* ISO C 1999 inline semantics */
;
#endif /* SIDL_C_INLINE_REPEAT_DEFN */

/*
 * Method:  unpackFloatArray[]
 */

SIDL_C_INLINE_DEFN
void
sidlx_rmi_Simsponse_unpackFloatArray(
  /* in */ sidlx_rmi_Simsponse self,
  /* in */ const char* key,
  /* out array<float> */ struct sidl_float__array** value,
  /* in */ int32_t ordering,
  /* in */ int32_t dimen,
  /* in */ sidl_bool isRarray,
  /* out */ sidl_BaseInterface *_ex)
#if SIDL_C_INLINE_REPEAT_DEFN
{
  (*self->d_epv->f_unpackFloatArray)(
    self,
    key,
    value,
    ordering,
    dimen,
    isRarray,
    _ex);
}
#else /* ISO C 1999 inline semantics */
;
#endif /* SIDL_C_INLINE_REPEAT_DEFN */

/*
 * Method:  unpackDoubleArray[]
 */

SIDL_C_INLINE_DEFN
void
sidlx_rmi_Simsponse_unpackDoubleArray(
  /* in */ sidlx_rmi_Simsponse self,
  /* in */ const char* key,
  /* out array<double> */ struct sidl_double__array** value,
  /* in */ int32_t ordering,
  /* in */ int32_t dimen,
  /* in */ sidl_bool isRarray,
  /* out */ sidl_BaseInterface *_ex)
#if SIDL_C_INLINE_REPEAT_DEFN
{
  (*self->d_epv->f_unpackDoubleArray)(
    self,
    key,
    value,
    ordering,
    dimen,
    isRarray,
    _ex);
}
#else /* ISO C 1999 inline semantics */
;
#endif /* SIDL_C_INLINE_REPEAT_DEFN */

/*
 * Method:  unpackFcomplexArray[]
 */

SIDL_C_INLINE_DEFN
void
sidlx_rmi_Simsponse_unpackFcomplexArray(
  /* in */ sidlx_rmi_Simsponse self,
  /* in */ const char* key,
  /* out array<fcomplex> */ struct sidl_fcomplex__array** value,
  /* in */ int32_t ordering,
  /* in */ int32_t dimen,
  /* in */ sidl_bool isRarray,
  /* out */ sidl_BaseInterface *_ex)
#if SIDL_C_INLINE_REPEAT_DEFN
{
  (*self->d_epv->f_unpackFcomplexArray)(
    self,
    key,
    value,
    ordering,
    dimen,
    isRarray,
    _ex);
}
#else /* ISO C 1999 inline semantics */
;
#endif /* SIDL_C_INLINE_REPEAT_DEFN */

/*
 * Method:  unpackDcomplexArray[]
 */

SIDL_C_INLINE_DEFN
void
sidlx_rmi_Simsponse_unpackDcomplexArray(
  /* in */ sidlx_rmi_Simsponse self,
  /* in */ const char* key,
  /* out array<dcomplex> */ struct sidl_dcomplex__array** value,
  /* in */ int32_t ordering,
  /* in */ int32_t dimen,
  /* in */ sidl_bool isRarray,
  /* out */ sidl_BaseInterface *_ex)
#if SIDL_C_INLINE_REPEAT_DEFN
{
  (*self->d_epv->f_unpackDcomplexArray)(
    self,
    key,
    value,
    ordering,
    dimen,
    isRarray,
    _ex);
}
#else /* ISO C 1999 inline semantics */
;
#endif /* SIDL_C_INLINE_REPEAT_DEFN */

/*
 * Method:  unpackStringArray[]
 */

SIDL_C_INLINE_DEFN
void
sidlx_rmi_Simsponse_unpackStringArray(
  /* in */ sidlx_rmi_Simsponse self,
  /* in */ const char* key,
  /* out array<string> */ struct sidl_string__array** value,
  /* in */ int32_t ordering,
  /* in */ int32_t dimen,
  /* in */ sidl_bool isRarray,
  /* out */ sidl_BaseInterface *_ex)
#if SIDL_C_INLINE_REPEAT_DEFN
{
  (*self->d_epv->f_unpackStringArray)(
    self,
    key,
    value,
    ordering,
    dimen,
    isRarray,
    _ex);
}
#else /* ISO C 1999 inline semantics */
;
#endif /* SIDL_C_INLINE_REPEAT_DEFN */

/*
 * Method:  unpackGenericArray[]
 */

SIDL_C_INLINE_DEFN
void
sidlx_rmi_Simsponse_unpackGenericArray(
  /* in */ sidlx_rmi_Simsponse self,
  /* in */ const char* key,
  /* out array<> */ struct sidl__array** value,
  /* out */ sidl_BaseInterface *_ex)
#if SIDL_C_INLINE_REPEAT_DEFN
{
  (*self->d_epv->f_unpackGenericArray)(
    self,
    key,
    value,
    _ex);
}
#else /* ISO C 1999 inline semantics */
;
#endif /* SIDL_C_INLINE_REPEAT_DEFN */

/*
 * Method:  unpackSerializableArray[]
 */

SIDL_C_INLINE_DEFN
void
sidlx_rmi_Simsponse_unpackSerializableArray(
  /* in */ sidlx_rmi_Simsponse self,
  /* in */ const char* key,
  /* out array<sidl.io.Serializable> */ struct sidl_io_Serializable__array** 
    value,
  /* in */ int32_t ordering,
  /* in */ int32_t dimen,
  /* in */ sidl_bool isRarray,
  /* out */ sidl_BaseInterface *_ex)
#if SIDL_C_INLINE_REPEAT_DEFN
{
  (*self->d_epv->f_unpackSerializableArray)(
    self,
    key,
    value,
    ordering,
    dimen,
    isRarray,
    _ex);
}
#else /* ISO C 1999 inline semantics */
;
#endif /* SIDL_C_INLINE_REPEAT_DEFN */

/*
 * Cast method for interface and class type conversions.
 */

sidlx_rmi_Simsponse
sidlx_rmi_Simsponse__cast(
  void* obj,
  sidl_BaseInterface* _ex)
{
  sidlx_rmi_Simsponse cast = NULL;

  if(!connect_loaded) {
    connect_loaded = 1;
    sidl_rmi_ConnectRegistry_registerConnect("sidlx.rmi.Simsponse", (
      void*)sidlx_rmi_Simsponse__IHConnect,_ex);SIDL_CHECK(*_ex);
  }
  if (obj != NULL) {
    sidl_BaseInterface base = (sidl_BaseInterface) obj;
    cast = (sidlx_rmi_Simsponse) (*base->d_epv->f__cast)(
      base->d_object,
      "sidlx.rmi.Simsponse", _ex); SIDL_CHECK(*_ex);
  }

  EXIT:
  return cast;
}

/*
 * String cast method for interface and class type conversions.
 */

void*
sidlx_rmi_Simsponse__cast2(
  void* obj,
  const char* type,
  sidl_BaseInterface* _ex)
{
  void* cast = NULL;

  if (obj != NULL) {
    sidl_BaseInterface base = (sidl_BaseInterface) obj;
    cast = (*base->d_epv->f__cast)(base->d_object, type, _ex); SIDL_CHECK(*_ex);
  }

  EXIT:
  return cast;
}
/*
 * Select and execute a method by name
 */

SIDL_C_INLINE_DEFN
void
sidlx_rmi_Simsponse__exec(
  /* in */ sidlx_rmi_Simsponse self,
  /* in */ const char* methodName,
  /* in */ sidl_rmi_Call inArgs,
  /* in */ sidl_rmi_Return outArgs,
  /* out */ sidl_BaseInterface *_ex)
#if SIDL_C_INLINE_REPEAT_DEFN
{
  (*self->d_epv->f__exec)(
    self,
    methodName,
    inArgs,
    outArgs,
    _ex);
}
#else /* ISO C 1999 inline semantics */
;
#endif /* SIDL_C_INLINE_REPEAT_DEFN */


/*
 * Get the URL of the Implementation of this object (for RMI)
 */

SIDL_C_INLINE_DEFN
char*
sidlx_rmi_Simsponse__getURL(
  /* in */ sidlx_rmi_Simsponse self,
  /* out */ sidl_BaseInterface *_ex)
#if SIDL_C_INLINE_REPEAT_DEFN
{
  char* _result;
  _result = (*self->d_epv->f__getURL)(
    self,
    _ex);
  return _result;
}
#else /* ISO C 1999 inline semantics */
;
#endif /* SIDL_C_INLINE_REPEAT_DEFN */


/*
 * On a remote object, addrefs the remote instance.
 */

SIDL_C_INLINE_DEFN
void
sidlx_rmi_Simsponse__raddRef(
  /* in */ sidlx_rmi_Simsponse self,
  /* out */ sidl_BaseInterface *_ex)
#if SIDL_C_INLINE_REPEAT_DEFN
{
  (*self->d_epv->f__raddRef)(
    self,
    _ex);
}
#else /* ISO C 1999 inline semantics */
;
#endif /* SIDL_C_INLINE_REPEAT_DEFN */


/*
 * Method to set whether or not method hooks should be invoked.
 */

SIDL_C_INLINE_DEFN
void
sidlx_rmi_Simsponse__set_hooks(
  /* in */ sidlx_rmi_Simsponse self,
  /* in */ sidl_bool on,
  /* out */ sidl_BaseInterface *_ex)
#if SIDL_C_INLINE_REPEAT_DEFN
{
  (*self->d_epv->f__set_hooks)(
    self,
    on,
    _ex);
}
#else /* ISO C 1999 inline semantics */
;
#endif /* SIDL_C_INLINE_REPEAT_DEFN */

/*
 * TRUE if this object is remote, false if local
 */

SIDL_C_INLINE_DEFN
sidl_bool
sidlx_rmi_Simsponse__isRemote(
  /* in */ sidlx_rmi_Simsponse self,
  /* out */ sidl_BaseInterface *_ex)
#if SIDL_C_INLINE_REPEAT_DEFN
{
  sidl_bool _result;
  _result = (*self->d_epv->f__isRemote)(
    self,
    _ex);
  return _result;
}
#else /* ISO C 1999 inline semantics */
;
#endif /* SIDL_C_INLINE_REPEAT_DEFN */


/*
 * TRUE if this object is remote, false if local
 */

sidl_bool
sidlx_rmi_Simsponse__isLocal(
  /* in */ sidlx_rmi_Simsponse self,
  /* out */ sidl_BaseInterface *_ex)
{
  return !sidlx_rmi_Simsponse__isRemote(self,_ex);
}

/**
 * Create a contiguous array of the given dimension with specified
 * index bounds in column-major order. This array
 * owns and manages its data.
 * This function initializes the contents of the array to
 * NULL.
 */
struct sidlx_rmi_Simsponse__array*
sidlx_rmi_Simsponse__array_createCol(
  int32_t       dimen,
  const int32_t lower[],
  const int32_t upper[])
{
  return (struct sidlx_rmi_Simsponse__array*)sidl_interface__array_createCol(
    dimen, lower, upper);
}

/**
 * Create a contiguous array of the given dimension with specified
 * index bounds in row-major order. This array
 * owns and manages its data.
 * This function initializes the contents of the array to
 * NULL.
 */
struct sidlx_rmi_Simsponse__array*
sidlx_rmi_Simsponse__array_createRow(
  int32_t       dimen,
  const int32_t lower[],
  const int32_t upper[])
{
  return (struct sidlx_rmi_Simsponse__array*)sidl_interface__array_createRow(
    dimen, lower, upper);
}

/**
 * Create a contiguous one-dimensional array with a lower index
 * of 0 and an upper index of len-1. This array
 * owns and manages its data.
 * This function initializes the contents of the array to
 * NULL.
 */
struct sidlx_rmi_Simsponse__array*
sidlx_rmi_Simsponse__array_create1d(int32_t len)
{
  return (struct sidlx_rmi_Simsponse__array*)sidl_interface__array_create1d(
    len);
}

/**
 * Create a dense one-dimensional vector with a lower
 * index of 0 and an upper index of len-1. The initial data for this
 * new array is copied from data. This will increment the reference
 * count of each non-NULL object/interface reference in data.
 * 
 * This array owns and manages its data.
 */
struct sidlx_rmi_Simsponse__array*
sidlx_rmi_Simsponse__array_create1dInit(
  int32_t len, 
  sidlx_rmi_Simsponse* data)
{
  return (struct sidlx_rmi_Simsponse__array*)sidl_interface__array_create1dInit(
    len, (struct sidl_BaseInterface__object **)data);
}

/**
 * Create a contiguous two-dimensional array in column-major
 * order with a lower index of (0,0) and an upper index of
 * (m-1,n-1). This array owns and manages its data.
 * This function initializes the contents of the array to
 * NULL.
 */
struct sidlx_rmi_Simsponse__array*
sidlx_rmi_Simsponse__array_create2dCol(int32_t m, int32_t n)
{
  return (struct sidlx_rmi_Simsponse__array*)sidl_interface__array_create2dCol(
    m, n);
}

/**
 * Create a contiguous two-dimensional array in row-major
 * order with a lower index of (0,0) and an upper index of
 * (m-1,n-1). This array owns and manages its data.
 * This function initializes the contents of the array to
 * NULL.
 */
struct sidlx_rmi_Simsponse__array*
sidlx_rmi_Simsponse__array_create2dRow(int32_t m, int32_t n)
{
  return (struct sidlx_rmi_Simsponse__array*)sidl_interface__array_create2dRow(
    m, n);
}

/**
 * Create an array that uses data (memory) from another
 * source. The initial contents are determined by the
 * data being borrowed.
 * Any time an element in the borrowed array is replaced
 * via a set call, deleteRef will be called on the
 * value being replaced if it is not NULL.
 */
struct sidlx_rmi_Simsponse__array*
sidlx_rmi_Simsponse__array_borrow(
  sidlx_rmi_Simsponse* firstElement,
  int32_t       dimen,
  const int32_t lower[],
  const int32_t upper[],
  const int32_t stride[])
{
  return (struct sidlx_rmi_Simsponse__array*)sidl_interface__array_borrow(
    (struct sidl_BaseInterface__object **)
    firstElement, dimen, lower, upper, stride);
}

/**
 * If array is borrowed, allocate a new self-sufficient
 * array and copy the borrowed array into the new array;
 * otherwise, increment the reference count and return
 * the array passed in. Use this whenever you want to
 * make a copy of a method argument because arrays
 * passed into methods aren't guaranteed to exist after
 * the method call.
 */
struct sidlx_rmi_Simsponse__array*
sidlx_rmi_Simsponse__array_smartCopy(
  struct sidlx_rmi_Simsponse__array *array)
{
  return (struct sidlx_rmi_Simsponse__array*)
    sidl_interface__array_smartCopy((struct sidl_interface__array *)array);
}

/**
 * Increment the array's internal reference count by one.
 */
void
sidlx_rmi_Simsponse__array_addRef(
  struct sidlx_rmi_Simsponse__array* array)
{
  sidl_interface__array_addRef((struct sidl_interface__array *)array);
}

/**
 * Decrement the array's internal reference count by one.
 * If the reference count goes to zero, destroy the array.
 * If the array isn't borrowed, this releases all the
 * object references held by the array.
 */
void
sidlx_rmi_Simsponse__array_deleteRef(
  struct sidlx_rmi_Simsponse__array* array)
{
  sidl_interface__array_deleteRef((struct sidl_interface__array *)array);
}

/**
 * Retrieve element i1 of a(n) 1-dimensional array.
 */
sidlx_rmi_Simsponse
sidlx_rmi_Simsponse__array_get1(
  const struct sidlx_rmi_Simsponse__array* array,
  const int32_t i1)
{
  return (sidlx_rmi_Simsponse)
    sidl_interface__array_get1((const struct sidl_interface__array *)array
    , i1);
}

/**
 * Retrieve element (i1,i2) of a(n) 2-dimensional array.
 */
sidlx_rmi_Simsponse
sidlx_rmi_Simsponse__array_get2(
  const struct sidlx_rmi_Simsponse__array* array,
  const int32_t i1,
  const int32_t i2)
{
  return (sidlx_rmi_Simsponse)
    sidl_interface__array_get2((const struct sidl_interface__array *)array
    , i1, i2);
}

/**
 * Retrieve element (i1,i2,i3) of a(n) 3-dimensional array.
 */
sidlx_rmi_Simsponse
sidlx_rmi_Simsponse__array_get3(
  const struct sidlx_rmi_Simsponse__array* array,
  const int32_t i1,
  const int32_t i2,
  const int32_t i3)
{
  return (sidlx_rmi_Simsponse)
    sidl_interface__array_get3((const struct sidl_interface__array *)array
    , i1, i2, i3);
}

/**
 * Retrieve element (i1,i2,i3,i4) of a(n) 4-dimensional array.
 */
sidlx_rmi_Simsponse
sidlx_rmi_Simsponse__array_get4(
  const struct sidlx_rmi_Simsponse__array* array,
  const int32_t i1,
  const int32_t i2,
  const int32_t i3,
  const int32_t i4)
{
  return (sidlx_rmi_Simsponse)
    sidl_interface__array_get4((const struct sidl_interface__array *)array
    , i1, i2, i3, i4);
}

/**
 * Retrieve element (i1,i2,i3,i4,i5) of a(n) 5-dimensional array.
 */
sidlx_rmi_Simsponse
sidlx_rmi_Simsponse__array_get5(
  const struct sidlx_rmi_Simsponse__array* array,
  const int32_t i1,
  const int32_t i2,
  const int32_t i3,
  const int32_t i4,
  const int32_t i5)
{
  return (sidlx_rmi_Simsponse)
    sidl_interface__array_get5((const struct sidl_interface__array *)array
    , i1, i2, i3, i4, i5);
}

/**
 * Retrieve element (i1,i2,i3,i4,i5,i6) of a(n) 6-dimensional array.
 */
sidlx_rmi_Simsponse
sidlx_rmi_Simsponse__array_get6(
  const struct sidlx_rmi_Simsponse__array* array,
  const int32_t i1,
  const int32_t i2,
  const int32_t i3,
  const int32_t i4,
  const int32_t i5,
  const int32_t i6)
{
  return (sidlx_rmi_Simsponse)
    sidl_interface__array_get6((const struct sidl_interface__array *)array
    , i1, i2, i3, i4, i5, i6);
}

/**
 * Retrieve element (i1,i2,i3,i4,i5,i6,i7) of a(n) 7-dimensional array.
 */
sidlx_rmi_Simsponse
sidlx_rmi_Simsponse__array_get7(
  const struct sidlx_rmi_Simsponse__array* array,
  const int32_t i1,
  const int32_t i2,
  const int32_t i3,
  const int32_t i4,
  const int32_t i5,
  const int32_t i6,
  const int32_t i7)
{
  return (sidlx_rmi_Simsponse)
    sidl_interface__array_get7((const struct sidl_interface__array *)array
    , i1, i2, i3, i4, i5, i6, i7);
}

/**
 * Retrieve element indices of an n-dimensional array.
 * indices is assumed to have the right number of elements
 * for the dimension of array.
 */
sidlx_rmi_Simsponse
sidlx_rmi_Simsponse__array_get(
  const struct sidlx_rmi_Simsponse__array* array,
  const int32_t indices[])
{
  return (sidlx_rmi_Simsponse)
    sidl_interface__array_get((const struct sidl_interface__array *)array, 
      indices);
}

/**
 * Set element i1 of a(n) 1-dimensional array to value.
 */
void
sidlx_rmi_Simsponse__array_set1(
  struct sidlx_rmi_Simsponse__array* array,
  const int32_t i1,
  sidlx_rmi_Simsponse const value)
{
  sidl_interface__array_set1((struct sidl_interface__array *)array
  , i1, (struct sidl_BaseInterface__object *)value);
}

/**
 * Set element (i1,i2) of a(n) 2-dimensional array to value.
 */
void
sidlx_rmi_Simsponse__array_set2(
  struct sidlx_rmi_Simsponse__array* array,
  const int32_t i1,
  const int32_t i2,
  sidlx_rmi_Simsponse const value)
{
  sidl_interface__array_set2((struct sidl_interface__array *)array
  , i1, i2, (struct sidl_BaseInterface__object *)value);
}

/**
 * Set element (i1,i2,i3) of a(n) 3-dimensional array to value.
 */
void
sidlx_rmi_Simsponse__array_set3(
  struct sidlx_rmi_Simsponse__array* array,
  const int32_t i1,
  const int32_t i2,
  const int32_t i3,
  sidlx_rmi_Simsponse const value)
{
  sidl_interface__array_set3((struct sidl_interface__array *)array
  , i1, i2, i3, (struct sidl_BaseInterface__object *)value);
}

/**
 * Set element (i1,i2,i3,i4) of a(n) 4-dimensional array to value.
 */
void
sidlx_rmi_Simsponse__array_set4(
  struct sidlx_rmi_Simsponse__array* array,
  const int32_t i1,
  const int32_t i2,
  const int32_t i3,
  const int32_t i4,
  sidlx_rmi_Simsponse const value)
{
  sidl_interface__array_set4((struct sidl_interface__array *)array
  , i1, i2, i3, i4, (struct sidl_BaseInterface__object *)value);
}

/**
 * Set element (i1,i2,i3,i4,i5) of a(n) 5-dimensional array to value.
 */
void
sidlx_rmi_Simsponse__array_set5(
  struct sidlx_rmi_Simsponse__array* array,
  const int32_t i1,
  const int32_t i2,
  const int32_t i3,
  const int32_t i4,
  const int32_t i5,
  sidlx_rmi_Simsponse const value)
{
  sidl_interface__array_set5((struct sidl_interface__array *)array
  , i1, i2, i3, i4, i5, (struct sidl_BaseInterface__object *)value);
}

/**
 * Set element (i1,i2,i3,i4,i5,i6) of a(n) 6-dimensional array to value.
 */
void
sidlx_rmi_Simsponse__array_set6(
  struct sidlx_rmi_Simsponse__array* array,
  const int32_t i1,
  const int32_t i2,
  const int32_t i3,
  const int32_t i4,
  const int32_t i5,
  const int32_t i6,
  sidlx_rmi_Simsponse const value)
{
  sidl_interface__array_set6((struct sidl_interface__array *)array
  , i1, i2, i3, i4, i5, i6, (struct sidl_BaseInterface__object *)value);
}

/**
 * Set element (i1,i2,i3,i4,i5,i6,i7) of a(n) 7-dimensional array to value.
 */
void
sidlx_rmi_Simsponse__array_set7(
  struct sidlx_rmi_Simsponse__array* array,
  const int32_t i1,
  const int32_t i2,
  const int32_t i3,
  const int32_t i4,
  const int32_t i5,
  const int32_t i6,
  const int32_t i7,
  sidlx_rmi_Simsponse const value)
{
  sidl_interface__array_set7((struct sidl_interface__array *)array
  , i1, i2, i3, i4, i5, i6, i7, (struct sidl_BaseInterface__object *)value);
}

/**
 * Set element indices of an n-dimensional array to value.indices is assumed to have the right number of elements
 * for the dimension of array.
 */
void
sidlx_rmi_Simsponse__array_set(
  struct sidlx_rmi_Simsponse__array* array,
  const int32_t indices[],
  sidlx_rmi_Simsponse const value)
{
  sidl_interface__array_set((struct sidl_interface__array *)array, indices, (
    struct sidl_BaseInterface__object *)value);
}

/**
 * Return the dimension of array. If the array pointer is
 * NULL, zero is returned.
 */
int32_t
sidlx_rmi_Simsponse__array_dimen(
  const struct sidlx_rmi_Simsponse__array* array)
{
  return sidl_interface__array_dimen((struct sidl_interface__array *)array);
}

/**
 * Return the lower bound of dimension ind.
 * If ind is not a valid dimension, 0 is returned.
 * The valid range for ind is from 0 to dimen-1.
 */
int32_t
sidlx_rmi_Simsponse__array_lower(
  const struct sidlx_rmi_Simsponse__array* array,
  const int32_t ind)
{
  return sidl_interface__array_lower((struct sidl_interface__array *)array, 
    ind);
}

/**
 * Return the upper bound of dimension ind.
 * If ind is not a valid dimension, -1 is returned.
 * The valid range for ind is from 0 to dimen-1.
 */
int32_t
sidlx_rmi_Simsponse__array_upper(
  const struct sidlx_rmi_Simsponse__array* array,
  const int32_t ind)
{
  return sidl_interface__array_upper((struct sidl_interface__array *)array, 
    ind);
}

/**
 * Return the length of dimension ind.
 * If ind is not a valid dimension, -1 is returned.
 * The valid range for ind is from 0 to dimen-1.
 */
int32_t
sidlx_rmi_Simsponse__array_length(
  const struct sidlx_rmi_Simsponse__array* array,
  const int32_t ind)
{
  return sidl_interface__array_length((struct sidl_interface__array *)array, 
    ind);
}

/**
 * Return the stride of dimension ind.
 * If ind is not a valid dimension, 0 is returned.
 * The valid range for ind is from 0 to dimen-1.
 */
int32_t
sidlx_rmi_Simsponse__array_stride(
  const struct sidlx_rmi_Simsponse__array* array,
  const int32_t ind)
{
  return sidl_interface__array_stride((struct sidl_interface__array *)array, 
    ind);
}

/**
 * Return a true value iff the array is a contiguous
 * column-major ordered array. A NULL array argument
 * causes 0 to be returned.
 */
int
sidlx_rmi_Simsponse__array_isColumnOrder(
  const struct sidlx_rmi_Simsponse__array* array)
{
  return sidl_interface__array_isColumnOrder((struct sidl_interface__array 
    *)array);
}

/**
 * Return a true value iff the array is a contiguous
 * row-major ordered array. A NULL array argument
 * causes 0 to be returned.
 */
int
sidlx_rmi_Simsponse__array_isRowOrder(
  const struct sidlx_rmi_Simsponse__array* array)
{
  return sidl_interface__array_isRowOrder((struct sidl_interface__array 
    *)array);
}

/**
 * Copy the contents of one array (src) to a second array
 * (dest). For the copy to take place, both arrays must
 * exist and be of the same dimension. This method will
 * not modify dest's size, index bounds, or stride; only
 * the array element values of dest may be changed by
 * this function. No part of src is ever changed by copy.
 * 
 * On exit, dest[i][j][k]... = src[i][j][k]... for all
 * indices i,j,k...  that are in both arrays. If dest and
 * src have no indices in common, nothing is copied. For
 * example, if src is a 1-d array with elements 0-5 and
 * dest is a 1-d array with elements 2-3, this function
 * will make the following assignments:
 *   dest[2] = src[2],
 *   dest[3] = src[3].
 * The function copied the elements that both arrays have
 * in common.  If dest had elements 4-10, this function
 * will make the following assignments:
 *   dest[4] = src[4],
 *   dest[5] = src[5].
 */
void
sidlx_rmi_Simsponse__array_copy(
  const struct sidlx_rmi_Simsponse__array* src,
  struct sidlx_rmi_Simsponse__array* dest)
{
  sidl_interface__array_copy((const struct sidl_interface__array *)src,
                             (struct sidl_interface__array *)dest);
}

/**
 * Create a sub-array of another array. This resulting
 * array shares data with the original array. The new
 * array can be of the same dimension or potentially
 * less assuming the original array has dimension
 * greater than 1.  If you are removing dimension,
 * indicate the dimensions to remove by setting
 * numElem[i] to zero for any dimension i wthat should
 * go away in the new array.  The meaning of each
 * argument is covered below.
 * 
 * src       the array to be created will be a subset
 *           of this array. If this argument is NULL,
 *           NULL will be returned. The array returned
 *           borrows data from src, so modifying src or
 *           the returned array will modify both
 *           arrays.
 * 
 * dimen     this argument must be greater than zero
 *           and less than or equal to the dimension of
 *           src. An illegal value will cause a NULL
 *           return value.
 * 
 * numElem   this specifies how many elements from src
 *           should be taken in each dimension. A zero
 *           entry indicates that the dimension should
 *           not appear in the new array.  This
 *           argument should be an array with an entry
 *           for each dimension of src.  Passing NULL
 *           here will cause NULL to be returned.  If
 *           srcStart[i] + numElem[i]*srcStride[i] is
 *           greater than upper[i] for src or if
 *           srcStart[i] + numElem[i]*srcStride[i] is
 *           less than lower[i] for src, NULL will be
 *           returned.
 * 
 * srcStart  this array holds the coordinates of the
 *           first element of the new array. If this
 *           argument is NULL, the first element of src
 *           will be the first element of the new
 *           array. If non-NULL, this argument should
 *           be an array with an entry for each
 *           dimension of src.  If srcStart[i] is less
 *           than lower[i] for the array src, NULL will
 *           be returned.
 * 
 * srcStride this array lets you specify the stride
 *           between elements in each dimension of
 *           src. This stride is relative to the
 *           coordinate system of the src array. If
 *           this argument is NULL, the stride is taken
 *           to be one in each dimension.  If non-NULL,
 *           this argument should be an array with an
 *           entry for each dimension of src.
 * 
 * newLower  this argument is like lower in a create
 *           method. It sets the coordinates for the
 *           first element in the new array.  If this
 *           argument is NULL, the values indicated by
 *           srcStart will be used. If non-NULL, this
 *           should be an array with dimen elements.
 */
struct sidlx_rmi_Simsponse__array*
sidlx_rmi_Simsponse__array_slice(
  struct sidlx_rmi_Simsponse__array* src,
  int32_t        dimen,
  const int32_t  numElem[],
  const int32_t  *srcStart,
  const int32_t  *srcStride,
  const int32_t  *newStart)
{
  return (struct sidlx_rmi_Simsponse__array*)
    sidl_interface__array_slice((struct sidl_interface__array *)src,
                                dimen, numElem, srcStart, srcStride, newStart);
}

/**
 * If necessary, convert a general matrix into a matrix
 * with the required properties. This checks the
 * dimension and ordering of the matrix.  If both these
 * match, it simply returns a new reference to the
 * existing matrix. If the dimension of the incoming
 * array doesn't match, it returns NULL. If the ordering
 * of the incoming array doesn't match the specification,
 * a new array is created with the desired ordering and
 * the content of the incoming array is copied to the new
 * array.
 * 
 * The ordering parameter should be one of the constants
 * defined in enum sidl_array_ordering
 * (e.g. sidl_general_order, sidl_column_major_order, or
 * sidl_row_major_order). If you specify
 * sidl_general_order, this routine will only check the
 * dimension because any matrix is sidl_general_order.
 * 
 * The caller assumes ownership of the returned reference
 * unless it's NULL.
 */
struct sidlx_rmi_Simsponse__array*
sidlx_rmi_Simsponse__array_ensure(
  struct sidlx_rmi_Simsponse__array* src,
  int32_t dimen,
  int     ordering)
{
  return (struct sidlx_rmi_Simsponse__array*)
    sidl_interface__array_ensure((struct sidl_interface__array *)src, dimen, 
      ordering);
}

#include <stdlib.h>
#include <string.h>
#ifndef included_sidl_BaseClass_h
#include "sidl_BaseClass.h"
#endif
#ifndef included_sidl_ClassInfo_h
#include "sidl_ClassInfo.h"
#endif
#ifndef included_sidl_rmi_ProtocolFactory_h
#include "sidl_rmi_ProtocolFactory.h"
#endif
#ifndef included_sidl_rmi_InstanceRegistry_h
#include "sidl_rmi_InstanceRegistry.h"
#endif
#ifndef included_sidl_rmi_InstanceHandle_h
#include "sidl_rmi_InstanceHandle.h"
#endif
#ifndef included_sidl_rmi_Invocation_h
#include "sidl_rmi_Invocation.h"
#endif
#ifndef included_sidl_rmi_Response_h
#include "sidl_rmi_Response.h"
#endif
#ifndef included_sidl_rmi_ServerRegistry_h
#include "sidl_rmi_ServerRegistry.h"
#endif
#ifndef included_sidl_rmi_ConnectRegistry_h
#include "sidl_rmi_ConnectRegistry.h"
#endif
#ifndef included_sidl_io_Serializable_h
#include "sidl_io_Serializable.h"
#endif
#include "sidl_Exception.h"

#ifndef NULL
#define NULL 0
#endif

#include "sidl_thread.h"
#ifdef HAVE_PTHREAD
static struct sidl_recursive_mutex_t sidlx_rmi_Simsponse__mutex= SIDL_RECURSIVE_MUTEX_INITIALIZER;
#define LOCK_STATIC_GLOBALS sidl_recursive_mutex_lock( &sidlx_rmi_Simsponse__mutex )
#define UNLOCK_STATIC_GLOBALS sidl_recursive_mutex_unlock( &sidlx_rmi_Simsponse__mutex )
/* #define HAVE_LOCKED_STATIC_GLOBALS (sidl_recursive_mutex_trylock( &sidlx_rmi_Simsponse__mutex )==EDEADLOCK) */
#else
#define LOCK_STATIC_GLOBALS
#define UNLOCK_STATIC_GLOBALS
/* #define HAVE_LOCKED_STATIC_GLOBALS (1) */
#endif

/* Static variables to hold version of IOR */
static const int32_t s_IOR_MAJOR_VERSION = 1;
static const int32_t s_IOR_MINOR_VERSION = 0;

/* Static variables for managing EPV initialization. */
static int s_remote_initialized = 0;

static struct sidlx_rmi_Simsponse__epv s_rem_epv__sidlx_rmi_simsponse;

static struct sidl_BaseClass__epv  s_rem_epv__sidl_baseclass;

static struct sidl_BaseInterface__epv  s_rem_epv__sidl_baseinterface;

static struct sidl_io_Deserializer__epv s_rem_epv__sidl_io_deserializer;

static struct sidl_rmi_Response__epv s_rem_epv__sidl_rmi_response;


/* REMOTE CAST: dynamic type casting for remote objects. */
static void* remote_sidlx_rmi_Simsponse__cast(
  struct sidlx_rmi_Simsponse__object* self,
  const char* name, sidl_BaseInterface* _ex)
{
  int
    cmp0,
    cmp1,
    cmp2;
  void* cast = NULL;
  *_ex = NULL; /* default to no exception */
  cmp0 = strcmp(name, "sidl.io.Deserializer");
  if (!cmp0) {
    (*self->d_epv->f_addRef)(self, _ex); SIDL_CHECK(*_ex);
    cast = &((*self).d_sidl_io_deserializer);
    return cast;
  }
  else if (cmp0 < 0) {
    cmp1 = strcmp(name, "sidl.BaseInterface");
    if (!cmp1) {
      (*self->d_epv->f_addRef)(self, _ex); SIDL_CHECK(*_ex);
      cast = &((*self).d_sidl_baseclass.d_sidl_baseinterface);
      return cast;
    }
    else if (cmp1 < 0) {
      cmp2 = strcmp(name, "sidl.BaseClass");
      if (!cmp2) {
        (*self->d_epv->f_addRef)(self, _ex); SIDL_CHECK(*_ex);
        cast = ((struct sidl_BaseClass__object*)self);
        return cast;
      }
    }
  }
  else if (cmp0 > 0) {
    cmp1 = strcmp(name, "sidlx.rmi.Simsponse");
    if (!cmp1) {
      (*self->d_epv->f_addRef)(self, _ex); SIDL_CHECK(*_ex);
      cast = ((struct sidlx_rmi_Simsponse__object*)self);
      return cast;
    }
    else if (cmp1 < 0) {
      cmp2 = strcmp(name, "sidl.rmi.Response");
      if (!cmp2) {
        (*self->d_epv->f_addRef)(self, _ex); SIDL_CHECK(*_ex);
        cast = &((*self).d_sidl_rmi_response);
        return cast;
      }
    }
  }
  if ((*self->d_epv->f_isType)(self,name, _ex)) {
    void* (*func)(struct sidl_rmi_InstanceHandle__object*, struct 
      sidl_BaseInterface__object**) = 
      (void* (*)(struct sidl_rmi_InstanceHandle__object*, struct 
        sidl_BaseInterface__object**)) 
      sidl_rmi_ConnectRegistry_getConnect(name, _ex);SIDL_CHECK(*_ex);
    cast =  (*func)(((struct sidlx_rmi_Simsponse__remote*)self->d_data)->d_ih, 
      _ex);
  }

  return cast;
  EXIT:
  return NULL;
}

/* REMOTE DELETE: call the remote destructor for the object. */
static void remote_sidlx_rmi_Simsponse__delete(
  struct sidlx_rmi_Simsponse__object* self,
  sidl_BaseInterface* _ex)
{
  *_ex = NULL;
  free((void*) self);
}

/* REMOTE GETURL: call the getURL function for the object. */
static char* remote_sidlx_rmi_Simsponse__getURL(
  struct sidlx_rmi_Simsponse__object* self, sidl_BaseInterface* _ex)
{
  struct sidl_rmi_InstanceHandle__object *conn = ((struct 
    sidlx_rmi_Simsponse__remote*)self->d_data)->d_ih;
  *_ex = NULL;
  if(conn != NULL) {
    return sidl_rmi_InstanceHandle_getObjectURL(conn, _ex);
  }
  return NULL;
}

/* REMOTE ADDREF: For internal babel use only! Remote addRef. */
static void remote_sidlx_rmi_Simsponse__raddRef(
  struct sidlx_rmi_Simsponse__object* self,sidl_BaseInterface* _ex)
{
  sidl_BaseException netex = NULL;
  /* initialize a new invocation */
  sidl_BaseInterface _throwaway = NULL;
  struct sidl_rmi_InstanceHandle__object *_conn = ((struct 
    sidlx_rmi_Simsponse__remote*)self->d_data)->d_ih;
  sidl_rmi_Response _rsvp = NULL;
  sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
    "addRef", _ex ); SIDL_CHECK(*_ex);
  /* send actual RMI request */
  _rsvp = sidl_rmi_Invocation_invokeMethod(_inv,_ex);SIDL_CHECK(*_ex);
  /* Check for exceptions */
  netex = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);
  if(netex != NULL) {
    sidl_BaseInterface throwaway_exception = NULL;
    *_ex = (sidl_BaseInterface) sidl_BaseInterface__rmicast(netex,
      &throwaway_exception);
    return;
  }

  /* cleanup and return */
  EXIT:
  if(_inv) { sidl_rmi_Invocation_deleteRef(_inv,&_throwaway); }
  if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp,&_throwaway); }
  return;
}

/* REMOTE ISREMOTE: returns true if this object is Remote (it is). */
static sidl_bool
remote_sidlx_rmi_Simsponse__isRemote(
    struct sidlx_rmi_Simsponse__object* self, 
    sidl_BaseInterface *_ex) {
  *_ex = NULL;
  return TRUE;
}

/* REMOTE METHOD STUB:_set_hooks */
static void
remote_sidlx_rmi_Simsponse__set_hooks(
  /* in */ struct sidlx_rmi_Simsponse__object* self ,
  /* in */ sidl_bool on,
  /* out */ struct sidl_BaseInterface__object* *_ex)
{
  LANG_SPECIFIC_INIT();
  *_ex = NULL;
  {
    /* initialize a new invocation */
    sidl_BaseInterface _throwaway = NULL;
    sidl_BaseException _be = NULL;
    sidl_rmi_Response _rsvp = NULL;
    struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
      sidlx_rmi_Simsponse__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "_set_hooks", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */
    sidl_rmi_Invocation_packBool( _inv, "on", on, _ex);SIDL_CHECK(*_ex);

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if(_be != NULL) {
      sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from sidlx.rmi.Simsponse._set_hooks.", &throwaway_exception);
      *_ex = (sidl_BaseInterface) sidl_BaseInterface__rmicast(_be,
        &throwaway_exception);
      goto EXIT;
    }

    /* unpack out and inout arguments */

    /* cleanup and return */
    EXIT:
    if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
    if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
    return;
  }
}

/* REMOTE EXEC: call the exec function for the object. */
static void remote_sidlx_rmi_Simsponse__exec(
  struct sidlx_rmi_Simsponse__object* self,const char* methodName,
  sidl_rmi_Call inArgs,
  sidl_rmi_Return outArgs,
  sidl_BaseInterface* _ex)
{
  *_ex = NULL;
}

/* REMOTE METHOD STUB:init */
static void
remote_sidlx_rmi_Simsponse_init(
  /* in */ struct sidlx_rmi_Simsponse__object* self ,
  /* in */ const char* methodName,
  /* in */ const char* objectid,
  /* in */ struct sidlx_rmi_Socket__object* sock,
  /* out */ struct sidl_BaseInterface__object* *_ex)
{
  LANG_SPECIFIC_INIT();
  *_ex = NULL;
  {
    /* initialize a new invocation */
    sidl_BaseInterface _throwaway = NULL;
    sidl_BaseException _be = NULL;
    sidl_rmi_Response _rsvp = NULL;
    struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
      sidlx_rmi_Simsponse__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "init", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */
    sidl_rmi_Invocation_packString( _inv, "methodName", methodName, 
      _ex);SIDL_CHECK(*_ex);
    sidl_rmi_Invocation_packString( _inv, "objectid", objectid, _ex);SIDL_CHECK(
      *_ex);
    if(sock){
      char* _url = sidl_BaseInterface__getURL((sidl_BaseInterface)sock, 
        _ex);SIDL_CHECK(*_ex);
      sidl_rmi_Invocation_packString( _inv, "sock", _url, _ex);SIDL_CHECK(*_ex);
      free((void*)_url);
    } else {
      sidl_rmi_Invocation_packString( _inv, "sock", NULL, _ex);SIDL_CHECK(*_ex);
    }

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if(_be != NULL) {
      sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from sidlx.rmi.Simsponse.init.", &throwaway_exception);
      *_ex = (sidl_BaseInterface) sidl_BaseInterface__rmicast(_be,
        &throwaway_exception);
      goto EXIT;
    }

    /* unpack out and inout arguments */

    /* cleanup and return */
    EXIT:
    if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
    if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
    return;
  }
}

/* REMOTE METHOD STUB:test */
static sidl_bool
remote_sidlx_rmi_Simsponse_test(
  /* in */ struct sidlx_rmi_Simsponse__object* self ,
  /* in */ int32_t secs,
  /* in */ int32_t usecs,
  /* out */ struct sidl_BaseInterface__object* *_ex)
{
  LANG_SPECIFIC_INIT();
  *_ex = NULL;
  {
    /* initialize a new invocation */
    sidl_BaseInterface _throwaway = NULL;
    sidl_BaseException _be = NULL;
    sidl_rmi_Response _rsvp = NULL;
    sidl_bool _retval = FALSE;
    struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
      sidlx_rmi_Simsponse__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "test", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */
    sidl_rmi_Invocation_packInt( _inv, "secs", secs, _ex);SIDL_CHECK(*_ex);
    sidl_rmi_Invocation_packInt( _inv, "usecs", usecs, _ex);SIDL_CHECK(*_ex);

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if(_be != NULL) {
      sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from sidlx.rmi.Simsponse.test.", &throwaway_exception);
      *_ex = (sidl_BaseInterface) sidl_BaseInterface__rmicast(_be,
        &throwaway_exception);
      goto EXIT;
    }

    /* extract return value */
    sidl_rmi_Response_unpackBool( _rsvp, "_retval", &_retval, _ex);SIDL_CHECK(
      *_ex);

    /* unpack out and inout arguments */

    /* cleanup and return */
    EXIT:
    if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
    if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
    return _retval;
  }
}

/* REMOTE METHOD STUB:pullData */
static void
remote_sidlx_rmi_Simsponse_pullData(
  /* in */ struct sidlx_rmi_Simsponse__object* self ,
  /* out */ struct sidl_BaseInterface__object* *_ex)
{
  LANG_SPECIFIC_INIT();
  *_ex = NULL;
  {
    /* initialize a new invocation */
    sidl_BaseInterface _throwaway = NULL;
    sidl_BaseException _be = NULL;
    sidl_rmi_Response _rsvp = NULL;
    struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
      sidlx_rmi_Simsponse__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "pullData", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if(_be != NULL) {
      sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from sidlx.rmi.Simsponse.pullData.", &throwaway_exception);
      *_ex = (sidl_BaseInterface) sidl_BaseInterface__rmicast(_be,
        &throwaway_exception);
      goto EXIT;
    }

    /* unpack out and inout arguments */

    /* cleanup and return */
    EXIT:
    if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
    if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
    return;
  }
}

/* REMOTE METHOD STUB:getMethodName */
static char*
remote_sidlx_rmi_Simsponse_getMethodName(
  /* in */ struct sidlx_rmi_Simsponse__object* self ,
  /* out */ struct sidl_BaseInterface__object* *_ex)
{
  LANG_SPECIFIC_INIT();
  *_ex = NULL;
  {
    /* initialize a new invocation */
    sidl_BaseInterface _throwaway = NULL;
    sidl_BaseException _be = NULL;
    sidl_rmi_Response _rsvp = NULL;
    char* _retval = 0;
    struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
      sidlx_rmi_Simsponse__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "getMethodName", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if(_be != NULL) {
      sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from sidlx.rmi.Simsponse.getMethodName.", &throwaway_exception);
      *_ex = (sidl_BaseInterface) sidl_BaseInterface__rmicast(_be,
        &throwaway_exception);
      goto EXIT;
    }

    /* extract return value */
    sidl_rmi_Response_unpackString( _rsvp, "_retval", &_retval, _ex);SIDL_CHECK(
      *_ex);

    /* unpack out and inout arguments */

    /* cleanup and return */
    EXIT:
    if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
    if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
    return _retval;
  }
}

/* REMOTE METHOD STUB:getObjectID */
static char*
remote_sidlx_rmi_Simsponse_getObjectID(
  /* in */ struct sidlx_rmi_Simsponse__object* self ,
  /* out */ struct sidl_BaseInterface__object* *_ex)
{
  LANG_SPECIFIC_INIT();
  *_ex = NULL;
  {
    /* initialize a new invocation */
    sidl_BaseInterface _throwaway = NULL;
    sidl_BaseException _be = NULL;
    sidl_rmi_Response _rsvp = NULL;
    char* _retval = 0;
    struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
      sidlx_rmi_Simsponse__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "getObjectID", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if(_be != NULL) {
      sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from sidlx.rmi.Simsponse.getObjectID.", &throwaway_exception);
      *_ex = (sidl_BaseInterface) sidl_BaseInterface__rmicast(_be,
        &throwaway_exception);
      goto EXIT;
    }

    /* extract return value */
    sidl_rmi_Response_unpackString( _rsvp, "_retval", &_retval, _ex);SIDL_CHECK(
      *_ex);

    /* unpack out and inout arguments */

    /* cleanup and return */
    EXIT:
    if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
    if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
    return _retval;
  }
}

/* REMOTE METHOD STUB:addRef */
static void
remote_sidlx_rmi_Simsponse_addRef(
  /* in */ struct sidlx_rmi_Simsponse__object* self ,
  /* out */ struct sidl_BaseInterface__object* *_ex)
{
  LANG_SPECIFIC_INIT();
  *_ex = NULL;
  {
    struct sidlx_rmi_Simsponse__remote* r_obj = (struct 
      sidlx_rmi_Simsponse__remote*)self->d_data;
    LOCK_STATIC_GLOBALS;
    r_obj->d_refcount++;
    UNLOCK_STATIC_GLOBALS;
  }
}

/* REMOTE METHOD STUB:deleteRef */
static void
remote_sidlx_rmi_Simsponse_deleteRef(
  /* in */ struct sidlx_rmi_Simsponse__object* self ,
  /* out */ struct sidl_BaseInterface__object* *_ex)
{
  LANG_SPECIFIC_INIT();
  *_ex = NULL;
  {
    struct sidlx_rmi_Simsponse__remote* r_obj = (struct 
      sidlx_rmi_Simsponse__remote*)self->d_data;
    LOCK_STATIC_GLOBALS;
    r_obj->d_refcount--;
    if(r_obj->d_refcount == 0) {
      sidl_rmi_InstanceHandle_deleteRef(r_obj->d_ih, _ex);
      free(r_obj);
      free(self);
    }
    UNLOCK_STATIC_GLOBALS;
  }
}

/* REMOTE METHOD STUB:isSame */
static sidl_bool
remote_sidlx_rmi_Simsponse_isSame(
  /* in */ struct sidlx_rmi_Simsponse__object* self ,
  /* in */ struct sidl_BaseInterface__object* iobj,
  /* out */ struct sidl_BaseInterface__object* *_ex)
{
  LANG_SPECIFIC_INIT();
  *_ex = NULL;
  {
    /* initialize a new invocation */
    sidl_BaseInterface _throwaway = NULL;
    sidl_BaseException _be = NULL;
    sidl_rmi_Response _rsvp = NULL;
    sidl_bool _retval = FALSE;
    struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
      sidlx_rmi_Simsponse__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "isSame", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */
    if(iobj){
      char* _url = sidl_BaseInterface__getURL((sidl_BaseInterface)iobj, 
        _ex);SIDL_CHECK(*_ex);
      sidl_rmi_Invocation_packString( _inv, "iobj", _url, _ex);SIDL_CHECK(*_ex);
      free((void*)_url);
    } else {
      sidl_rmi_Invocation_packString( _inv, "iobj", NULL, _ex);SIDL_CHECK(*_ex);
    }

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if(_be != NULL) {
      sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from sidlx.rmi.Simsponse.isSame.", &throwaway_exception);
      *_ex = (sidl_BaseInterface) sidl_BaseInterface__rmicast(_be,
        &throwaway_exception);
      goto EXIT;
    }

    /* extract return value */
    sidl_rmi_Response_unpackBool( _rsvp, "_retval", &_retval, _ex);SIDL_CHECK(
      *_ex);

    /* unpack out and inout arguments */

    /* cleanup and return */
    EXIT:
    if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
    if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
    return _retval;
  }
}

/* REMOTE METHOD STUB:isType */
static sidl_bool
remote_sidlx_rmi_Simsponse_isType(
  /* in */ struct sidlx_rmi_Simsponse__object* self ,
  /* in */ const char* name,
  /* out */ struct sidl_BaseInterface__object* *_ex)
{
  LANG_SPECIFIC_INIT();
  *_ex = NULL;
  {
    /* initialize a new invocation */
    sidl_BaseInterface _throwaway = NULL;
    sidl_BaseException _be = NULL;
    sidl_rmi_Response _rsvp = NULL;
    sidl_bool _retval = FALSE;
    struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
      sidlx_rmi_Simsponse__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "isType", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */
    sidl_rmi_Invocation_packString( _inv, "name", name, _ex);SIDL_CHECK(*_ex);

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if(_be != NULL) {
      sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from sidlx.rmi.Simsponse.isType.", &throwaway_exception);
      *_ex = (sidl_BaseInterface) sidl_BaseInterface__rmicast(_be,
        &throwaway_exception);
      goto EXIT;
    }

    /* extract return value */
    sidl_rmi_Response_unpackBool( _rsvp, "_retval", &_retval, _ex);SIDL_CHECK(
      *_ex);

    /* unpack out and inout arguments */

    /* cleanup and return */
    EXIT:
    if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
    if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
    return _retval;
  }
}

/* REMOTE METHOD STUB:getClassInfo */
static struct sidl_ClassInfo__object*
remote_sidlx_rmi_Simsponse_getClassInfo(
  /* in */ struct sidlx_rmi_Simsponse__object* self ,
  /* out */ struct sidl_BaseInterface__object* *_ex)
{
  LANG_SPECIFIC_INIT();
  *_ex = NULL;
  {
    /* initialize a new invocation */
    sidl_BaseInterface _throwaway = NULL;
    sidl_BaseException _be = NULL;
    sidl_rmi_Response _rsvp = NULL;
    char*_retval_str = NULL;
    struct sidl_ClassInfo__object* _retval = 0;
    struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
      sidlx_rmi_Simsponse__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "getClassInfo", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if(_be != NULL) {
      sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from sidlx.rmi.Simsponse.getClassInfo.", &throwaway_exception);
      *_ex = (sidl_BaseInterface) sidl_BaseInterface__rmicast(_be,
        &throwaway_exception);
      goto EXIT;
    }

    /* extract return value */
    sidl_rmi_Response_unpackString( _rsvp, "_retval", &_retval_str, 
      _ex);SIDL_CHECK(*_ex);
    _retval = sidl_ClassInfo__connectI(_retval_str, FALSE, _ex);SIDL_CHECK(
      *_ex);

    /* unpack out and inout arguments */

    /* cleanup and return */
    EXIT:
    if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
    if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
    return _retval;
  }
}

/* REMOTE METHOD STUB:getExceptionThrown */
static struct sidl_BaseException__object*
remote_sidlx_rmi_Simsponse_getExceptionThrown(
  /* in */ struct sidlx_rmi_Simsponse__object* self ,
  /* out */ struct sidl_BaseInterface__object* *_ex)
{
  LANG_SPECIFIC_INIT();
  *_ex = NULL;
  {
    /* initialize a new invocation */
    sidl_BaseInterface _throwaway = NULL;
    sidl_BaseException _be = NULL;
    sidl_rmi_Response _rsvp = NULL;
    char*_retval_str = NULL;
    struct sidl_BaseException__object* _retval = 0;
    struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
      sidlx_rmi_Simsponse__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "getExceptionThrown", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if(_be != NULL) {
      sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from sidlx.rmi.Simsponse.getExceptionThrown.", &throwaway_exception);
      *_ex = (sidl_BaseInterface) sidl_BaseInterface__rmicast(_be,
        &throwaway_exception);
      goto EXIT;
    }

    /* extract return value */
    sidl_rmi_Response_unpackString( _rsvp, "_retval", &_retval_str, 
      _ex);SIDL_CHECK(*_ex);
    _retval = sidl_BaseException__connectI(_retval_str, FALSE, _ex);SIDL_CHECK(
      *_ex);

    /* unpack out and inout arguments */

    /* cleanup and return */
    EXIT:
    if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
    if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
    return _retval;
  }
}

/* REMOTE METHOD STUB:unpackBool */
static void
remote_sidlx_rmi_Simsponse_unpackBool(
  /* in */ struct sidlx_rmi_Simsponse__object* self ,
  /* in */ const char* key,
  /* out */ sidl_bool* value,
  /* out */ struct sidl_BaseInterface__object* *_ex)
{
  LANG_SPECIFIC_INIT();
  *_ex = NULL;
  {
    /* initialize a new invocation */
    sidl_BaseInterface _throwaway = NULL;
    sidl_BaseException _be = NULL;
    sidl_rmi_Response _rsvp = NULL;
    struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
      sidlx_rmi_Simsponse__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "unpackBool", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */
    sidl_rmi_Invocation_packString( _inv, "key", key, _ex);SIDL_CHECK(*_ex);

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if(_be != NULL) {
      sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from sidlx.rmi.Simsponse.unpackBool.", &throwaway_exception);
      *_ex = (sidl_BaseInterface) sidl_BaseInterface__rmicast(_be,
        &throwaway_exception);
      goto EXIT;
    }

    /* unpack out and inout arguments */
    sidl_rmi_Response_unpackBool( _rsvp, "value", value, _ex);SIDL_CHECK(*_ex);

    /* cleanup and return */
    EXIT:
    if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
    if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
    return;
  }
}

/* REMOTE METHOD STUB:unpackChar */
static void
remote_sidlx_rmi_Simsponse_unpackChar(
  /* in */ struct sidlx_rmi_Simsponse__object* self ,
  /* in */ const char* key,
  /* out */ char* value,
  /* out */ struct sidl_BaseInterface__object* *_ex)
{
  LANG_SPECIFIC_INIT();
  *_ex = NULL;
  {
    /* initialize a new invocation */
    sidl_BaseInterface _throwaway = NULL;
    sidl_BaseException _be = NULL;
    sidl_rmi_Response _rsvp = NULL;
    struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
      sidlx_rmi_Simsponse__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "unpackChar", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */
    sidl_rmi_Invocation_packString( _inv, "key", key, _ex);SIDL_CHECK(*_ex);

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if(_be != NULL) {
      sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from sidlx.rmi.Simsponse.unpackChar.", &throwaway_exception);
      *_ex = (sidl_BaseInterface) sidl_BaseInterface__rmicast(_be,
        &throwaway_exception);
      goto EXIT;
    }

    /* unpack out and inout arguments */
    sidl_rmi_Response_unpackChar( _rsvp, "value", value, _ex);SIDL_CHECK(*_ex);

    /* cleanup and return */
    EXIT:
    if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
    if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
    return;
  }
}

/* REMOTE METHOD STUB:unpackInt */
static void
remote_sidlx_rmi_Simsponse_unpackInt(
  /* in */ struct sidlx_rmi_Simsponse__object* self ,
  /* in */ const char* key,
  /* out */ int32_t* value,
  /* out */ struct sidl_BaseInterface__object* *_ex)
{
  LANG_SPECIFIC_INIT();
  *_ex = NULL;
  {
    /* initialize a new invocation */
    sidl_BaseInterface _throwaway = NULL;
    sidl_BaseException _be = NULL;
    sidl_rmi_Response _rsvp = NULL;
    struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
      sidlx_rmi_Simsponse__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "unpackInt", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */
    sidl_rmi_Invocation_packString( _inv, "key", key, _ex);SIDL_CHECK(*_ex);

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if(_be != NULL) {
      sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from sidlx.rmi.Simsponse.unpackInt.", &throwaway_exception);
      *_ex = (sidl_BaseInterface) sidl_BaseInterface__rmicast(_be,
        &throwaway_exception);
      goto EXIT;
    }

    /* unpack out and inout arguments */
    sidl_rmi_Response_unpackInt( _rsvp, "value", value, _ex);SIDL_CHECK(*_ex);

    /* cleanup and return */
    EXIT:
    if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
    if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
    return;
  }
}

/* REMOTE METHOD STUB:unpackLong */
static void
remote_sidlx_rmi_Simsponse_unpackLong(
  /* in */ struct sidlx_rmi_Simsponse__object* self ,
  /* in */ const char* key,
  /* out */ int64_t* value,
  /* out */ struct sidl_BaseInterface__object* *_ex)
{
  LANG_SPECIFIC_INIT();
  *_ex = NULL;
  {
    /* initialize a new invocation */
    sidl_BaseInterface _throwaway = NULL;
    sidl_BaseException _be = NULL;
    sidl_rmi_Response _rsvp = NULL;
    struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
      sidlx_rmi_Simsponse__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "unpackLong", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */
    sidl_rmi_Invocation_packString( _inv, "key", key, _ex);SIDL_CHECK(*_ex);

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if(_be != NULL) {
      sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from sidlx.rmi.Simsponse.unpackLong.", &throwaway_exception);
      *_ex = (sidl_BaseInterface) sidl_BaseInterface__rmicast(_be,
        &throwaway_exception);
      goto EXIT;
    }

    /* unpack out and inout arguments */
    sidl_rmi_Response_unpackLong( _rsvp, "value", value, _ex);SIDL_CHECK(*_ex);

    /* cleanup and return */
    EXIT:
    if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
    if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
    return;
  }
}

/* REMOTE METHOD STUB:unpackOpaque */
static void
remote_sidlx_rmi_Simsponse_unpackOpaque(
  /* in */ struct sidlx_rmi_Simsponse__object* self ,
  /* in */ const char* key,
  /* out */ void** value,
  /* out */ struct sidl_BaseInterface__object* *_ex)
{
  LANG_SPECIFIC_INIT();
  *_ex = NULL;
  {
    /* initialize a new invocation */
    sidl_BaseInterface _throwaway = NULL;
    sidl_BaseException _be = NULL;
    sidl_rmi_Response _rsvp = NULL;
    struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
      sidlx_rmi_Simsponse__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "unpackOpaque", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */
    sidl_rmi_Invocation_packString( _inv, "key", key, _ex);SIDL_CHECK(*_ex);

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if(_be != NULL) {
      sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from sidlx.rmi.Simsponse.unpackOpaque.", &throwaway_exception);
      *_ex = (sidl_BaseInterface) sidl_BaseInterface__rmicast(_be,
        &throwaway_exception);
      goto EXIT;
    }

    /* unpack out and inout arguments */
    sidl_rmi_Response_unpackOpaque( _rsvp, "value", value, _ex);SIDL_CHECK(
      *_ex);

    /* cleanup and return */
    EXIT:
    if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
    if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
    return;
  }
}

/* REMOTE METHOD STUB:unpackFloat */
static void
remote_sidlx_rmi_Simsponse_unpackFloat(
  /* in */ struct sidlx_rmi_Simsponse__object* self ,
  /* in */ const char* key,
  /* out */ float* value,
  /* out */ struct sidl_BaseInterface__object* *_ex)
{
  LANG_SPECIFIC_INIT();
  *_ex = NULL;
  {
    /* initialize a new invocation */
    sidl_BaseInterface _throwaway = NULL;
    sidl_BaseException _be = NULL;
    sidl_rmi_Response _rsvp = NULL;
    struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
      sidlx_rmi_Simsponse__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "unpackFloat", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */
    sidl_rmi_Invocation_packString( _inv, "key", key, _ex);SIDL_CHECK(*_ex);

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if(_be != NULL) {
      sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from sidlx.rmi.Simsponse.unpackFloat.", &throwaway_exception);
      *_ex = (sidl_BaseInterface) sidl_BaseInterface__rmicast(_be,
        &throwaway_exception);
      goto EXIT;
    }

    /* unpack out and inout arguments */
    sidl_rmi_Response_unpackFloat( _rsvp, "value", value, _ex);SIDL_CHECK(*_ex);

    /* cleanup and return */
    EXIT:
    if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
    if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
    return;
  }
}

/* REMOTE METHOD STUB:unpackDouble */
static void
remote_sidlx_rmi_Simsponse_unpackDouble(
  /* in */ struct sidlx_rmi_Simsponse__object* self ,
  /* in */ const char* key,
  /* out */ double* value,
  /* out */ struct sidl_BaseInterface__object* *_ex)
{
  LANG_SPECIFIC_INIT();
  *_ex = NULL;
  {
    /* initialize a new invocation */
    sidl_BaseInterface _throwaway = NULL;
    sidl_BaseException _be = NULL;
    sidl_rmi_Response _rsvp = NULL;
    struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
      sidlx_rmi_Simsponse__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "unpackDouble", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */
    sidl_rmi_Invocation_packString( _inv, "key", key, _ex);SIDL_CHECK(*_ex);

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if(_be != NULL) {
      sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from sidlx.rmi.Simsponse.unpackDouble.", &throwaway_exception);
      *_ex = (sidl_BaseInterface) sidl_BaseInterface__rmicast(_be,
        &throwaway_exception);
      goto EXIT;
    }

    /* unpack out and inout arguments */
    sidl_rmi_Response_unpackDouble( _rsvp, "value", value, _ex);SIDL_CHECK(
      *_ex);

    /* cleanup and return */
    EXIT:
    if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
    if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
    return;
  }
}

/* REMOTE METHOD STUB:unpackFcomplex */
static void
remote_sidlx_rmi_Simsponse_unpackFcomplex(
  /* in */ struct sidlx_rmi_Simsponse__object* self ,
  /* in */ const char* key,
  /* out */ struct sidl_fcomplex* value,
  /* out */ struct sidl_BaseInterface__object* *_ex)
{
  LANG_SPECIFIC_INIT();
  *_ex = NULL;
  {
    /* initialize a new invocation */
    sidl_BaseInterface _throwaway = NULL;
    sidl_BaseException _be = NULL;
    sidl_rmi_Response _rsvp = NULL;
    struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
      sidlx_rmi_Simsponse__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "unpackFcomplex", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */
    sidl_rmi_Invocation_packString( _inv, "key", key, _ex);SIDL_CHECK(*_ex);

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if(_be != NULL) {
      sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from sidlx.rmi.Simsponse.unpackFcomplex.", &throwaway_exception);
      *_ex = (sidl_BaseInterface) sidl_BaseInterface__rmicast(_be,
        &throwaway_exception);
      goto EXIT;
    }

    /* unpack out and inout arguments */
    sidl_rmi_Response_unpackFcomplex( _rsvp, "value", value, _ex);SIDL_CHECK(
      *_ex);

    /* cleanup and return */
    EXIT:
    if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
    if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
    return;
  }
}

/* REMOTE METHOD STUB:unpackDcomplex */
static void
remote_sidlx_rmi_Simsponse_unpackDcomplex(
  /* in */ struct sidlx_rmi_Simsponse__object* self ,
  /* in */ const char* key,
  /* out */ struct sidl_dcomplex* value,
  /* out */ struct sidl_BaseInterface__object* *_ex)
{
  LANG_SPECIFIC_INIT();
  *_ex = NULL;
  {
    /* initialize a new invocation */
    sidl_BaseInterface _throwaway = NULL;
    sidl_BaseException _be = NULL;
    sidl_rmi_Response _rsvp = NULL;
    struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
      sidlx_rmi_Simsponse__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "unpackDcomplex", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */
    sidl_rmi_Invocation_packString( _inv, "key", key, _ex);SIDL_CHECK(*_ex);

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if(_be != NULL) {
      sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from sidlx.rmi.Simsponse.unpackDcomplex.", &throwaway_exception);
      *_ex = (sidl_BaseInterface) sidl_BaseInterface__rmicast(_be,
        &throwaway_exception);
      goto EXIT;
    }

    /* unpack out and inout arguments */
    sidl_rmi_Response_unpackDcomplex( _rsvp, "value", value, _ex);SIDL_CHECK(
      *_ex);

    /* cleanup and return */
    EXIT:
    if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
    if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
    return;
  }
}

/* REMOTE METHOD STUB:unpackString */
static void
remote_sidlx_rmi_Simsponse_unpackString(
  /* in */ struct sidlx_rmi_Simsponse__object* self ,
  /* in */ const char* key,
  /* out */ char** value,
  /* out */ struct sidl_BaseInterface__object* *_ex)
{
  LANG_SPECIFIC_INIT();
  *_ex = NULL;
  {
    /* initialize a new invocation */
    sidl_BaseInterface _throwaway = NULL;
    sidl_BaseException _be = NULL;
    sidl_rmi_Response _rsvp = NULL;
    struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
      sidlx_rmi_Simsponse__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "unpackString", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */
    sidl_rmi_Invocation_packString( _inv, "key", key, _ex);SIDL_CHECK(*_ex);

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if(_be != NULL) {
      sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from sidlx.rmi.Simsponse.unpackString.", &throwaway_exception);
      *_ex = (sidl_BaseInterface) sidl_BaseInterface__rmicast(_be,
        &throwaway_exception);
      goto EXIT;
    }

    /* unpack out and inout arguments */
    sidl_rmi_Response_unpackString( _rsvp, "value", value, _ex);SIDL_CHECK(
      *_ex);

    /* cleanup and return */
    EXIT:
    if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
    if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
    return;
  }
}

/* REMOTE METHOD STUB:unpackSerializable */
static void
remote_sidlx_rmi_Simsponse_unpackSerializable(
  /* in */ struct sidlx_rmi_Simsponse__object* self ,
  /* in */ const char* key,
  /* out */ struct sidl_io_Serializable__object** value,
  /* out */ struct sidl_BaseInterface__object* *_ex)
{
  LANG_SPECIFIC_INIT();
  *_ex = NULL;
  {
    /* initialize a new invocation */
    sidl_BaseInterface _throwaway = NULL;
    sidl_BaseException _be = NULL;
    sidl_rmi_Response _rsvp = NULL;
    char* value_str= NULL;
    struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
      sidlx_rmi_Simsponse__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "unpackSerializable", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */
    sidl_rmi_Invocation_packString( _inv, "key", key, _ex);SIDL_CHECK(*_ex);

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if(_be != NULL) {
      sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from sidlx.rmi.Simsponse.unpackSerializable.", &throwaway_exception);
      *_ex = (sidl_BaseInterface) sidl_BaseInterface__rmicast(_be,
        &throwaway_exception);
      goto EXIT;
    }

    /* unpack out and inout arguments */
    sidl_rmi_Response_unpackString( _rsvp, "value", &value_str, _ex);SIDL_CHECK(
      *_ex);
    *value = sidl_io_Serializable__connectI(value_str, FALSE, _ex);SIDL_CHECK(
      *_ex);

    /* cleanup and return */
    EXIT:
    if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
    if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
    return;
  }
}

/* REMOTE METHOD STUB:unpackBoolArray */
static void
remote_sidlx_rmi_Simsponse_unpackBoolArray(
  /* in */ struct sidlx_rmi_Simsponse__object* self ,
  /* in */ const char* key,
  /* out array<bool> */ struct sidl_bool__array** value,
  /* in */ int32_t ordering,
  /* in */ int32_t dimen,
  /* in */ sidl_bool isRarray,
  /* out */ struct sidl_BaseInterface__object* *_ex)
{
  LANG_SPECIFIC_INIT();
  *_ex = NULL;
  {
    /* initialize a new invocation */
    sidl_BaseInterface _throwaway = NULL;
    sidl_BaseException _be = NULL;
    sidl_rmi_Response _rsvp = NULL;
    struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
      sidlx_rmi_Simsponse__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "unpackBoolArray", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */
    sidl_rmi_Invocation_packString( _inv, "key", key, _ex);SIDL_CHECK(*_ex);
    sidl_rmi_Invocation_packInt( _inv, "ordering", ordering, _ex);SIDL_CHECK(
      *_ex);
    sidl_rmi_Invocation_packInt( _inv, "dimen", dimen, _ex);SIDL_CHECK(*_ex);
    sidl_rmi_Invocation_packBool( _inv, "isRarray", isRarray, _ex);SIDL_CHECK(
      *_ex);

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if(_be != NULL) {
      sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from sidlx.rmi.Simsponse.unpackBoolArray.", &throwaway_exception);
      *_ex = (sidl_BaseInterface) sidl_BaseInterface__rmicast(_be,
        &throwaway_exception);
      goto EXIT;
    }

    /* unpack out and inout arguments */
    sidl_rmi_Response_unpackBoolArray( _rsvp, "value", value,0,0,FALSE, 
      _ex);SIDL_CHECK(*_ex);

    /* cleanup and return */
    EXIT:
    if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
    if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
    return;
  }
}

/* REMOTE METHOD STUB:unpackCharArray */
static void
remote_sidlx_rmi_Simsponse_unpackCharArray(
  /* in */ struct sidlx_rmi_Simsponse__object* self ,
  /* in */ const char* key,
  /* out array<char> */ struct sidl_char__array** value,
  /* in */ int32_t ordering,
  /* in */ int32_t dimen,
  /* in */ sidl_bool isRarray,
  /* out */ struct sidl_BaseInterface__object* *_ex)
{
  LANG_SPECIFIC_INIT();
  *_ex = NULL;
  {
    /* initialize a new invocation */
    sidl_BaseInterface _throwaway = NULL;
    sidl_BaseException _be = NULL;
    sidl_rmi_Response _rsvp = NULL;
    struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
      sidlx_rmi_Simsponse__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "unpackCharArray", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */
    sidl_rmi_Invocation_packString( _inv, "key", key, _ex);SIDL_CHECK(*_ex);
    sidl_rmi_Invocation_packInt( _inv, "ordering", ordering, _ex);SIDL_CHECK(
      *_ex);
    sidl_rmi_Invocation_packInt( _inv, "dimen", dimen, _ex);SIDL_CHECK(*_ex);
    sidl_rmi_Invocation_packBool( _inv, "isRarray", isRarray, _ex);SIDL_CHECK(
      *_ex);

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if(_be != NULL) {
      sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from sidlx.rmi.Simsponse.unpackCharArray.", &throwaway_exception);
      *_ex = (sidl_BaseInterface) sidl_BaseInterface__rmicast(_be,
        &throwaway_exception);
      goto EXIT;
    }

    /* unpack out and inout arguments */
    sidl_rmi_Response_unpackCharArray( _rsvp, "value", value,0,0,FALSE, 
      _ex);SIDL_CHECK(*_ex);

    /* cleanup and return */
    EXIT:
    if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
    if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
    return;
  }
}

/* REMOTE METHOD STUB:unpackIntArray */
static void
remote_sidlx_rmi_Simsponse_unpackIntArray(
  /* in */ struct sidlx_rmi_Simsponse__object* self ,
  /* in */ const char* key,
  /* out array<int> */ struct sidl_int__array** value,
  /* in */ int32_t ordering,
  /* in */ int32_t dimen,
  /* in */ sidl_bool isRarray,
  /* out */ struct sidl_BaseInterface__object* *_ex)
{
  LANG_SPECIFIC_INIT();
  *_ex = NULL;
  {
    /* initialize a new invocation */
    sidl_BaseInterface _throwaway = NULL;
    sidl_BaseException _be = NULL;
    sidl_rmi_Response _rsvp = NULL;
    struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
      sidlx_rmi_Simsponse__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "unpackIntArray", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */
    sidl_rmi_Invocation_packString( _inv, "key", key, _ex);SIDL_CHECK(*_ex);
    sidl_rmi_Invocation_packInt( _inv, "ordering", ordering, _ex);SIDL_CHECK(
      *_ex);
    sidl_rmi_Invocation_packInt( _inv, "dimen", dimen, _ex);SIDL_CHECK(*_ex);
    sidl_rmi_Invocation_packBool( _inv, "isRarray", isRarray, _ex);SIDL_CHECK(
      *_ex);

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if(_be != NULL) {
      sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from sidlx.rmi.Simsponse.unpackIntArray.", &throwaway_exception);
      *_ex = (sidl_BaseInterface) sidl_BaseInterface__rmicast(_be,
        &throwaway_exception);
      goto EXIT;
    }

    /* unpack out and inout arguments */
    sidl_rmi_Response_unpackIntArray( _rsvp, "value", value,0,0,FALSE, 
      _ex);SIDL_CHECK(*_ex);

    /* cleanup and return */
    EXIT:
    if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
    if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
    return;
  }
}

/* REMOTE METHOD STUB:unpackLongArray */
static void
remote_sidlx_rmi_Simsponse_unpackLongArray(
  /* in */ struct sidlx_rmi_Simsponse__object* self ,
  /* in */ const char* key,
  /* out array<long> */ struct sidl_long__array** value,
  /* in */ int32_t ordering,
  /* in */ int32_t dimen,
  /* in */ sidl_bool isRarray,
  /* out */ struct sidl_BaseInterface__object* *_ex)
{
  LANG_SPECIFIC_INIT();
  *_ex = NULL;
  {
    /* initialize a new invocation */
    sidl_BaseInterface _throwaway = NULL;
    sidl_BaseException _be = NULL;
    sidl_rmi_Response _rsvp = NULL;
    struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
      sidlx_rmi_Simsponse__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "unpackLongArray", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */
    sidl_rmi_Invocation_packString( _inv, "key", key, _ex);SIDL_CHECK(*_ex);
    sidl_rmi_Invocation_packInt( _inv, "ordering", ordering, _ex);SIDL_CHECK(
      *_ex);
    sidl_rmi_Invocation_packInt( _inv, "dimen", dimen, _ex);SIDL_CHECK(*_ex);
    sidl_rmi_Invocation_packBool( _inv, "isRarray", isRarray, _ex);SIDL_CHECK(
      *_ex);

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if(_be != NULL) {
      sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from sidlx.rmi.Simsponse.unpackLongArray.", &throwaway_exception);
      *_ex = (sidl_BaseInterface) sidl_BaseInterface__rmicast(_be,
        &throwaway_exception);
      goto EXIT;
    }

    /* unpack out and inout arguments */
    sidl_rmi_Response_unpackLongArray( _rsvp, "value", value,0,0,FALSE, 
      _ex);SIDL_CHECK(*_ex);

    /* cleanup and return */
    EXIT:
    if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
    if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
    return;
  }
}

/* REMOTE METHOD STUB:unpackOpaqueArray */
static void
remote_sidlx_rmi_Simsponse_unpackOpaqueArray(
  /* in */ struct sidlx_rmi_Simsponse__object* self ,
  /* in */ const char* key,
  /* out array<opaque> */ struct sidl_opaque__array** value,
  /* in */ int32_t ordering,
  /* in */ int32_t dimen,
  /* in */ sidl_bool isRarray,
  /* out */ struct sidl_BaseInterface__object* *_ex)
{
  LANG_SPECIFIC_INIT();
  *_ex = NULL;
  {
    /* initialize a new invocation */
    sidl_BaseInterface _throwaway = NULL;
    sidl_BaseException _be = NULL;
    sidl_rmi_Response _rsvp = NULL;
    struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
      sidlx_rmi_Simsponse__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "unpackOpaqueArray", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */
    sidl_rmi_Invocation_packString( _inv, "key", key, _ex);SIDL_CHECK(*_ex);
    sidl_rmi_Invocation_packInt( _inv, "ordering", ordering, _ex);SIDL_CHECK(
      *_ex);
    sidl_rmi_Invocation_packInt( _inv, "dimen", dimen, _ex);SIDL_CHECK(*_ex);
    sidl_rmi_Invocation_packBool( _inv, "isRarray", isRarray, _ex);SIDL_CHECK(
      *_ex);

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if(_be != NULL) {
      sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from sidlx.rmi.Simsponse.unpackOpaqueArray.", &throwaway_exception);
      *_ex = (sidl_BaseInterface) sidl_BaseInterface__rmicast(_be,
        &throwaway_exception);
      goto EXIT;
    }

    /* unpack out and inout arguments */
    sidl_rmi_Response_unpackOpaqueArray( _rsvp, "value", value,0,0,FALSE, 
      _ex);SIDL_CHECK(*_ex);

    /* cleanup and return */
    EXIT:
    if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
    if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
    return;
  }
}

/* REMOTE METHOD STUB:unpackFloatArray */
static void
remote_sidlx_rmi_Simsponse_unpackFloatArray(
  /* in */ struct sidlx_rmi_Simsponse__object* self ,
  /* in */ const char* key,
  /* out array<float> */ struct sidl_float__array** value,
  /* in */ int32_t ordering,
  /* in */ int32_t dimen,
  /* in */ sidl_bool isRarray,
  /* out */ struct sidl_BaseInterface__object* *_ex)
{
  LANG_SPECIFIC_INIT();
  *_ex = NULL;
  {
    /* initialize a new invocation */
    sidl_BaseInterface _throwaway = NULL;
    sidl_BaseException _be = NULL;
    sidl_rmi_Response _rsvp = NULL;
    struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
      sidlx_rmi_Simsponse__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "unpackFloatArray", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */
    sidl_rmi_Invocation_packString( _inv, "key", key, _ex);SIDL_CHECK(*_ex);
    sidl_rmi_Invocation_packInt( _inv, "ordering", ordering, _ex);SIDL_CHECK(
      *_ex);
    sidl_rmi_Invocation_packInt( _inv, "dimen", dimen, _ex);SIDL_CHECK(*_ex);
    sidl_rmi_Invocation_packBool( _inv, "isRarray", isRarray, _ex);SIDL_CHECK(
      *_ex);

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if(_be != NULL) {
      sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from sidlx.rmi.Simsponse.unpackFloatArray.", &throwaway_exception);
      *_ex = (sidl_BaseInterface) sidl_BaseInterface__rmicast(_be,
        &throwaway_exception);
      goto EXIT;
    }

    /* unpack out and inout arguments */
    sidl_rmi_Response_unpackFloatArray( _rsvp, "value", value,0,0,FALSE, 
      _ex);SIDL_CHECK(*_ex);

    /* cleanup and return */
    EXIT:
    if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
    if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
    return;
  }
}

/* REMOTE METHOD STUB:unpackDoubleArray */
static void
remote_sidlx_rmi_Simsponse_unpackDoubleArray(
  /* in */ struct sidlx_rmi_Simsponse__object* self ,
  /* in */ const char* key,
  /* out array<double> */ struct sidl_double__array** value,
  /* in */ int32_t ordering,
  /* in */ int32_t dimen,
  /* in */ sidl_bool isRarray,
  /* out */ struct sidl_BaseInterface__object* *_ex)
{
  LANG_SPECIFIC_INIT();
  *_ex = NULL;
  {
    /* initialize a new invocation */
    sidl_BaseInterface _throwaway = NULL;
    sidl_BaseException _be = NULL;
    sidl_rmi_Response _rsvp = NULL;
    struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
      sidlx_rmi_Simsponse__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "unpackDoubleArray", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */
    sidl_rmi_Invocation_packString( _inv, "key", key, _ex);SIDL_CHECK(*_ex);
    sidl_rmi_Invocation_packInt( _inv, "ordering", ordering, _ex);SIDL_CHECK(
      *_ex);
    sidl_rmi_Invocation_packInt( _inv, "dimen", dimen, _ex);SIDL_CHECK(*_ex);
    sidl_rmi_Invocation_packBool( _inv, "isRarray", isRarray, _ex);SIDL_CHECK(
      *_ex);

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if(_be != NULL) {
      sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from sidlx.rmi.Simsponse.unpackDoubleArray.", &throwaway_exception);
      *_ex = (sidl_BaseInterface) sidl_BaseInterface__rmicast(_be,
        &throwaway_exception);
      goto EXIT;
    }

    /* unpack out and inout arguments */
    sidl_rmi_Response_unpackDoubleArray( _rsvp, "value", value,0,0,FALSE, 
      _ex);SIDL_CHECK(*_ex);

    /* cleanup and return */
    EXIT:
    if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
    if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
    return;
  }
}

/* REMOTE METHOD STUB:unpackFcomplexArray */
static void
remote_sidlx_rmi_Simsponse_unpackFcomplexArray(
  /* in */ struct sidlx_rmi_Simsponse__object* self ,
  /* in */ const char* key,
  /* out array<fcomplex> */ struct sidl_fcomplex__array** value,
  /* in */ int32_t ordering,
  /* in */ int32_t dimen,
  /* in */ sidl_bool isRarray,
  /* out */ struct sidl_BaseInterface__object* *_ex)
{
  LANG_SPECIFIC_INIT();
  *_ex = NULL;
  {
    /* initialize a new invocation */
    sidl_BaseInterface _throwaway = NULL;
    sidl_BaseException _be = NULL;
    sidl_rmi_Response _rsvp = NULL;
    struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
      sidlx_rmi_Simsponse__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "unpackFcomplexArray", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */
    sidl_rmi_Invocation_packString( _inv, "key", key, _ex);SIDL_CHECK(*_ex);
    sidl_rmi_Invocation_packInt( _inv, "ordering", ordering, _ex);SIDL_CHECK(
      *_ex);
    sidl_rmi_Invocation_packInt( _inv, "dimen", dimen, _ex);SIDL_CHECK(*_ex);
    sidl_rmi_Invocation_packBool( _inv, "isRarray", isRarray, _ex);SIDL_CHECK(
      *_ex);

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if(_be != NULL) {
      sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from sidlx.rmi.Simsponse.unpackFcomplexArray.", &throwaway_exception);
      *_ex = (sidl_BaseInterface) sidl_BaseInterface__rmicast(_be,
        &throwaway_exception);
      goto EXIT;
    }

    /* unpack out and inout arguments */
    sidl_rmi_Response_unpackFcomplexArray( _rsvp, "value", value,0,0,FALSE, 
      _ex);SIDL_CHECK(*_ex);

    /* cleanup and return */
    EXIT:
    if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
    if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
    return;
  }
}

/* REMOTE METHOD STUB:unpackDcomplexArray */
static void
remote_sidlx_rmi_Simsponse_unpackDcomplexArray(
  /* in */ struct sidlx_rmi_Simsponse__object* self ,
  /* in */ const char* key,
  /* out array<dcomplex> */ struct sidl_dcomplex__array** value,
  /* in */ int32_t ordering,
  /* in */ int32_t dimen,
  /* in */ sidl_bool isRarray,
  /* out */ struct sidl_BaseInterface__object* *_ex)
{
  LANG_SPECIFIC_INIT();
  *_ex = NULL;
  {
    /* initialize a new invocation */
    sidl_BaseInterface _throwaway = NULL;
    sidl_BaseException _be = NULL;
    sidl_rmi_Response _rsvp = NULL;
    struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
      sidlx_rmi_Simsponse__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "unpackDcomplexArray", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */
    sidl_rmi_Invocation_packString( _inv, "key", key, _ex);SIDL_CHECK(*_ex);
    sidl_rmi_Invocation_packInt( _inv, "ordering", ordering, _ex);SIDL_CHECK(
      *_ex);
    sidl_rmi_Invocation_packInt( _inv, "dimen", dimen, _ex);SIDL_CHECK(*_ex);
    sidl_rmi_Invocation_packBool( _inv, "isRarray", isRarray, _ex);SIDL_CHECK(
      *_ex);

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if(_be != NULL) {
      sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from sidlx.rmi.Simsponse.unpackDcomplexArray.", &throwaway_exception);
      *_ex = (sidl_BaseInterface) sidl_BaseInterface__rmicast(_be,
        &throwaway_exception);
      goto EXIT;
    }

    /* unpack out and inout arguments */
    sidl_rmi_Response_unpackDcomplexArray( _rsvp, "value", value,0,0,FALSE, 
      _ex);SIDL_CHECK(*_ex);

    /* cleanup and return */
    EXIT:
    if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
    if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
    return;
  }
}

/* REMOTE METHOD STUB:unpackStringArray */
static void
remote_sidlx_rmi_Simsponse_unpackStringArray(
  /* in */ struct sidlx_rmi_Simsponse__object* self ,
  /* in */ const char* key,
  /* out array<string> */ struct sidl_string__array** value,
  /* in */ int32_t ordering,
  /* in */ int32_t dimen,
  /* in */ sidl_bool isRarray,
  /* out */ struct sidl_BaseInterface__object* *_ex)
{
  LANG_SPECIFIC_INIT();
  *_ex = NULL;
  {
    /* initialize a new invocation */
    sidl_BaseInterface _throwaway = NULL;
    sidl_BaseException _be = NULL;
    sidl_rmi_Response _rsvp = NULL;
    struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
      sidlx_rmi_Simsponse__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "unpackStringArray", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */
    sidl_rmi_Invocation_packString( _inv, "key", key, _ex);SIDL_CHECK(*_ex);
    sidl_rmi_Invocation_packInt( _inv, "ordering", ordering, _ex);SIDL_CHECK(
      *_ex);
    sidl_rmi_Invocation_packInt( _inv, "dimen", dimen, _ex);SIDL_CHECK(*_ex);
    sidl_rmi_Invocation_packBool( _inv, "isRarray", isRarray, _ex);SIDL_CHECK(
      *_ex);

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if(_be != NULL) {
      sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from sidlx.rmi.Simsponse.unpackStringArray.", &throwaway_exception);
      *_ex = (sidl_BaseInterface) sidl_BaseInterface__rmicast(_be,
        &throwaway_exception);
      goto EXIT;
    }

    /* unpack out and inout arguments */
    sidl_rmi_Response_unpackStringArray( _rsvp, "value", value,0,0,FALSE, 
      _ex);SIDL_CHECK(*_ex);

    /* cleanup and return */
    EXIT:
    if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
    if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
    return;
  }
}

/* REMOTE METHOD STUB:unpackGenericArray */
static void
remote_sidlx_rmi_Simsponse_unpackGenericArray(
  /* in */ struct sidlx_rmi_Simsponse__object* self ,
  /* in */ const char* key,
  /* out array<> */ struct sidl__array** value,
  /* out */ struct sidl_BaseInterface__object* *_ex)
{
  LANG_SPECIFIC_INIT();
  *_ex = NULL;
  {
    /* initialize a new invocation */
    sidl_BaseInterface _throwaway = NULL;
    sidl_BaseException _be = NULL;
    sidl_rmi_Response _rsvp = NULL;
    struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
      sidlx_rmi_Simsponse__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "unpackGenericArray", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */
    sidl_rmi_Invocation_packString( _inv, "key", key, _ex);SIDL_CHECK(*_ex);

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if(_be != NULL) {
      sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from sidlx.rmi.Simsponse.unpackGenericArray.", &throwaway_exception);
      *_ex = (sidl_BaseInterface) sidl_BaseInterface__rmicast(_be,
        &throwaway_exception);
      goto EXIT;
    }

    /* unpack out and inout arguments */
    sidl_rmi_Response_unpackGenericArray( _rsvp, "value", value, 
      _ex);SIDL_CHECK(*_ex);

    /* cleanup and return */
    EXIT:
    if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
    if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
    return;
  }
}

/* REMOTE METHOD STUB:unpackSerializableArray */
static void
remote_sidlx_rmi_Simsponse_unpackSerializableArray(
  /* in */ struct sidlx_rmi_Simsponse__object* self ,
  /* in */ const char* key,
  /* out array<sidl.io.Serializable> */ struct sidl_io_Serializable__array** 
    value,
  /* in */ int32_t ordering,
  /* in */ int32_t dimen,
  /* in */ sidl_bool isRarray,
  /* out */ struct sidl_BaseInterface__object* *_ex)
{
  LANG_SPECIFIC_INIT();
  *_ex = NULL;
  {
    /* initialize a new invocation */
    sidl_BaseInterface _throwaway = NULL;
    sidl_BaseException _be = NULL;
    sidl_rmi_Response _rsvp = NULL;
    struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
      sidlx_rmi_Simsponse__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "unpackSerializableArray", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */
    sidl_rmi_Invocation_packString( _inv, "key", key, _ex);SIDL_CHECK(*_ex);
    sidl_rmi_Invocation_packInt( _inv, "ordering", ordering, _ex);SIDL_CHECK(
      *_ex);
    sidl_rmi_Invocation_packInt( _inv, "dimen", dimen, _ex);SIDL_CHECK(*_ex);
    sidl_rmi_Invocation_packBool( _inv, "isRarray", isRarray, _ex);SIDL_CHECK(
      *_ex);

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if(_be != NULL) {
      sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from sidlx.rmi.Simsponse.unpackSerializableArray.", &throwaway_exception);
      *_ex = (sidl_BaseInterface) sidl_BaseInterface__rmicast(_be,
        &throwaway_exception);
      goto EXIT;
    }

    /* unpack out and inout arguments */
    sidl_rmi_Response_unpackSerializableArray( _rsvp, "value", value,0,0,FALSE, 
      _ex);SIDL_CHECK(*_ex);

    /* cleanup and return */
    EXIT:
    if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
    if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
    return;
  }
}

/* REMOTE EPV: create remote entry point vectors (EPVs). */
static void sidlx_rmi_Simsponse__init_remote_epv(void)
{
  /* assert( HAVE_LOCKED_STATIC_GLOBALS ); */
  struct sidlx_rmi_Simsponse__epv*  epv = &s_rem_epv__sidlx_rmi_simsponse;
  struct sidl_BaseClass__epv*       e0  = &s_rem_epv__sidl_baseclass;
  struct sidl_BaseInterface__epv*   e1  = &s_rem_epv__sidl_baseinterface;
  struct sidl_io_Deserializer__epv* e2  = &s_rem_epv__sidl_io_deserializer;
  struct sidl_rmi_Response__epv*    e3  = &s_rem_epv__sidl_rmi_response;

  epv->f__cast                        = remote_sidlx_rmi_Simsponse__cast;
  epv->f__delete                      = remote_sidlx_rmi_Simsponse__delete;
  epv->f__exec                        = remote_sidlx_rmi_Simsponse__exec;
  epv->f__getURL                      = remote_sidlx_rmi_Simsponse__getURL;
  epv->f__raddRef                     = remote_sidlx_rmi_Simsponse__raddRef;
  epv->f__isRemote                    = remote_sidlx_rmi_Simsponse__isRemote;
  epv->f__set_hooks                   = remote_sidlx_rmi_Simsponse__set_hooks;
  epv->f__ctor                        = NULL;
  epv->f__ctor2                       = NULL;
  epv->f__dtor                        = NULL;
  epv->f_init                         = remote_sidlx_rmi_Simsponse_init;
  epv->f_test                         = remote_sidlx_rmi_Simsponse_test;
  epv->f_pullData                     = remote_sidlx_rmi_Simsponse_pullData;
  epv->f_getMethodName                = 
    remote_sidlx_rmi_Simsponse_getMethodName;
  epv->f_getObjectID                  = remote_sidlx_rmi_Simsponse_getObjectID;
  epv->f_addRef                       = remote_sidlx_rmi_Simsponse_addRef;
  epv->f_deleteRef                    = remote_sidlx_rmi_Simsponse_deleteRef;
  epv->f_isSame                       = remote_sidlx_rmi_Simsponse_isSame;
  epv->f_isType                       = remote_sidlx_rmi_Simsponse_isType;
  epv->f_getClassInfo                 = remote_sidlx_rmi_Simsponse_getClassInfo;
  epv->f_getExceptionThrown           = 
    remote_sidlx_rmi_Simsponse_getExceptionThrown;
  epv->f_unpackBool                   = remote_sidlx_rmi_Simsponse_unpackBool;
  epv->f_unpackChar                   = remote_sidlx_rmi_Simsponse_unpackChar;
  epv->f_unpackInt                    = remote_sidlx_rmi_Simsponse_unpackInt;
  epv->f_unpackLong                   = remote_sidlx_rmi_Simsponse_unpackLong;
  epv->f_unpackOpaque                 = remote_sidlx_rmi_Simsponse_unpackOpaque;
  epv->f_unpackFloat                  = remote_sidlx_rmi_Simsponse_unpackFloat;
  epv->f_unpackDouble                 = remote_sidlx_rmi_Simsponse_unpackDouble;
  epv->f_unpackFcomplex               = 
    remote_sidlx_rmi_Simsponse_unpackFcomplex;
  epv->f_unpackDcomplex               = 
    remote_sidlx_rmi_Simsponse_unpackDcomplex;
  epv->f_unpackString                 = remote_sidlx_rmi_Simsponse_unpackString;
  epv->f_unpackSerializable           = 
    remote_sidlx_rmi_Simsponse_unpackSerializable;
  epv->f_unpackBoolArray              = 
    remote_sidlx_rmi_Simsponse_unpackBoolArray;
  epv->f_unpackCharArray              = 
    remote_sidlx_rmi_Simsponse_unpackCharArray;
  epv->f_unpackIntArray               = 
    remote_sidlx_rmi_Simsponse_unpackIntArray;
  epv->f_unpackLongArray              = 
    remote_sidlx_rmi_Simsponse_unpackLongArray;
  epv->f_unpackOpaqueArray            = 
    remote_sidlx_rmi_Simsponse_unpackOpaqueArray;
  epv->f_unpackFloatArray             = 
    remote_sidlx_rmi_Simsponse_unpackFloatArray;
  epv->f_unpackDoubleArray            = 
    remote_sidlx_rmi_Simsponse_unpackDoubleArray;
  epv->f_unpackFcomplexArray          = 
    remote_sidlx_rmi_Simsponse_unpackFcomplexArray;
  epv->f_unpackDcomplexArray          = 
    remote_sidlx_rmi_Simsponse_unpackDcomplexArray;
  epv->f_unpackStringArray            = 
    remote_sidlx_rmi_Simsponse_unpackStringArray;
  epv->f_unpackGenericArray           = 
    remote_sidlx_rmi_Simsponse_unpackGenericArray;
  epv->f_unpackSerializableArray      = 
    remote_sidlx_rmi_Simsponse_unpackSerializableArray;

  e0->f__cast        = (void* (*)(struct sidl_BaseClass__object*,const char*,
    sidl_BaseInterface*)) epv->f__cast;
  e0->f__delete      = (void (*)(struct sidl_BaseClass__object*,
    sidl_BaseInterface*)) epv->f__delete;
  e0->f__getURL      = (char* (*)(struct sidl_BaseClass__object*,
    sidl_BaseInterface*)) epv->f__getURL;
  e0->f__raddRef     = (void (*)(struct sidl_BaseClass__object*,
    sidl_BaseInterface*)) epv->f__raddRef;
  e0->f__isRemote    = (sidl_bool (*)(struct sidl_BaseClass__object*,
    sidl_BaseInterface*)) epv->f__isRemote;
  e0->f__set_hooks   = (void (*)(struct sidl_BaseClass__object*,int32_t, 
    sidl_BaseInterface*)) epv->f__set_hooks;
  e0->f__exec        = (void (*)(struct sidl_BaseClass__object*,const char*,
    struct sidl_rmi_Call__object*,struct sidl_rmi_Return__object*,struct 
    sidl_BaseInterface__object **)) epv->f__exec;
  e0->f_addRef       = (void (*)(struct sidl_BaseClass__object*,struct 
    sidl_BaseInterface__object **)) epv->f_addRef;
  e0->f_deleteRef    = (void (*)(struct sidl_BaseClass__object*,struct 
    sidl_BaseInterface__object **)) epv->f_deleteRef;
  e0->f_isSame       = (sidl_bool (*)(struct sidl_BaseClass__object*,struct 
    sidl_BaseInterface__object*,struct sidl_BaseInterface__object **)) 
    epv->f_isSame;
  e0->f_isType       = (sidl_bool (*)(struct sidl_BaseClass__object*,const 
    char*,struct sidl_BaseInterface__object **)) epv->f_isType;
  e0->f_getClassInfo = (struct sidl_ClassInfo__object* (*)(struct 
    sidl_BaseClass__object*,struct sidl_BaseInterface__object **)) 
    epv->f_getClassInfo;

  e1->f__cast        = (void* (*)(void*,const char*,sidl_BaseInterface*)) 
    epv->f__cast;
  e1->f__delete      = (void (*)(void*,sidl_BaseInterface*)) epv->f__delete;
  e1->f__getURL      = (char* (*)(void*,sidl_BaseInterface*)) epv->f__getURL;
  e1->f__raddRef     = (void (*)(void*,sidl_BaseInterface*)) epv->f__raddRef;
  e1->f__isRemote    = (sidl_bool (*)(void*,sidl_BaseInterface*)) 
    epv->f__isRemote;
  e1->f__set_hooks   = (void (*)(void*,int32_t, sidl_BaseInterface*)) 
    epv->f__set_hooks;
  e1->f__exec        = (void (*)(void*,const char*,struct 
    sidl_rmi_Call__object*,struct sidl_rmi_Return__object*,struct 
    sidl_BaseInterface__object **)) epv->f__exec;
  e1->f_addRef       = (void (*)(void*,struct sidl_BaseInterface__object **)) 
    epv->f_addRef;
  e1->f_deleteRef    = (void (*)(void*,struct sidl_BaseInterface__object **)) 
    epv->f_deleteRef;
  e1->f_isSame       = (sidl_bool (*)(void*,struct sidl_BaseInterface__object*,
    struct sidl_BaseInterface__object **)) epv->f_isSame;
  e1->f_isType       = (sidl_bool (*)(void*,const char*,struct 
    sidl_BaseInterface__object **)) epv->f_isType;
  e1->f_getClassInfo = (struct sidl_ClassInfo__object* (*)(void*,struct 
    sidl_BaseInterface__object **)) epv->f_getClassInfo;

  e2->f__cast                   = (void* (*)(void*,const char*,
    sidl_BaseInterface*)) epv->f__cast;
  e2->f__delete                 = (void (*)(void*,sidl_BaseInterface*)) 
    epv->f__delete;
  e2->f__getURL                 = (char* (*)(void*,sidl_BaseInterface*)) 
    epv->f__getURL;
  e2->f__raddRef                = (void (*)(void*,sidl_BaseInterface*)) 
    epv->f__raddRef;
  e2->f__isRemote               = (sidl_bool (*)(void*,sidl_BaseInterface*)) 
    epv->f__isRemote;
  e2->f__set_hooks              = (void (*)(void*,int32_t, 
    sidl_BaseInterface*)) epv->f__set_hooks;
  e2->f__exec                   = (void (*)(void*,const char*,struct 
    sidl_rmi_Call__object*,struct sidl_rmi_Return__object*,struct 
    sidl_BaseInterface__object **)) epv->f__exec;
  e2->f_unpackBool              = (void (*)(void*,const char*,sidl_bool*,struct 
    sidl_BaseInterface__object **)) epv->f_unpackBool;
  e2->f_unpackChar              = (void (*)(void*,const char*,char*,struct 
    sidl_BaseInterface__object **)) epv->f_unpackChar;
  e2->f_unpackInt               = (void (*)(void*,const char*,int32_t*,struct 
    sidl_BaseInterface__object **)) epv->f_unpackInt;
  e2->f_unpackLong              = (void (*)(void*,const char*,int64_t*,struct 
    sidl_BaseInterface__object **)) epv->f_unpackLong;
  e2->f_unpackOpaque            = (void (*)(void*,const char*,void**,struct 
    sidl_BaseInterface__object **)) epv->f_unpackOpaque;
  e2->f_unpackFloat             = (void (*)(void*,const char*,float*,struct 
    sidl_BaseInterface__object **)) epv->f_unpackFloat;
  e2->f_unpackDouble            = (void (*)(void*,const char*,double*,struct 
    sidl_BaseInterface__object **)) epv->f_unpackDouble;
  e2->f_unpackFcomplex          = (void (*)(void*,const char*,struct 
    sidl_fcomplex*,struct sidl_BaseInterface__object **)) epv->f_unpackFcomplex;
  e2->f_unpackDcomplex          = (void (*)(void*,const char*,struct 
    sidl_dcomplex*,struct sidl_BaseInterface__object **)) epv->f_unpackDcomplex;
  e2->f_unpackString            = (void (*)(void*,const char*,char**,struct 
    sidl_BaseInterface__object **)) epv->f_unpackString;
  e2->f_unpackSerializable      = (void (*)(void*,const char*,struct 
    sidl_io_Serializable__object**,struct sidl_BaseInterface__object **)) 
    epv->f_unpackSerializable;
  e2->f_unpackBoolArray         = (void (*)(void*,const char*,struct 
    sidl_bool__array**,int32_t,int32_t,sidl_bool,struct 
    sidl_BaseInterface__object **)) epv->f_unpackBoolArray;
  e2->f_unpackCharArray         = (void (*)(void*,const char*,struct 
    sidl_char__array**,int32_t,int32_t,sidl_bool,struct 
    sidl_BaseInterface__object **)) epv->f_unpackCharArray;
  e2->f_unpackIntArray          = (void (*)(void*,const char*,struct 
    sidl_int__array**,int32_t,int32_t,sidl_bool,struct 
    sidl_BaseInterface__object **)) epv->f_unpackIntArray;
  e2->f_unpackLongArray         = (void (*)(void*,const char*,struct 
    sidl_long__array**,int32_t,int32_t,sidl_bool,struct 
    sidl_BaseInterface__object **)) epv->f_unpackLongArray;
  e2->f_unpackOpaqueArray       = (void (*)(void*,const char*,struct 
    sidl_opaque__array**,int32_t,int32_t,sidl_bool,struct 
    sidl_BaseInterface__object **)) epv->f_unpackOpaqueArray;
  e2->f_unpackFloatArray        = (void (*)(void*,const char*,struct 
    sidl_float__array**,int32_t,int32_t,sidl_bool,struct 
    sidl_BaseInterface__object **)) epv->f_unpackFloatArray;
  e2->f_unpackDoubleArray       = (void (*)(void*,const char*,struct 
    sidl_double__array**,int32_t,int32_t,sidl_bool,struct 
    sidl_BaseInterface__object **)) epv->f_unpackDoubleArray;
  e2->f_unpackFcomplexArray     = (void (*)(void*,const char*,struct 
    sidl_fcomplex__array**,int32_t,int32_t,sidl_bool,struct 
    sidl_BaseInterface__object **)) epv->f_unpackFcomplexArray;
  e2->f_unpackDcomplexArray     = (void (*)(void*,const char*,struct 
    sidl_dcomplex__array**,int32_t,int32_t,sidl_bool,struct 
    sidl_BaseInterface__object **)) epv->f_unpackDcomplexArray;
  e2->f_unpackStringArray       = (void (*)(void*,const char*,struct 
    sidl_string__array**,int32_t,int32_t,sidl_bool,struct 
    sidl_BaseInterface__object **)) epv->f_unpackStringArray;
  e2->f_unpackGenericArray      = (void (*)(void*,const char*,struct 
    sidl__array**,struct sidl_BaseInterface__object **)) 
    epv->f_unpackGenericArray;
  e2->f_unpackSerializableArray = (void (*)(void*,const char*,struct 
    sidl_io_Serializable__array**,int32_t,int32_t,sidl_bool,struct 
    sidl_BaseInterface__object **)) epv->f_unpackSerializableArray;
  e2->f_addRef                  = (void (*)(void*,struct 
    sidl_BaseInterface__object **)) epv->f_addRef;
  e2->f_deleteRef               = (void (*)(void*,struct 
    sidl_BaseInterface__object **)) epv->f_deleteRef;
  e2->f_isSame                  = (sidl_bool (*)(void*,struct 
    sidl_BaseInterface__object*,struct sidl_BaseInterface__object **)) 
    epv->f_isSame;
  e2->f_isType                  = (sidl_bool (*)(void*,const char*,struct 
    sidl_BaseInterface__object **)) epv->f_isType;
  e2->f_getClassInfo            = (struct sidl_ClassInfo__object* (*)(void*,
    struct sidl_BaseInterface__object **)) epv->f_getClassInfo;

  e3->f__cast                   = (void* (*)(void*,const char*,
    sidl_BaseInterface*)) epv->f__cast;
  e3->f__delete                 = (void (*)(void*,sidl_BaseInterface*)) 
    epv->f__delete;
  e3->f__getURL                 = (char* (*)(void*,sidl_BaseInterface*)) 
    epv->f__getURL;
  e3->f__raddRef                = (void (*)(void*,sidl_BaseInterface*)) 
    epv->f__raddRef;
  e3->f__isRemote               = (sidl_bool (*)(void*,sidl_BaseInterface*)) 
    epv->f__isRemote;
  e3->f__set_hooks              = (void (*)(void*,int32_t, 
    sidl_BaseInterface*)) epv->f__set_hooks;
  e3->f__exec                   = (void (*)(void*,const char*,struct 
    sidl_rmi_Call__object*,struct sidl_rmi_Return__object*,struct 
    sidl_BaseInterface__object **)) epv->f__exec;
  e3->f_getExceptionThrown      = (struct sidl_BaseException__object* (*)(void*,
    struct sidl_BaseInterface__object **)) epv->f_getExceptionThrown;
  e3->f_unpackBool              = (void (*)(void*,const char*,sidl_bool*,struct 
    sidl_BaseInterface__object **)) epv->f_unpackBool;
  e3->f_unpackChar              = (void (*)(void*,const char*,char*,struct 
    sidl_BaseInterface__object **)) epv->f_unpackChar;
  e3->f_unpackInt               = (void (*)(void*,const char*,int32_t*,struct 
    sidl_BaseInterface__object **)) epv->f_unpackInt;
  e3->f_unpackLong              = (void (*)(void*,const char*,int64_t*,struct 
    sidl_BaseInterface__object **)) epv->f_unpackLong;
  e3->f_unpackOpaque            = (void (*)(void*,const char*,void**,struct 
    sidl_BaseInterface__object **)) epv->f_unpackOpaque;
  e3->f_unpackFloat             = (void (*)(void*,const char*,float*,struct 
    sidl_BaseInterface__object **)) epv->f_unpackFloat;
  e3->f_unpackDouble            = (void (*)(void*,const char*,double*,struct 
    sidl_BaseInterface__object **)) epv->f_unpackDouble;
  e3->f_unpackFcomplex          = (void (*)(void*,const char*,struct 
    sidl_fcomplex*,struct sidl_BaseInterface__object **)) epv->f_unpackFcomplex;
  e3->f_unpackDcomplex          = (void (*)(void*,const char*,struct 
    sidl_dcomplex*,struct sidl_BaseInterface__object **)) epv->f_unpackDcomplex;
  e3->f_unpackString            = (void (*)(void*,const char*,char**,struct 
    sidl_BaseInterface__object **)) epv->f_unpackString;
  e3->f_unpackSerializable      = (void (*)(void*,const char*,struct 
    sidl_io_Serializable__object**,struct sidl_BaseInterface__object **)) 
    epv->f_unpackSerializable;
  e3->f_unpackBoolArray         = (void (*)(void*,const char*,struct 
    sidl_bool__array**,int32_t,int32_t,sidl_bool,struct 
    sidl_BaseInterface__object **)) epv->f_unpackBoolArray;
  e3->f_unpackCharArray         = (void (*)(void*,const char*,struct 
    sidl_char__array**,int32_t,int32_t,sidl_bool,struct 
    sidl_BaseInterface__object **)) epv->f_unpackCharArray;
  e3->f_unpackIntArray          = (void (*)(void*,const char*,struct 
    sidl_int__array**,int32_t,int32_t,sidl_bool,struct 
    sidl_BaseInterface__object **)) epv->f_unpackIntArray;
  e3->f_unpackLongArray         = (void (*)(void*,const char*,struct 
    sidl_long__array**,int32_t,int32_t,sidl_bool,struct 
    sidl_BaseInterface__object **)) epv->f_unpackLongArray;
  e3->f_unpackOpaqueArray       = (void (*)(void*,const char*,struct 
    sidl_opaque__array**,int32_t,int32_t,sidl_bool,struct 
    sidl_BaseInterface__object **)) epv->f_unpackOpaqueArray;
  e3->f_unpackFloatArray        = (void (*)(void*,const char*,struct 
    sidl_float__array**,int32_t,int32_t,sidl_bool,struct 
    sidl_BaseInterface__object **)) epv->f_unpackFloatArray;
  e3->f_unpackDoubleArray       = (void (*)(void*,const char*,struct 
    sidl_double__array**,int32_t,int32_t,sidl_bool,struct 
    sidl_BaseInterface__object **)) epv->f_unpackDoubleArray;
  e3->f_unpackFcomplexArray     = (void (*)(void*,const char*,struct 
    sidl_fcomplex__array**,int32_t,int32_t,sidl_bool,struct 
    sidl_BaseInterface__object **)) epv->f_unpackFcomplexArray;
  e3->f_unpackDcomplexArray     = (void (*)(void*,const char*,struct 
    sidl_dcomplex__array**,int32_t,int32_t,sidl_bool,struct 
    sidl_BaseInterface__object **)) epv->f_unpackDcomplexArray;
  e3->f_unpackStringArray       = (void (*)(void*,const char*,struct 
    sidl_string__array**,int32_t,int32_t,sidl_bool,struct 
    sidl_BaseInterface__object **)) epv->f_unpackStringArray;
  e3->f_unpackGenericArray      = (void (*)(void*,const char*,struct 
    sidl__array**,struct sidl_BaseInterface__object **)) 
    epv->f_unpackGenericArray;
  e3->f_unpackSerializableArray = (void (*)(void*,const char*,struct 
    sidl_io_Serializable__array**,int32_t,int32_t,sidl_bool,struct 
    sidl_BaseInterface__object **)) epv->f_unpackSerializableArray;
  e3->f_addRef                  = (void (*)(void*,struct 
    sidl_BaseInterface__object **)) epv->f_addRef;
  e3->f_deleteRef               = (void (*)(void*,struct 
    sidl_BaseInterface__object **)) epv->f_deleteRef;
  e3->f_isSame                  = (sidl_bool (*)(void*,struct 
    sidl_BaseInterface__object*,struct sidl_BaseInterface__object **)) 
    epv->f_isSame;
  e3->f_isType                  = (sidl_bool (*)(void*,const char*,struct 
    sidl_BaseInterface__object **)) epv->f_isType;
  e3->f_getClassInfo            = (struct sidl_ClassInfo__object* (*)(void*,
    struct sidl_BaseInterface__object **)) epv->f_getClassInfo;

  s_remote_initialized = 1;
}

/* Create an instance that connects to an existing remote object. */
static struct sidlx_rmi_Simsponse__object*
sidlx_rmi_Simsponse__remoteConnect(const char *url, sidl_bool ar, 
  sidl_BaseInterface *_ex)
{
  struct sidlx_rmi_Simsponse__object* self;

  struct sidlx_rmi_Simsponse__object* s0;
  struct sidl_BaseClass__object* s1;

  struct sidlx_rmi_Simsponse__remote* r_obj;
  sidl_rmi_InstanceHandle instance = NULL;
  char* objectID = NULL;
  objectID = NULL;
  *_ex = NULL;
  if(url == NULL) {return NULL;}
  objectID = sidl_rmi_ServerRegistry_isLocalObject(url, _ex);
  if(objectID) {
    sidl_BaseInterface bi = (
      sidl_BaseInterface)sidl_rmi_InstanceRegistry_getInstanceByString(objectID,
      _ex); SIDL_CHECK(*_ex);
    return sidlx_rmi_Simsponse__rmicast(bi,_ex);SIDL_CHECK(*_ex);
  }
  instance = sidl_rmi_ProtocolFactory_connectInstance(url, ar, _ex ); 
    SIDL_CHECK(*_ex);
  if ( instance == NULL) { return NULL; }
  self =
    (struct sidlx_rmi_Simsponse__object*) malloc(
      sizeof(struct sidlx_rmi_Simsponse__object));

  r_obj =
    (struct sidlx_rmi_Simsponse__remote*) malloc(
      sizeof(struct sidlx_rmi_Simsponse__remote));

  r_obj->d_refcount = 1;
  r_obj->d_ih = instance;
  s0 =                               self;
  s1 =                               &s0->d_sidl_baseclass;

  LOCK_STATIC_GLOBALS;
  if (!s_remote_initialized) {
    sidlx_rmi_Simsponse__init_remote_epv();
  }
  UNLOCK_STATIC_GLOBALS;

  s1->d_sidl_baseinterface.d_epv    = &s_rem_epv__sidl_baseinterface;
  s1->d_sidl_baseinterface.d_object = (void*) self;

  s1->d_data = (void*) r_obj;
  s1->d_epv  = &s_rem_epv__sidl_baseclass;

  s0->d_sidl_io_deserializer.d_epv    = &s_rem_epv__sidl_io_deserializer;
  s0->d_sidl_io_deserializer.d_object = (void*) self;

  s0->d_sidl_rmi_response.d_epv    = &s_rem_epv__sidl_rmi_response;
  s0->d_sidl_rmi_response.d_object = (void*) self;

  s0->d_data = (void*) r_obj;
  s0->d_epv  = &s_rem_epv__sidlx_rmi_simsponse;

  self->d_data = (void*) r_obj;

  return self;
  EXIT:
  return NULL;
}
/* Create an instance that uses an already existing  */
/* InstanceHandle to connect to an existing remote object. */
static struct sidlx_rmi_Simsponse__object*
sidlx_rmi_Simsponse__IHConnect(sidl_rmi_InstanceHandle instance, 
  sidl_BaseInterface *_ex)
{
  struct sidlx_rmi_Simsponse__object* self;

  struct sidlx_rmi_Simsponse__object* s0;
  struct sidl_BaseClass__object* s1;

  struct sidlx_rmi_Simsponse__remote* r_obj;
  self =
    (struct sidlx_rmi_Simsponse__object*) malloc(
      sizeof(struct sidlx_rmi_Simsponse__object));

  r_obj =
    (struct sidlx_rmi_Simsponse__remote*) malloc(
      sizeof(struct sidlx_rmi_Simsponse__remote));

  r_obj->d_refcount = 1;
  r_obj->d_ih = instance;
  s0 =                               self;
  s1 =                               &s0->d_sidl_baseclass;

  LOCK_STATIC_GLOBALS;
  if (!s_remote_initialized) {
    sidlx_rmi_Simsponse__init_remote_epv();
  }
  UNLOCK_STATIC_GLOBALS;

  s1->d_sidl_baseinterface.d_epv    = &s_rem_epv__sidl_baseinterface;
  s1->d_sidl_baseinterface.d_object = (void*) self;

  s1->d_data = (void*) r_obj;
  s1->d_epv  = &s_rem_epv__sidl_baseclass;

  s0->d_sidl_io_deserializer.d_epv    = &s_rem_epv__sidl_io_deserializer;
  s0->d_sidl_io_deserializer.d_object = (void*) self;

  s0->d_sidl_rmi_response.d_epv    = &s_rem_epv__sidl_rmi_response;
  s0->d_sidl_rmi_response.d_object = (void*) self;

  s0->d_data = (void*) r_obj;
  s0->d_epv  = &s_rem_epv__sidlx_rmi_simsponse;

  self->d_data = (void*) r_obj;

  sidl_rmi_InstanceHandle_addRef(instance,_ex);SIDL_CHECK(*_ex);
  return self;
  EXIT:
  return NULL;
}
/* REMOTE: generate remote instance given URL string. */
static struct sidlx_rmi_Simsponse__object*
sidlx_rmi_Simsponse__remoteCreate(const char *url, sidl_BaseInterface *_ex)
{
  sidl_BaseInterface _throwaway_exception = NULL;
  struct sidlx_rmi_Simsponse__object* self;

  struct sidlx_rmi_Simsponse__object* s0;
  struct sidl_BaseClass__object* s1;

  struct sidlx_rmi_Simsponse__remote* r_obj;
  sidl_rmi_InstanceHandle instance = sidl_rmi_ProtocolFactory_createInstance(
    url, "sidlx.rmi.Simsponse", _ex ); SIDL_CHECK(*_ex);
  if ( instance == NULL) { return NULL; }
  self =
    (struct sidlx_rmi_Simsponse__object*) malloc(
      sizeof(struct sidlx_rmi_Simsponse__object));

  r_obj =
    (struct sidlx_rmi_Simsponse__remote*) malloc(
      sizeof(struct sidlx_rmi_Simsponse__remote));

  r_obj->d_refcount = 1;
  r_obj->d_ih = instance;
  s0 =                               self;
  s1 =                               &s0->d_sidl_baseclass;

  LOCK_STATIC_GLOBALS;
  if (!s_remote_initialized) {
    sidlx_rmi_Simsponse__init_remote_epv();
  }
  UNLOCK_STATIC_GLOBALS;

  s1->d_sidl_baseinterface.d_epv    = &s_rem_epv__sidl_baseinterface;
  s1->d_sidl_baseinterface.d_object = (void*) self;

  s1->d_data = (void*) r_obj;
  s1->d_epv  = &s_rem_epv__sidl_baseclass;

  s0->d_sidl_io_deserializer.d_epv    = &s_rem_epv__sidl_io_deserializer;
  s0->d_sidl_io_deserializer.d_object = (void*) self;

  s0->d_sidl_rmi_response.d_epv    = &s_rem_epv__sidl_rmi_response;
  s0->d_sidl_rmi_response.d_object = (void*) self;

  s0->d_data = (void*) r_obj;
  s0->d_epv  = &s_rem_epv__sidlx_rmi_simsponse;

  self->d_data = (void*) r_obj;

  return self;
  EXIT:
  if(instance) { sidl_rmi_InstanceHandle_deleteRef(instance, 
    &_throwaway_exception); }
  return NULL;
}
/*
 * Cast method for interface and class type conversions.
 */

struct sidlx_rmi_Simsponse__object*
sidlx_rmi_Simsponse__rmicast(
  void* obj,
  sidl_BaseInterface* _ex)
{
  struct sidlx_rmi_Simsponse__object* cast = NULL;

  *_ex = NULL;
  if(!connect_loaded) {
    sidl_rmi_ConnectRegistry_registerConnect("sidlx.rmi.Simsponse", (
      void*)sidlx_rmi_Simsponse__IHConnect, _ex);
    connect_loaded = 1;
  }
  if (obj != NULL) {
    struct sidl_BaseInterface__object* base = (struct 
      sidl_BaseInterface__object*) obj;
    cast = (struct sidlx_rmi_Simsponse__object*) (*base->d_epv->f__cast)(
      base->d_object,
      "sidlx.rmi.Simsponse", _ex); SIDL_CHECK(*_ex);
  }

  return cast;
  EXIT:
  return NULL;
}

/*
 * RMI connector function for the class.
 */

struct sidlx_rmi_Simsponse__object*
sidlx_rmi_Simsponse__connectI(const char* url, sidl_bool ar, struct 
  sidl_BaseInterface__object **_ex)
{
  return sidlx_rmi_Simsponse__remoteConnect(url, ar, _ex);
}

