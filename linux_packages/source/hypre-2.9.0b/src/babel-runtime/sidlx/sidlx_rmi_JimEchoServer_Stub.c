/*
 * File:          sidlx_rmi_JimEchoServer_Stub.c
 * Symbol:        sidlx.rmi.JimEchoServer-v0.1
 * Symbol Type:   class
 * Babel Version: 1.0.4
 * Description:   Client-side glue code for sidlx.rmi.JimEchoServer
 * 
 * WARNING: Automatically generated; changes will be lost
 * 
 */

#include "sidlx_rmi_JimEchoServer.h"
#include "sidlx_rmi_JimEchoServer_IOR.h"
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

static const struct sidlx_rmi_JimEchoServer__external *_externals = NULL;
/*
 * Lookup the symbol to get the IOR functions.
 */

static const struct sidlx_rmi_JimEchoServer__external* _loadIOR(void)
/*
 * Return pointer to internal IOR functions.
 */

{
#ifdef SIDL_STATIC_LIBRARY
  _externals = sidlx_rmi_JimEchoServer__externals();
#else
  _externals = (struct sidlx_rmi_JimEchoServer__external*)sidl_dynamicLoadIOR(
    "sidlx.rmi.JimEchoServer","sidlx_rmi_JimEchoServer__externals") ;
  sidl_checkIORVersion("sidlx.rmi.JimEchoServer", 
    _externals->d_ior_major_version, _externals->d_ior_minor_version, 1, 0);
#endif
  return _externals;
}

#define _getExternals() (_externals ? _externals : _loadIOR())

/*
 * Constructor function for the class.
 */

sidlx_rmi_JimEchoServer
sidlx_rmi_JimEchoServer__create(sidl_BaseInterface* _ex)
{
  return (*(_getExternals()->createObject))(NULL,_ex);
}

/**
 * Wraps up the private data struct pointer (struct sidlx_rmi_JimEchoServer__data) passed in rather than running the constructor.
 */
sidlx_rmi_JimEchoServer
sidlx_rmi_JimEchoServer__wrapObj(void* data, sidl_BaseInterface* _ex)
{
  return (*(_getExternals()->createObject))(data,_ex);
}

static sidlx_rmi_JimEchoServer sidlx_rmi_JimEchoServer__remoteCreate(const 
  char* url, sidl_BaseInterface *_ex);
/*
 * RMI constructor function for the class.
 */

sidlx_rmi_JimEchoServer
sidlx_rmi_JimEchoServer__createRemote(const char* url, sidl_BaseInterface *_ex)
{
  return sidlx_rmi_JimEchoServer__remoteCreate(url, _ex);
}

static struct sidlx_rmi_JimEchoServer__object* 
  sidlx_rmi_JimEchoServer__remoteConnect(const char* url, sidl_bool ar, 
  sidl_BaseInterface *_ex);
static struct sidlx_rmi_JimEchoServer__object* 
  sidlx_rmi_JimEchoServer__IHConnect(struct sidl_rmi_InstanceHandle__object* 
  instance, sidl_BaseInterface *_ex);
/*
 * RMI connector function for the class.
 */

sidlx_rmi_JimEchoServer
sidlx_rmi_JimEchoServer__connect(const char* url, sidl_BaseInterface *_ex)
{
  return sidlx_rmi_JimEchoServer__remoteConnect(url, TRUE, _ex);
}

/*
 * Method:  serviceRequest[]
 */

SIDL_C_INLINE_DEFN
void
sidlx_rmi_JimEchoServer_serviceRequest(
  /* in */ sidlx_rmi_JimEchoServer self,
  /* in */ sidlx_rmi_Socket sock,
  /* out */ sidl_BaseInterface *_ex)
#if SIDL_C_INLINE_REPEAT_DEFN
{
  (*self->d_epv->f_serviceRequest)(
    self,
    sock,
    _ex);
}
#else /* ISO C 1999 inline semantics */
;
#endif /* SIDL_C_INLINE_REPEAT_DEFN */

/*
 * Method:  isLocalObject[]
 */

SIDL_C_INLINE_DEFN
char*
sidlx_rmi_JimEchoServer_isLocalObject(
  /* in */ sidlx_rmi_JimEchoServer self,
  /* in */ const char* url,
  /* out */ sidl_BaseInterface *_ex)
#if SIDL_C_INLINE_REPEAT_DEFN
{
  char* _result;
  _result = (*self->d_epv->f_isLocalObject)(
    self,
    url,
    _ex);
  return _result;
}
#else /* ISO C 1999 inline semantics */
;
#endif /* SIDL_C_INLINE_REPEAT_DEFN */

/*
 * This gets an array of logged exceptions.  If an exception can
 * not be thrown back to the caller, we log it with the Server.  This 
 * gets the array of all those exceptions.
 * THIS IS SOMETHING OF A TEST! THIS MAY CHANGE!
 */

SIDL_C_INLINE_DEFN
struct sidl_io_Serializable__array*
sidlx_rmi_JimEchoServer_getExceptions(
  /* in */ sidlx_rmi_JimEchoServer self,
  /* out */ sidl_BaseInterface *_ex)
#if SIDL_C_INLINE_REPEAT_DEFN
{
  struct sidl_io_Serializable__array* _result;
  _result = (*self->d_epv->f_getExceptions)(
    self,
    _ex);
  return _result;
}
#else /* ISO C 1999 inline semantics */
;
#endif /* SIDL_C_INLINE_REPEAT_DEFN */

/*
 * Set the maximum size of the client thread pool.
 * (default = 1024)
 */

SIDL_C_INLINE_DEFN
void
sidlx_rmi_JimEchoServer_setMaxThreadPool(
  /* in */ sidlx_rmi_JimEchoServer self,
  /* in */ int32_t max,
  /* out */ sidl_BaseInterface *_ex)
#if SIDL_C_INLINE_REPEAT_DEFN
{
  (*self->d_epv->f_setMaxThreadPool)(
    self,
    max,
    _ex);
}
#else /* ISO C 1999 inline semantics */
;
#endif /* SIDL_C_INLINE_REPEAT_DEFN */

/*
 * request a specific port number
 * returns true iff request is satisfied
 */

SIDL_C_INLINE_DEFN
sidl_bool
sidlx_rmi_JimEchoServer_requestPort(
  /* in */ sidlx_rmi_JimEchoServer self,
  /* in */ int32_t port,
  /* out */ sidl_BaseInterface *_ex)
#if SIDL_C_INLINE_REPEAT_DEFN
{
  sidl_bool _result;
  _result = (*self->d_epv->f_requestPort)(
    self,
    port,
    _ex);
  return _result;
}
#else /* ISO C 1999 inline semantics */
;
#endif /* SIDL_C_INLINE_REPEAT_DEFN */

/*
 * Request the minimum available port in 
 * a range.  Returns true
 */

SIDL_C_INLINE_DEFN
sidl_bool
sidlx_rmi_JimEchoServer_requestPortInRange(
  /* in */ sidlx_rmi_JimEchoServer self,
  /* in */ int32_t minport,
  /* in */ int32_t maxport,
  /* out */ sidl_BaseInterface *_ex)
#if SIDL_C_INLINE_REPEAT_DEFN
{
  sidl_bool _result;
  _result = (*self->d_epv->f_requestPortInRange)(
    self,
    minport,
    maxport,
    _ex);
  return _result;
}
#else /* ISO C 1999 inline semantics */
;
#endif /* SIDL_C_INLINE_REPEAT_DEFN */

/*
 * get the port that this Server is bound to
 */

SIDL_C_INLINE_DEFN
int32_t
sidlx_rmi_JimEchoServer_getPort(
  /* in */ sidlx_rmi_JimEchoServer self,
  /* out */ sidl_BaseInterface *_ex)
#if SIDL_C_INLINE_REPEAT_DEFN
{
  int32_t _result;
  _result = (*self->d_epv->f_getPort)(
    self,
    _ex);
  return _result;
}
#else /* ISO C 1999 inline semantics */
;
#endif /* SIDL_C_INLINE_REPEAT_DEFN */

/*
 * get the network name of this computer
 */

SIDL_C_INLINE_DEFN
char*
sidlx_rmi_JimEchoServer_getServerName(
  /* in */ sidlx_rmi_JimEchoServer self,
  /* out */ sidl_BaseInterface *_ex)
#if SIDL_C_INLINE_REPEAT_DEFN
{
  char* _result;
  _result = (*self->d_epv->f_getServerName)(
    self,
    _ex);
  return _result;
}
#else /* ISO C 1999 inline semantics */
;
#endif /* SIDL_C_INLINE_REPEAT_DEFN */

/*
 * get the full URL for exporting objects
 */

SIDL_C_INLINE_DEFN
char*
sidlx_rmi_JimEchoServer_getServerURL(
  /* in */ sidlx_rmi_JimEchoServer self,
  /* in */ const char* objID,
  /* out */ sidl_BaseInterface *_ex)
#if SIDL_C_INLINE_REPEAT_DEFN
{
  char* _result;
  _result = (*self->d_epv->f_getServerURL)(
    self,
    objID,
    _ex);
  return _result;
}
#else /* ISO C 1999 inline semantics */
;
#endif /* SIDL_C_INLINE_REPEAT_DEFN */

/*
 * run the server (must have port specified first), if a threaded server,
 * returns the tid of the server thread for joining.
 */

SIDL_C_INLINE_DEFN
int64_t
sidlx_rmi_JimEchoServer_run(
  /* in */ sidlx_rmi_JimEchoServer self,
  /* out */ sidl_BaseInterface *_ex)
#if SIDL_C_INLINE_REPEAT_DEFN
{
  int64_t _result;
  _result = (*self->d_epv->f_run)(
    self,
    _ex);
  return _result;
}
#else /* ISO C 1999 inline semantics */
;
#endif /* SIDL_C_INLINE_REPEAT_DEFN */

/*
 * cleanly shutdown the orb.
 */

SIDL_C_INLINE_DEFN
void
sidlx_rmi_JimEchoServer_shutdown(
  /* in */ sidlx_rmi_JimEchoServer self,
  /* out */ sidl_BaseInterface *_ex)
#if SIDL_C_INLINE_REPEAT_DEFN
{
  (*self->d_epv->f_shutdown)(
    self,
    _ex);
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
sidlx_rmi_JimEchoServer_addRef(
  /* in */ sidlx_rmi_JimEchoServer self,
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
sidlx_rmi_JimEchoServer_deleteRef(
  /* in */ sidlx_rmi_JimEchoServer self,
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
sidlx_rmi_JimEchoServer_isSame(
  /* in */ sidlx_rmi_JimEchoServer self,
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
sidlx_rmi_JimEchoServer_isType(
  /* in */ sidlx_rmi_JimEchoServer self,
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
sidlx_rmi_JimEchoServer_getClassInfo(
  /* in */ sidlx_rmi_JimEchoServer self,
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
 * Cast method for interface and class type conversions.
 */

sidlx_rmi_JimEchoServer
sidlx_rmi_JimEchoServer__cast(
  void* obj,
  sidl_BaseInterface* _ex)
{
  sidlx_rmi_JimEchoServer cast = NULL;

  if(!connect_loaded) {
    connect_loaded = 1;
    sidl_rmi_ConnectRegistry_registerConnect("sidlx.rmi.JimEchoServer", (
      void*)sidlx_rmi_JimEchoServer__IHConnect,_ex);SIDL_CHECK(*_ex);
  }
  if (obj != NULL) {
    sidl_BaseInterface base = (sidl_BaseInterface) obj;
    cast = (sidlx_rmi_JimEchoServer) (*base->d_epv->f__cast)(
      base->d_object,
      "sidlx.rmi.JimEchoServer", _ex); SIDL_CHECK(*_ex);
  }

  EXIT:
  return cast;
}

/*
 * String cast method for interface and class type conversions.
 */

void*
sidlx_rmi_JimEchoServer__cast2(
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
sidlx_rmi_JimEchoServer__exec(
  /* in */ sidlx_rmi_JimEchoServer self,
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
sidlx_rmi_JimEchoServer__getURL(
  /* in */ sidlx_rmi_JimEchoServer self,
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
sidlx_rmi_JimEchoServer__raddRef(
  /* in */ sidlx_rmi_JimEchoServer self,
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
sidlx_rmi_JimEchoServer__set_hooks(
  /* in */ sidlx_rmi_JimEchoServer self,
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
sidlx_rmi_JimEchoServer__isRemote(
  /* in */ sidlx_rmi_JimEchoServer self,
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
sidlx_rmi_JimEchoServer__isLocal(
  /* in */ sidlx_rmi_JimEchoServer self,
  /* out */ sidl_BaseInterface *_ex)
{
  return !sidlx_rmi_JimEchoServer__isRemote(self,_ex);
}

/**
 * Create a contiguous array of the given dimension with specified
 * index bounds in column-major order. This array
 * owns and manages its data.
 * This function initializes the contents of the array to
 * NULL.
 */
struct sidlx_rmi_JimEchoServer__array*
sidlx_rmi_JimEchoServer__array_createCol(
  int32_t       dimen,
  const int32_t lower[],
  const int32_t upper[])
{
  return (struct 
    sidlx_rmi_JimEchoServer__array*)sidl_interface__array_createCol(dimen, 
    lower, upper);
}

/**
 * Create a contiguous array of the given dimension with specified
 * index bounds in row-major order. This array
 * owns and manages its data.
 * This function initializes the contents of the array to
 * NULL.
 */
struct sidlx_rmi_JimEchoServer__array*
sidlx_rmi_JimEchoServer__array_createRow(
  int32_t       dimen,
  const int32_t lower[],
  const int32_t upper[])
{
  return (struct 
    sidlx_rmi_JimEchoServer__array*)sidl_interface__array_createRow(dimen, 
    lower, upper);
}

/**
 * Create a contiguous one-dimensional array with a lower index
 * of 0 and an upper index of len-1. This array
 * owns and manages its data.
 * This function initializes the contents of the array to
 * NULL.
 */
struct sidlx_rmi_JimEchoServer__array*
sidlx_rmi_JimEchoServer__array_create1d(int32_t len)
{
  return (struct sidlx_rmi_JimEchoServer__array*)sidl_interface__array_create1d(
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
struct sidlx_rmi_JimEchoServer__array*
sidlx_rmi_JimEchoServer__array_create1dInit(
  int32_t len, 
  sidlx_rmi_JimEchoServer* data)
{
  return (struct 
    sidlx_rmi_JimEchoServer__array*)sidl_interface__array_create1dInit(len, (
    struct sidl_BaseInterface__object **)data);
}

/**
 * Create a contiguous two-dimensional array in column-major
 * order with a lower index of (0,0) and an upper index of
 * (m-1,n-1). This array owns and manages its data.
 * This function initializes the contents of the array to
 * NULL.
 */
struct sidlx_rmi_JimEchoServer__array*
sidlx_rmi_JimEchoServer__array_create2dCol(int32_t m, int32_t n)
{
  return (struct 
    sidlx_rmi_JimEchoServer__array*)sidl_interface__array_create2dCol(m, n);
}

/**
 * Create a contiguous two-dimensional array in row-major
 * order with a lower index of (0,0) and an upper index of
 * (m-1,n-1). This array owns and manages its data.
 * This function initializes the contents of the array to
 * NULL.
 */
struct sidlx_rmi_JimEchoServer__array*
sidlx_rmi_JimEchoServer__array_create2dRow(int32_t m, int32_t n)
{
  return (struct 
    sidlx_rmi_JimEchoServer__array*)sidl_interface__array_create2dRow(m, n);
}

/**
 * Create an array that uses data (memory) from another
 * source. The initial contents are determined by the
 * data being borrowed.
 * Any time an element in the borrowed array is replaced
 * via a set call, deleteRef will be called on the
 * value being replaced if it is not NULL.
 */
struct sidlx_rmi_JimEchoServer__array*
sidlx_rmi_JimEchoServer__array_borrow(
  sidlx_rmi_JimEchoServer* firstElement,
  int32_t       dimen,
  const int32_t lower[],
  const int32_t upper[],
  const int32_t stride[])
{
  return (struct sidlx_rmi_JimEchoServer__array*)sidl_interface__array_borrow(
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
struct sidlx_rmi_JimEchoServer__array*
sidlx_rmi_JimEchoServer__array_smartCopy(
  struct sidlx_rmi_JimEchoServer__array *array)
{
  return (struct sidlx_rmi_JimEchoServer__array*)
    sidl_interface__array_smartCopy((struct sidl_interface__array *)array);
}

/**
 * Increment the array's internal reference count by one.
 */
void
sidlx_rmi_JimEchoServer__array_addRef(
  struct sidlx_rmi_JimEchoServer__array* array)
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
sidlx_rmi_JimEchoServer__array_deleteRef(
  struct sidlx_rmi_JimEchoServer__array* array)
{
  sidl_interface__array_deleteRef((struct sidl_interface__array *)array);
}

/**
 * Retrieve element i1 of a(n) 1-dimensional array.
 */
sidlx_rmi_JimEchoServer
sidlx_rmi_JimEchoServer__array_get1(
  const struct sidlx_rmi_JimEchoServer__array* array,
  const int32_t i1)
{
  return (sidlx_rmi_JimEchoServer)
    sidl_interface__array_get1((const struct sidl_interface__array *)array
    , i1);
}

/**
 * Retrieve element (i1,i2) of a(n) 2-dimensional array.
 */
sidlx_rmi_JimEchoServer
sidlx_rmi_JimEchoServer__array_get2(
  const struct sidlx_rmi_JimEchoServer__array* array,
  const int32_t i1,
  const int32_t i2)
{
  return (sidlx_rmi_JimEchoServer)
    sidl_interface__array_get2((const struct sidl_interface__array *)array
    , i1, i2);
}

/**
 * Retrieve element (i1,i2,i3) of a(n) 3-dimensional array.
 */
sidlx_rmi_JimEchoServer
sidlx_rmi_JimEchoServer__array_get3(
  const struct sidlx_rmi_JimEchoServer__array* array,
  const int32_t i1,
  const int32_t i2,
  const int32_t i3)
{
  return (sidlx_rmi_JimEchoServer)
    sidl_interface__array_get3((const struct sidl_interface__array *)array
    , i1, i2, i3);
}

/**
 * Retrieve element (i1,i2,i3,i4) of a(n) 4-dimensional array.
 */
sidlx_rmi_JimEchoServer
sidlx_rmi_JimEchoServer__array_get4(
  const struct sidlx_rmi_JimEchoServer__array* array,
  const int32_t i1,
  const int32_t i2,
  const int32_t i3,
  const int32_t i4)
{
  return (sidlx_rmi_JimEchoServer)
    sidl_interface__array_get4((const struct sidl_interface__array *)array
    , i1, i2, i3, i4);
}

/**
 * Retrieve element (i1,i2,i3,i4,i5) of a(n) 5-dimensional array.
 */
sidlx_rmi_JimEchoServer
sidlx_rmi_JimEchoServer__array_get5(
  const struct sidlx_rmi_JimEchoServer__array* array,
  const int32_t i1,
  const int32_t i2,
  const int32_t i3,
  const int32_t i4,
  const int32_t i5)
{
  return (sidlx_rmi_JimEchoServer)
    sidl_interface__array_get5((const struct sidl_interface__array *)array
    , i1, i2, i3, i4, i5);
}

/**
 * Retrieve element (i1,i2,i3,i4,i5,i6) of a(n) 6-dimensional array.
 */
sidlx_rmi_JimEchoServer
sidlx_rmi_JimEchoServer__array_get6(
  const struct sidlx_rmi_JimEchoServer__array* array,
  const int32_t i1,
  const int32_t i2,
  const int32_t i3,
  const int32_t i4,
  const int32_t i5,
  const int32_t i6)
{
  return (sidlx_rmi_JimEchoServer)
    sidl_interface__array_get6((const struct sidl_interface__array *)array
    , i1, i2, i3, i4, i5, i6);
}

/**
 * Retrieve element (i1,i2,i3,i4,i5,i6,i7) of a(n) 7-dimensional array.
 */
sidlx_rmi_JimEchoServer
sidlx_rmi_JimEchoServer__array_get7(
  const struct sidlx_rmi_JimEchoServer__array* array,
  const int32_t i1,
  const int32_t i2,
  const int32_t i3,
  const int32_t i4,
  const int32_t i5,
  const int32_t i6,
  const int32_t i7)
{
  return (sidlx_rmi_JimEchoServer)
    sidl_interface__array_get7((const struct sidl_interface__array *)array
    , i1, i2, i3, i4, i5, i6, i7);
}

/**
 * Retrieve element indices of an n-dimensional array.
 * indices is assumed to have the right number of elements
 * for the dimension of array.
 */
sidlx_rmi_JimEchoServer
sidlx_rmi_JimEchoServer__array_get(
  const struct sidlx_rmi_JimEchoServer__array* array,
  const int32_t indices[])
{
  return (sidlx_rmi_JimEchoServer)
    sidl_interface__array_get((const struct sidl_interface__array *)array, 
      indices);
}

/**
 * Set element i1 of a(n) 1-dimensional array to value.
 */
void
sidlx_rmi_JimEchoServer__array_set1(
  struct sidlx_rmi_JimEchoServer__array* array,
  const int32_t i1,
  sidlx_rmi_JimEchoServer const value)
{
  sidl_interface__array_set1((struct sidl_interface__array *)array
  , i1, (struct sidl_BaseInterface__object *)value);
}

/**
 * Set element (i1,i2) of a(n) 2-dimensional array to value.
 */
void
sidlx_rmi_JimEchoServer__array_set2(
  struct sidlx_rmi_JimEchoServer__array* array,
  const int32_t i1,
  const int32_t i2,
  sidlx_rmi_JimEchoServer const value)
{
  sidl_interface__array_set2((struct sidl_interface__array *)array
  , i1, i2, (struct sidl_BaseInterface__object *)value);
}

/**
 * Set element (i1,i2,i3) of a(n) 3-dimensional array to value.
 */
void
sidlx_rmi_JimEchoServer__array_set3(
  struct sidlx_rmi_JimEchoServer__array* array,
  const int32_t i1,
  const int32_t i2,
  const int32_t i3,
  sidlx_rmi_JimEchoServer const value)
{
  sidl_interface__array_set3((struct sidl_interface__array *)array
  , i1, i2, i3, (struct sidl_BaseInterface__object *)value);
}

/**
 * Set element (i1,i2,i3,i4) of a(n) 4-dimensional array to value.
 */
void
sidlx_rmi_JimEchoServer__array_set4(
  struct sidlx_rmi_JimEchoServer__array* array,
  const int32_t i1,
  const int32_t i2,
  const int32_t i3,
  const int32_t i4,
  sidlx_rmi_JimEchoServer const value)
{
  sidl_interface__array_set4((struct sidl_interface__array *)array
  , i1, i2, i3, i4, (struct sidl_BaseInterface__object *)value);
}

/**
 * Set element (i1,i2,i3,i4,i5) of a(n) 5-dimensional array to value.
 */
void
sidlx_rmi_JimEchoServer__array_set5(
  struct sidlx_rmi_JimEchoServer__array* array,
  const int32_t i1,
  const int32_t i2,
  const int32_t i3,
  const int32_t i4,
  const int32_t i5,
  sidlx_rmi_JimEchoServer const value)
{
  sidl_interface__array_set5((struct sidl_interface__array *)array
  , i1, i2, i3, i4, i5, (struct sidl_BaseInterface__object *)value);
}

/**
 * Set element (i1,i2,i3,i4,i5,i6) of a(n) 6-dimensional array to value.
 */
void
sidlx_rmi_JimEchoServer__array_set6(
  struct sidlx_rmi_JimEchoServer__array* array,
  const int32_t i1,
  const int32_t i2,
  const int32_t i3,
  const int32_t i4,
  const int32_t i5,
  const int32_t i6,
  sidlx_rmi_JimEchoServer const value)
{
  sidl_interface__array_set6((struct sidl_interface__array *)array
  , i1, i2, i3, i4, i5, i6, (struct sidl_BaseInterface__object *)value);
}

/**
 * Set element (i1,i2,i3,i4,i5,i6,i7) of a(n) 7-dimensional array to value.
 */
void
sidlx_rmi_JimEchoServer__array_set7(
  struct sidlx_rmi_JimEchoServer__array* array,
  const int32_t i1,
  const int32_t i2,
  const int32_t i3,
  const int32_t i4,
  const int32_t i5,
  const int32_t i6,
  const int32_t i7,
  sidlx_rmi_JimEchoServer const value)
{
  sidl_interface__array_set7((struct sidl_interface__array *)array
  , i1, i2, i3, i4, i5, i6, i7, (struct sidl_BaseInterface__object *)value);
}

/**
 * Set element indices of an n-dimensional array to value.indices is assumed to have the right number of elements
 * for the dimension of array.
 */
void
sidlx_rmi_JimEchoServer__array_set(
  struct sidlx_rmi_JimEchoServer__array* array,
  const int32_t indices[],
  sidlx_rmi_JimEchoServer const value)
{
  sidl_interface__array_set((struct sidl_interface__array *)array, indices, (
    struct sidl_BaseInterface__object *)value);
}

/**
 * Return the dimension of array. If the array pointer is
 * NULL, zero is returned.
 */
int32_t
sidlx_rmi_JimEchoServer__array_dimen(
  const struct sidlx_rmi_JimEchoServer__array* array)
{
  return sidl_interface__array_dimen((struct sidl_interface__array *)array);
}

/**
 * Return the lower bound of dimension ind.
 * If ind is not a valid dimension, 0 is returned.
 * The valid range for ind is from 0 to dimen-1.
 */
int32_t
sidlx_rmi_JimEchoServer__array_lower(
  const struct sidlx_rmi_JimEchoServer__array* array,
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
sidlx_rmi_JimEchoServer__array_upper(
  const struct sidlx_rmi_JimEchoServer__array* array,
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
sidlx_rmi_JimEchoServer__array_length(
  const struct sidlx_rmi_JimEchoServer__array* array,
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
sidlx_rmi_JimEchoServer__array_stride(
  const struct sidlx_rmi_JimEchoServer__array* array,
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
sidlx_rmi_JimEchoServer__array_isColumnOrder(
  const struct sidlx_rmi_JimEchoServer__array* array)
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
sidlx_rmi_JimEchoServer__array_isRowOrder(
  const struct sidlx_rmi_JimEchoServer__array* array)
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
sidlx_rmi_JimEchoServer__array_copy(
  const struct sidlx_rmi_JimEchoServer__array* src,
  struct sidlx_rmi_JimEchoServer__array* dest)
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
struct sidlx_rmi_JimEchoServer__array*
sidlx_rmi_JimEchoServer__array_slice(
  struct sidlx_rmi_JimEchoServer__array* src,
  int32_t        dimen,
  const int32_t  numElem[],
  const int32_t  *srcStart,
  const int32_t  *srcStride,
  const int32_t  *newStart)
{
  return (struct sidlx_rmi_JimEchoServer__array*)
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
struct sidlx_rmi_JimEchoServer__array*
sidlx_rmi_JimEchoServer__array_ensure(
  struct sidlx_rmi_JimEchoServer__array* src,
  int32_t dimen,
  int     ordering)
{
  return (struct sidlx_rmi_JimEchoServer__array*)
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
static struct sidl_recursive_mutex_t sidlx_rmi_JimEchoServer__mutex= SIDL_RECURSIVE_MUTEX_INITIALIZER;
#define LOCK_STATIC_GLOBALS sidl_recursive_mutex_lock( &sidlx_rmi_JimEchoServer__mutex )
#define UNLOCK_STATIC_GLOBALS sidl_recursive_mutex_unlock( &sidlx_rmi_JimEchoServer__mutex )
/* #define HAVE_LOCKED_STATIC_GLOBALS (sidl_recursive_mutex_trylock( &sidlx_rmi_JimEchoServer__mutex )==EDEADLOCK) */
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

static struct sidlx_rmi_JimEchoServer__epv s_rem_epv__sidlx_rmi_jimechoserver;

static struct sidl_BaseClass__epv  s_rem_epv__sidl_baseclass;

static struct sidl_BaseInterface__epv  s_rem_epv__sidl_baseinterface;

static struct sidl_rmi_ServerInfo__epv  s_rem_epv__sidl_rmi_serverinfo;

static struct sidlx_rmi_SimpleServer__epv  s_rem_epv__sidlx_rmi_simpleserver;


/* REMOTE CAST: dynamic type casting for remote objects. */
static void* remote_sidlx_rmi_JimEchoServer__cast(
  struct sidlx_rmi_JimEchoServer__object* self,
  const char* name, sidl_BaseInterface* _ex)
{
  int
    cmp0,
    cmp1,
    cmp2;
  void* cast = NULL;
  *_ex = NULL; /* default to no exception */
  cmp0 = strcmp(name, "sidl.rmi.ServerInfo");
  if (!cmp0) {
    (*self->d_epv->f_addRef)(self, _ex); SIDL_CHECK(*_ex);
    cast = &((*self).d_sidlx_rmi_simpleserver.d_sidl_rmi_serverinfo);
    return cast;
  }
  else if (cmp0 < 0) {
    cmp1 = strcmp(name, "sidl.BaseInterface");
    if (!cmp1) {
      (*self->d_epv->f_addRef)(self, _ex); SIDL_CHECK(*_ex);
      cast = &((
        *self).d_sidlx_rmi_simpleserver.d_sidl_baseclass.d_sidl_baseinterface);
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
    cmp1 = strcmp(name, "sidlx.rmi.SimpleServer");
    if (!cmp1) {
      (*self->d_epv->f_addRef)(self, _ex); SIDL_CHECK(*_ex);
      cast = ((struct sidlx_rmi_SimpleServer__object*)self);
      return cast;
    }
    else if (cmp1 < 0) {
      cmp2 = strcmp(name, "sidlx.rmi.JimEchoServer");
      if (!cmp2) {
        (*self->d_epv->f_addRef)(self, _ex); SIDL_CHECK(*_ex);
        cast = ((struct sidlx_rmi_JimEchoServer__object*)self);
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
    cast =  (*func)(((struct 
      sidlx_rmi_JimEchoServer__remote*)self->d_data)->d_ih, _ex);
  }

  return cast;
  EXIT:
  return NULL;
}

/* REMOTE DELETE: call the remote destructor for the object. */
static void remote_sidlx_rmi_JimEchoServer__delete(
  struct sidlx_rmi_JimEchoServer__object* self,
  sidl_BaseInterface* _ex)
{
  *_ex = NULL;
  free((void*) self);
}

/* REMOTE GETURL: call the getURL function for the object. */
static char* remote_sidlx_rmi_JimEchoServer__getURL(
  struct sidlx_rmi_JimEchoServer__object* self, sidl_BaseInterface* _ex)
{
  struct sidl_rmi_InstanceHandle__object *conn = ((struct 
    sidlx_rmi_JimEchoServer__remote*)self->d_data)->d_ih;
  *_ex = NULL;
  if(conn != NULL) {
    return sidl_rmi_InstanceHandle_getObjectURL(conn, _ex);
  }
  return NULL;
}

/* REMOTE ADDREF: For internal babel use only! Remote addRef. */
static void remote_sidlx_rmi_JimEchoServer__raddRef(
  struct sidlx_rmi_JimEchoServer__object* self,sidl_BaseInterface* _ex)
{
  sidl_BaseException netex = NULL;
  /* initialize a new invocation */
  sidl_BaseInterface _throwaway = NULL;
  struct sidl_rmi_InstanceHandle__object *_conn = ((struct 
    sidlx_rmi_JimEchoServer__remote*)self->d_data)->d_ih;
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
remote_sidlx_rmi_JimEchoServer__isRemote(
    struct sidlx_rmi_JimEchoServer__object* self, 
    sidl_BaseInterface *_ex) {
  *_ex = NULL;
  return TRUE;
}

/* REMOTE METHOD STUB:_set_hooks */
static void
remote_sidlx_rmi_JimEchoServer__set_hooks(
  /* in */ struct sidlx_rmi_JimEchoServer__object* self ,
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
      sidlx_rmi_JimEchoServer__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "_set_hooks", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */
    sidl_rmi_Invocation_packBool( _inv, "on", on, _ex);SIDL_CHECK(*_ex);

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if(_be != NULL) {
      sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from sidlx.rmi.JimEchoServer._set_hooks.", &throwaway_exception);
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
static void remote_sidlx_rmi_JimEchoServer__exec(
  struct sidlx_rmi_JimEchoServer__object* self,const char* methodName,
  sidl_rmi_Call inArgs,
  sidl_rmi_Return outArgs,
  sidl_BaseInterface* _ex)
{
  *_ex = NULL;
}

/* REMOTE METHOD STUB:serviceRequest */
static void
remote_sidlx_rmi_JimEchoServer_serviceRequest(
  /* in */ struct sidlx_rmi_JimEchoServer__object* self ,
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
      sidlx_rmi_JimEchoServer__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "serviceRequest", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */
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
sidl_BaseException_addLine(_be, "Exception unserialized from sidlx.rmi.JimEchoServer.serviceRequest.", &throwaway_exception);
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

/* REMOTE METHOD STUB:isLocalObject */
static char*
remote_sidlx_rmi_JimEchoServer_isLocalObject(
  /* in */ struct sidlx_rmi_JimEchoServer__object* self ,
  /* in */ const char* url,
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
      sidlx_rmi_JimEchoServer__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "isLocalObject", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */
    sidl_rmi_Invocation_packString( _inv, "url", url, _ex);SIDL_CHECK(*_ex);

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if(_be != NULL) {
      sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from sidlx.rmi.JimEchoServer.isLocalObject.", &throwaway_exception);
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

/* REMOTE METHOD STUB:getExceptions */
static struct sidl_io_Serializable__array*
remote_sidlx_rmi_JimEchoServer_getExceptions(
  /* in */ struct sidlx_rmi_JimEchoServer__object* self ,
  /* out */ struct sidl_BaseInterface__object* *_ex)
{
  LANG_SPECIFIC_INIT();
  *_ex = NULL;
  {
    /* initialize a new invocation */
    sidl_BaseInterface _throwaway = NULL;
    sidl_BaseException _be = NULL;
    sidl_rmi_Response _rsvp = NULL;
    struct sidl_io_Serializable__array* _retval = 0;
    struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
      sidlx_rmi_JimEchoServer__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "getExceptions", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if(_be != NULL) {
      sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from sidlx.rmi.JimEchoServer.getExceptions.", &throwaway_exception);
      *_ex = (sidl_BaseInterface) sidl_BaseInterface__rmicast(_be,
        &throwaway_exception);
      goto EXIT;
    }

    /* extract return value */
    sidl_rmi_Response_unpackSerializableArray( _rsvp, "_retval", &_retval,0,0,
      FALSE, _ex);SIDL_CHECK(*_ex);

    /* unpack out and inout arguments */

    /* cleanup and return */
    EXIT:
    if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
    if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
    return _retval;
  }
}

/* REMOTE METHOD STUB:setMaxThreadPool */
static void
remote_sidlx_rmi_JimEchoServer_setMaxThreadPool(
  /* in */ struct sidlx_rmi_JimEchoServer__object* self ,
  /* in */ int32_t max,
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
      sidlx_rmi_JimEchoServer__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "setMaxThreadPool", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */
    sidl_rmi_Invocation_packInt( _inv, "max", max, _ex);SIDL_CHECK(*_ex);

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if(_be != NULL) {
      sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from sidlx.rmi.JimEchoServer.setMaxThreadPool.", &throwaway_exception);
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

/* REMOTE METHOD STUB:requestPort */
static sidl_bool
remote_sidlx_rmi_JimEchoServer_requestPort(
  /* in */ struct sidlx_rmi_JimEchoServer__object* self ,
  /* in */ int32_t port,
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
      sidlx_rmi_JimEchoServer__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "requestPort", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */
    sidl_rmi_Invocation_packInt( _inv, "port", port, _ex);SIDL_CHECK(*_ex);

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if(_be != NULL) {
      sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from sidlx.rmi.JimEchoServer.requestPort.", &throwaway_exception);
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

/* REMOTE METHOD STUB:requestPortInRange */
static sidl_bool
remote_sidlx_rmi_JimEchoServer_requestPortInRange(
  /* in */ struct sidlx_rmi_JimEchoServer__object* self ,
  /* in */ int32_t minport,
  /* in */ int32_t maxport,
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
      sidlx_rmi_JimEchoServer__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "requestPortInRange", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */
    sidl_rmi_Invocation_packInt( _inv, "minport", minport, _ex);SIDL_CHECK(
      *_ex);
    sidl_rmi_Invocation_packInt( _inv, "maxport", maxport, _ex);SIDL_CHECK(
      *_ex);

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if(_be != NULL) {
      sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from sidlx.rmi.JimEchoServer.requestPortInRange.", &throwaway_exception);
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

/* REMOTE METHOD STUB:getPort */
static int32_t
remote_sidlx_rmi_JimEchoServer_getPort(
  /* in */ struct sidlx_rmi_JimEchoServer__object* self ,
  /* out */ struct sidl_BaseInterface__object* *_ex)
{
  LANG_SPECIFIC_INIT();
  *_ex = NULL;
  {
    /* initialize a new invocation */
    sidl_BaseInterface _throwaway = NULL;
    sidl_BaseException _be = NULL;
    sidl_rmi_Response _rsvp = NULL;
    int32_t _retval = 0;
    struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
      sidlx_rmi_JimEchoServer__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "getPort", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if(_be != NULL) {
      sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from sidlx.rmi.JimEchoServer.getPort.", &throwaway_exception);
      *_ex = (sidl_BaseInterface) sidl_BaseInterface__rmicast(_be,
        &throwaway_exception);
      goto EXIT;
    }

    /* extract return value */
    sidl_rmi_Response_unpackInt( _rsvp, "_retval", &_retval, _ex);SIDL_CHECK(
      *_ex);

    /* unpack out and inout arguments */

    /* cleanup and return */
    EXIT:
    if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
    if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
    return _retval;
  }
}

/* REMOTE METHOD STUB:getServerName */
static char*
remote_sidlx_rmi_JimEchoServer_getServerName(
  /* in */ struct sidlx_rmi_JimEchoServer__object* self ,
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
      sidlx_rmi_JimEchoServer__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "getServerName", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if(_be != NULL) {
      sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from sidlx.rmi.JimEchoServer.getServerName.", &throwaway_exception);
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

/* REMOTE METHOD STUB:getServerURL */
static char*
remote_sidlx_rmi_JimEchoServer_getServerURL(
  /* in */ struct sidlx_rmi_JimEchoServer__object* self ,
  /* in */ const char* objID,
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
      sidlx_rmi_JimEchoServer__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "getServerURL", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */
    sidl_rmi_Invocation_packString( _inv, "objID", objID, _ex);SIDL_CHECK(*_ex);

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if(_be != NULL) {
      sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from sidlx.rmi.JimEchoServer.getServerURL.", &throwaway_exception);
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

/* REMOTE METHOD STUB:run */
static int64_t
remote_sidlx_rmi_JimEchoServer_run(
  /* in */ struct sidlx_rmi_JimEchoServer__object* self ,
  /* out */ struct sidl_BaseInterface__object* *_ex)
{
  LANG_SPECIFIC_INIT();
  *_ex = NULL;
  {
    /* initialize a new invocation */
    sidl_BaseInterface _throwaway = NULL;
    sidl_BaseException _be = NULL;
    sidl_rmi_Response _rsvp = NULL;
    int64_t _retval = 0;
    struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
      sidlx_rmi_JimEchoServer__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "run", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if(_be != NULL) {
      sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from sidlx.rmi.JimEchoServer.run.", &throwaway_exception);
      *_ex = (sidl_BaseInterface) sidl_BaseInterface__rmicast(_be,
        &throwaway_exception);
      goto EXIT;
    }

    /* extract return value */
    sidl_rmi_Response_unpackLong( _rsvp, "_retval", &_retval, _ex);SIDL_CHECK(
      *_ex);

    /* unpack out and inout arguments */

    /* cleanup and return */
    EXIT:
    if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
    if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
    return _retval;
  }
}

/* REMOTE METHOD STUB:shutdown */
static void
remote_sidlx_rmi_JimEchoServer_shutdown(
  /* in */ struct sidlx_rmi_JimEchoServer__object* self ,
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
      sidlx_rmi_JimEchoServer__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "shutdown", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if(_be != NULL) {
      sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from sidlx.rmi.JimEchoServer.shutdown.", &throwaway_exception);
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

/* REMOTE METHOD STUB:addRef */
static void
remote_sidlx_rmi_JimEchoServer_addRef(
  /* in */ struct sidlx_rmi_JimEchoServer__object* self ,
  /* out */ struct sidl_BaseInterface__object* *_ex)
{
  LANG_SPECIFIC_INIT();
  *_ex = NULL;
  {
    struct sidlx_rmi_JimEchoServer__remote* r_obj = (struct 
      sidlx_rmi_JimEchoServer__remote*)self->d_data;
    LOCK_STATIC_GLOBALS;
    r_obj->d_refcount++;
    UNLOCK_STATIC_GLOBALS;
  }
}

/* REMOTE METHOD STUB:deleteRef */
static void
remote_sidlx_rmi_JimEchoServer_deleteRef(
  /* in */ struct sidlx_rmi_JimEchoServer__object* self ,
  /* out */ struct sidl_BaseInterface__object* *_ex)
{
  LANG_SPECIFIC_INIT();
  *_ex = NULL;
  {
    struct sidlx_rmi_JimEchoServer__remote* r_obj = (struct 
      sidlx_rmi_JimEchoServer__remote*)self->d_data;
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
remote_sidlx_rmi_JimEchoServer_isSame(
  /* in */ struct sidlx_rmi_JimEchoServer__object* self ,
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
      sidlx_rmi_JimEchoServer__remote*)self->d_data)->d_ih;
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
sidl_BaseException_addLine(_be, "Exception unserialized from sidlx.rmi.JimEchoServer.isSame.", &throwaway_exception);
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
remote_sidlx_rmi_JimEchoServer_isType(
  /* in */ struct sidlx_rmi_JimEchoServer__object* self ,
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
      sidlx_rmi_JimEchoServer__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "isType", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */
    sidl_rmi_Invocation_packString( _inv, "name", name, _ex);SIDL_CHECK(*_ex);

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if(_be != NULL) {
      sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from sidlx.rmi.JimEchoServer.isType.", &throwaway_exception);
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
remote_sidlx_rmi_JimEchoServer_getClassInfo(
  /* in */ struct sidlx_rmi_JimEchoServer__object* self ,
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
      sidlx_rmi_JimEchoServer__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "getClassInfo", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if(_be != NULL) {
      sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from sidlx.rmi.JimEchoServer.getClassInfo.", &throwaway_exception);
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

/* REMOTE EPV: create remote entry point vectors (EPVs). */
static void sidlx_rmi_JimEchoServer__init_remote_epv(void)
{
  /* assert( HAVE_LOCKED_STATIC_GLOBALS ); */
  struct sidlx_rmi_JimEchoServer__epv* epv = 
    &s_rem_epv__sidlx_rmi_jimechoserver;
  struct sidl_BaseClass__epv*          e0  = &s_rem_epv__sidl_baseclass;
  struct sidl_BaseInterface__epv*      e1  = &s_rem_epv__sidl_baseinterface;
  struct sidl_rmi_ServerInfo__epv*     e2  = &s_rem_epv__sidl_rmi_serverinfo;
  struct sidlx_rmi_SimpleServer__epv*  e3  = &s_rem_epv__sidlx_rmi_simpleserver;

  epv->f__cast                   = remote_sidlx_rmi_JimEchoServer__cast;
  epv->f__delete                 = remote_sidlx_rmi_JimEchoServer__delete;
  epv->f__exec                   = remote_sidlx_rmi_JimEchoServer__exec;
  epv->f__getURL                 = remote_sidlx_rmi_JimEchoServer__getURL;
  epv->f__raddRef                = remote_sidlx_rmi_JimEchoServer__raddRef;
  epv->f__isRemote               = remote_sidlx_rmi_JimEchoServer__isRemote;
  epv->f__set_hooks              = remote_sidlx_rmi_JimEchoServer__set_hooks;
  epv->f__ctor                   = NULL;
  epv->f__ctor2                  = NULL;
  epv->f__dtor                   = NULL;
  epv->f_serviceRequest          = 
    remote_sidlx_rmi_JimEchoServer_serviceRequest;
  epv->f_isLocalObject           = remote_sidlx_rmi_JimEchoServer_isLocalObject;
  epv->f_getExceptions           = remote_sidlx_rmi_JimEchoServer_getExceptions;
  epv->f_setMaxThreadPool        = 
    remote_sidlx_rmi_JimEchoServer_setMaxThreadPool;
  epv->f_requestPort             = remote_sidlx_rmi_JimEchoServer_requestPort;
  epv->f_requestPortInRange      = 
    remote_sidlx_rmi_JimEchoServer_requestPortInRange;
  epv->f_getPort                 = remote_sidlx_rmi_JimEchoServer_getPort;
  epv->f_getServerName           = remote_sidlx_rmi_JimEchoServer_getServerName;
  epv->f_getServerURL            = remote_sidlx_rmi_JimEchoServer_getServerURL;
  epv->f_run                     = remote_sidlx_rmi_JimEchoServer_run;
  epv->f_shutdown                = remote_sidlx_rmi_JimEchoServer_shutdown;
  epv->f_addRef                  = remote_sidlx_rmi_JimEchoServer_addRef;
  epv->f_deleteRef               = remote_sidlx_rmi_JimEchoServer_deleteRef;
  epv->f_isSame                  = remote_sidlx_rmi_JimEchoServer_isSame;
  epv->f_isType                  = remote_sidlx_rmi_JimEchoServer_isType;
  epv->f_getClassInfo            = remote_sidlx_rmi_JimEchoServer_getClassInfo;

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

  e2->f__cast         = (void* (*)(void*,const char*,sidl_BaseInterface*)) 
    epv->f__cast;
  e2->f__delete       = (void (*)(void*,sidl_BaseInterface*)) epv->f__delete;
  e2->f__getURL       = (char* (*)(void*,sidl_BaseInterface*)) epv->f__getURL;
  e2->f__raddRef      = (void (*)(void*,sidl_BaseInterface*)) epv->f__raddRef;
  e2->f__isRemote     = (sidl_bool (*)(void*,sidl_BaseInterface*)) 
    epv->f__isRemote;
  e2->f__set_hooks    = (void (*)(void*,int32_t, sidl_BaseInterface*)) 
    epv->f__set_hooks;
  e2->f__exec         = (void (*)(void*,const char*,struct 
    sidl_rmi_Call__object*,struct sidl_rmi_Return__object*,struct 
    sidl_BaseInterface__object **)) epv->f__exec;
  e2->f_getServerURL  = (char* (*)(void*,const char*,struct 
    sidl_BaseInterface__object **)) epv->f_getServerURL;
  e2->f_isLocalObject = (char* (*)(void*,const char*,struct 
    sidl_BaseInterface__object **)) epv->f_isLocalObject;
  e2->f_getExceptions = (struct sidl_io_Serializable__array* (*)(void*,struct 
    sidl_BaseInterface__object **)) epv->f_getExceptions;
  e2->f_addRef        = (void (*)(void*,struct sidl_BaseInterface__object **)) 
    epv->f_addRef;
  e2->f_deleteRef     = (void (*)(void*,struct sidl_BaseInterface__object **)) 
    epv->f_deleteRef;
  e2->f_isSame        = (sidl_bool (*)(void*,struct sidl_BaseInterface__object*,
    struct sidl_BaseInterface__object **)) epv->f_isSame;
  e2->f_isType        = (sidl_bool (*)(void*,const char*,struct 
    sidl_BaseInterface__object **)) epv->f_isType;
  e2->f_getClassInfo  = (struct sidl_ClassInfo__object* (*)(void*,struct 
    sidl_BaseInterface__object **)) epv->f_getClassInfo;

  e3->f__cast              = (void* (*)(struct sidlx_rmi_SimpleServer__object*,
    const char*,sidl_BaseInterface*)) epv->f__cast;
  e3->f__delete            = (void (*)(struct sidlx_rmi_SimpleServer__object*,
    sidl_BaseInterface*)) epv->f__delete;
  e3->f__getURL            = (char* (*)(struct sidlx_rmi_SimpleServer__object*,
    sidl_BaseInterface*)) epv->f__getURL;
  e3->f__raddRef           = (void (*)(struct sidlx_rmi_SimpleServer__object*,
    sidl_BaseInterface*)) epv->f__raddRef;
  e3->f__isRemote          = (sidl_bool (*)(struct 
    sidlx_rmi_SimpleServer__object*,sidl_BaseInterface*)) epv->f__isRemote;
  e3->f__set_hooks         = (void (*)(struct sidlx_rmi_SimpleServer__object*,
    int32_t, sidl_BaseInterface*)) epv->f__set_hooks;
  e3->f__exec              = (void (*)(struct sidlx_rmi_SimpleServer__object*,
    const char*,struct sidl_rmi_Call__object*,struct sidl_rmi_Return__object*,
    struct sidl_BaseInterface__object **)) epv->f__exec;
  e3->f_setMaxThreadPool   = (void (*)(struct sidlx_rmi_SimpleServer__object*,
    int32_t,struct sidl_BaseInterface__object **)) epv->f_setMaxThreadPool;
  e3->f_requestPort        = (sidl_bool (*)(struct 
    sidlx_rmi_SimpleServer__object*,int32_t,struct sidl_BaseInterface__object 
    **)) epv->f_requestPort;
  e3->f_requestPortInRange = (sidl_bool (*)(struct 
    sidlx_rmi_SimpleServer__object*,int32_t,int32_t,struct 
    sidl_BaseInterface__object **)) epv->f_requestPortInRange;
  e3->f_getPort            = (int32_t (*)(struct 
    sidlx_rmi_SimpleServer__object*,struct sidl_BaseInterface__object **)) 
    epv->f_getPort;
  e3->f_getServerName      = (char* (*)(struct sidlx_rmi_SimpleServer__object*,
    struct sidl_BaseInterface__object **)) epv->f_getServerName;
  e3->f_getServerURL       = (char* (*)(struct sidlx_rmi_SimpleServer__object*,
    const char*,struct sidl_BaseInterface__object **)) epv->f_getServerURL;
  e3->f_run                = (int64_t (*)(struct 
    sidlx_rmi_SimpleServer__object*,struct sidl_BaseInterface__object **)) 
    epv->f_run;
  e3->f_shutdown           = (void (*)(struct sidlx_rmi_SimpleServer__object*,
    struct sidl_BaseInterface__object **)) epv->f_shutdown;
  e3->f_serviceRequest     = (void (*)(struct sidlx_rmi_SimpleServer__object*,
    struct sidlx_rmi_Socket__object*,struct sidl_BaseInterface__object **)) 
    epv->f_serviceRequest;
  e3->f_getExceptions      = (struct sidl_io_Serializable__array* (*)(struct 
    sidlx_rmi_SimpleServer__object*,struct sidl_BaseInterface__object **)) 
    epv->f_getExceptions;
  e3->f_addRef             = (void (*)(struct sidlx_rmi_SimpleServer__object*,
    struct sidl_BaseInterface__object **)) epv->f_addRef;
  e3->f_deleteRef          = (void (*)(struct sidlx_rmi_SimpleServer__object*,
    struct sidl_BaseInterface__object **)) epv->f_deleteRef;
  e3->f_isSame             = (sidl_bool (*)(struct 
    sidlx_rmi_SimpleServer__object*,struct sidl_BaseInterface__object*,struct 
    sidl_BaseInterface__object **)) epv->f_isSame;
  e3->f_isType             = (sidl_bool (*)(struct 
    sidlx_rmi_SimpleServer__object*,const char*,struct 
    sidl_BaseInterface__object **)) epv->f_isType;
  e3->f_getClassInfo       = (struct sidl_ClassInfo__object* (*)(struct 
    sidlx_rmi_SimpleServer__object*,struct sidl_BaseInterface__object **)) 
    epv->f_getClassInfo;
  e3->f_isLocalObject      = (char* (*)(struct sidlx_rmi_SimpleServer__object*,
    const char*,struct sidl_BaseInterface__object **)) epv->f_isLocalObject;

  s_remote_initialized = 1;
}

/* Create an instance that connects to an existing remote object. */
static struct sidlx_rmi_JimEchoServer__object*
sidlx_rmi_JimEchoServer__remoteConnect(const char *url, sidl_bool ar, 
  sidl_BaseInterface *_ex)
{
  struct sidlx_rmi_JimEchoServer__object* self;

  struct sidlx_rmi_JimEchoServer__object* s0;
  struct sidlx_rmi_SimpleServer__object* s1;
  struct sidl_BaseClass__object* s2;

  struct sidlx_rmi_JimEchoServer__remote* r_obj;
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
    return sidlx_rmi_JimEchoServer__rmicast(bi,_ex);SIDL_CHECK(*_ex);
  }
  instance = sidl_rmi_ProtocolFactory_connectInstance(url, ar, _ex ); 
    SIDL_CHECK(*_ex);
  if ( instance == NULL) { return NULL; }
  self =
    (struct sidlx_rmi_JimEchoServer__object*) malloc(
      sizeof(struct sidlx_rmi_JimEchoServer__object));

  r_obj =
    (struct sidlx_rmi_JimEchoServer__remote*) malloc(
      sizeof(struct sidlx_rmi_JimEchoServer__remote));

  r_obj->d_refcount = 1;
  r_obj->d_ih = instance;
  s0 =                                   self;
  s1 =                                   &s0->d_sidlx_rmi_simpleserver;
  s2 =                                   &s1->d_sidl_baseclass;

  LOCK_STATIC_GLOBALS;
  if (!s_remote_initialized) {
    sidlx_rmi_JimEchoServer__init_remote_epv();
  }
  UNLOCK_STATIC_GLOBALS;

  s2->d_sidl_baseinterface.d_epv    = &s_rem_epv__sidl_baseinterface;
  s2->d_sidl_baseinterface.d_object = (void*) self;

  s2->d_data = (void*) r_obj;
  s2->d_epv  = &s_rem_epv__sidl_baseclass;

  s1->d_sidl_rmi_serverinfo.d_epv    = &s_rem_epv__sidl_rmi_serverinfo;
  s1->d_sidl_rmi_serverinfo.d_object = (void*) self;

  s1->d_data = (void*) r_obj;
  s1->d_epv  = &s_rem_epv__sidlx_rmi_simpleserver;

  s0->d_data = (void*) r_obj;
  s0->d_epv  = &s_rem_epv__sidlx_rmi_jimechoserver;

  self->d_data = (void*) r_obj;

  return self;
  EXIT:
  return NULL;
}
/* Create an instance that uses an already existing  */
/* InstanceHandle to connect to an existing remote object. */
static struct sidlx_rmi_JimEchoServer__object*
sidlx_rmi_JimEchoServer__IHConnect(sidl_rmi_InstanceHandle instance, 
  sidl_BaseInterface *_ex)
{
  struct sidlx_rmi_JimEchoServer__object* self;

  struct sidlx_rmi_JimEchoServer__object* s0;
  struct sidlx_rmi_SimpleServer__object* s1;
  struct sidl_BaseClass__object* s2;

  struct sidlx_rmi_JimEchoServer__remote* r_obj;
  self =
    (struct sidlx_rmi_JimEchoServer__object*) malloc(
      sizeof(struct sidlx_rmi_JimEchoServer__object));

  r_obj =
    (struct sidlx_rmi_JimEchoServer__remote*) malloc(
      sizeof(struct sidlx_rmi_JimEchoServer__remote));

  r_obj->d_refcount = 1;
  r_obj->d_ih = instance;
  s0 =                                   self;
  s1 =                                   &s0->d_sidlx_rmi_simpleserver;
  s2 =                                   &s1->d_sidl_baseclass;

  LOCK_STATIC_GLOBALS;
  if (!s_remote_initialized) {
    sidlx_rmi_JimEchoServer__init_remote_epv();
  }
  UNLOCK_STATIC_GLOBALS;

  s2->d_sidl_baseinterface.d_epv    = &s_rem_epv__sidl_baseinterface;
  s2->d_sidl_baseinterface.d_object = (void*) self;

  s2->d_data = (void*) r_obj;
  s2->d_epv  = &s_rem_epv__sidl_baseclass;

  s1->d_sidl_rmi_serverinfo.d_epv    = &s_rem_epv__sidl_rmi_serverinfo;
  s1->d_sidl_rmi_serverinfo.d_object = (void*) self;

  s1->d_data = (void*) r_obj;
  s1->d_epv  = &s_rem_epv__sidlx_rmi_simpleserver;

  s0->d_data = (void*) r_obj;
  s0->d_epv  = &s_rem_epv__sidlx_rmi_jimechoserver;

  self->d_data = (void*) r_obj;

  sidl_rmi_InstanceHandle_addRef(instance,_ex);SIDL_CHECK(*_ex);
  return self;
  EXIT:
  return NULL;
}
/* REMOTE: generate remote instance given URL string. */
static struct sidlx_rmi_JimEchoServer__object*
sidlx_rmi_JimEchoServer__remoteCreate(const char *url, sidl_BaseInterface *_ex)
{
  sidl_BaseInterface _throwaway_exception = NULL;
  struct sidlx_rmi_JimEchoServer__object* self;

  struct sidlx_rmi_JimEchoServer__object* s0;
  struct sidlx_rmi_SimpleServer__object* s1;
  struct sidl_BaseClass__object* s2;

  struct sidlx_rmi_JimEchoServer__remote* r_obj;
  sidl_rmi_InstanceHandle instance = sidl_rmi_ProtocolFactory_createInstance(
    url, "sidlx.rmi.JimEchoServer", _ex ); SIDL_CHECK(*_ex);
  if ( instance == NULL) { return NULL; }
  self =
    (struct sidlx_rmi_JimEchoServer__object*) malloc(
      sizeof(struct sidlx_rmi_JimEchoServer__object));

  r_obj =
    (struct sidlx_rmi_JimEchoServer__remote*) malloc(
      sizeof(struct sidlx_rmi_JimEchoServer__remote));

  r_obj->d_refcount = 1;
  r_obj->d_ih = instance;
  s0 =                                   self;
  s1 =                                   &s0->d_sidlx_rmi_simpleserver;
  s2 =                                   &s1->d_sidl_baseclass;

  LOCK_STATIC_GLOBALS;
  if (!s_remote_initialized) {
    sidlx_rmi_JimEchoServer__init_remote_epv();
  }
  UNLOCK_STATIC_GLOBALS;

  s2->d_sidl_baseinterface.d_epv    = &s_rem_epv__sidl_baseinterface;
  s2->d_sidl_baseinterface.d_object = (void*) self;

  s2->d_data = (void*) r_obj;
  s2->d_epv  = &s_rem_epv__sidl_baseclass;

  s1->d_sidl_rmi_serverinfo.d_epv    = &s_rem_epv__sidl_rmi_serverinfo;
  s1->d_sidl_rmi_serverinfo.d_object = (void*) self;

  s1->d_data = (void*) r_obj;
  s1->d_epv  = &s_rem_epv__sidlx_rmi_simpleserver;

  s0->d_data = (void*) r_obj;
  s0->d_epv  = &s_rem_epv__sidlx_rmi_jimechoserver;

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

struct sidlx_rmi_JimEchoServer__object*
sidlx_rmi_JimEchoServer__rmicast(
  void* obj,
  sidl_BaseInterface* _ex)
{
  struct sidlx_rmi_JimEchoServer__object* cast = NULL;

  *_ex = NULL;
  if(!connect_loaded) {
    sidl_rmi_ConnectRegistry_registerConnect("sidlx.rmi.JimEchoServer", (
      void*)sidlx_rmi_JimEchoServer__IHConnect, _ex);
    connect_loaded = 1;
  }
  if (obj != NULL) {
    struct sidl_BaseInterface__object* base = (struct 
      sidl_BaseInterface__object*) obj;
    cast = (struct sidlx_rmi_JimEchoServer__object*) (*base->d_epv->f__cast)(
      base->d_object,
      "sidlx.rmi.JimEchoServer", _ex); SIDL_CHECK(*_ex);
  }

  return cast;
  EXIT:
  return NULL;
}

/*
 * RMI connector function for the class.
 */

struct sidlx_rmi_JimEchoServer__object*
sidlx_rmi_JimEchoServer__connectI(const char* url, sidl_bool ar, struct 
  sidl_BaseInterface__object **_ex)
{
  return sidlx_rmi_JimEchoServer__remoteConnect(url, ar, _ex);
}

