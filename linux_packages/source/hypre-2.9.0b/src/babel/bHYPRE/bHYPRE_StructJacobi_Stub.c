/*
 * File:          bHYPRE_StructJacobi_Stub.c
 * Symbol:        bHYPRE.StructJacobi-v1.0.0
 * Symbol Type:   class
 * Babel Version: 1.0.4
 * Description:   Client-side glue code for bHYPRE.StructJacobi
 * 
 * WARNING: Automatically generated; changes will be lost
 * 
 */

#include "bHYPRE_StructJacobi.h"
#include "bHYPRE_StructJacobi_IOR.h"
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

static const struct bHYPRE_StructJacobi__external *_externals = NULL;
/*
 * Lookup the symbol to get the IOR functions.
 */

static const struct bHYPRE_StructJacobi__external* _loadIOR(void)
/*
 * Return pointer to internal IOR functions.
 */

{
#ifdef SIDL_STATIC_LIBRARY
  _externals = bHYPRE_StructJacobi__externals();
#else
  _externals = (struct bHYPRE_StructJacobi__external*)sidl_dynamicLoadIOR(
    "bHYPRE.StructJacobi","bHYPRE_StructJacobi__externals") ;
  sidl_checkIORVersion("bHYPRE.StructJacobi", _externals->d_ior_major_version, 
    _externals->d_ior_minor_version, 1, 0);
#endif
  return _externals;
}

#define _getExternals() (_externals ? _externals : _loadIOR())

/*
 * Hold pointer to static entry point vector
 */

static const struct bHYPRE_StructJacobi__sepv *_sepv = NULL;
/*
 * Return pointer to static functions.
 */

#define _getSEPV() (_sepv ? _sepv : (_sepv = (*(_getExternals()->getStaticEPV))()))
/*
 * Reset point to static functions.
 */

#define _resetSEPV() (_sepv = (*(_getExternals()->getStaticEPV))())

/*
 * Constructor function for the class.
 */

bHYPRE_StructJacobi
bHYPRE_StructJacobi__create(sidl_BaseInterface* _ex)
{
  return (*(_getExternals()->createObject))(NULL,_ex);
}

/**
 * Wraps up the private data struct pointer (struct bHYPRE_StructJacobi__data) passed in rather than running the constructor.
 */
bHYPRE_StructJacobi
bHYPRE_StructJacobi__wrapObj(void* data, sidl_BaseInterface* _ex)
{
  return (*(_getExternals()->createObject))(data,_ex);
}

static bHYPRE_StructJacobi bHYPRE_StructJacobi__remoteCreate(const char* url, 
  sidl_BaseInterface *_ex);
/*
 * RMI constructor function for the class.
 */

bHYPRE_StructJacobi
bHYPRE_StructJacobi__createRemote(const char* url, sidl_BaseInterface *_ex)
{
  return bHYPRE_StructJacobi__remoteCreate(url, _ex);
}

static struct bHYPRE_StructJacobi__object* bHYPRE_StructJacobi__remoteConnect(
  const char* url, sidl_bool ar, sidl_BaseInterface *_ex);
static struct bHYPRE_StructJacobi__object* bHYPRE_StructJacobi__IHConnect(
  struct sidl_rmi_InstanceHandle__object* instance, sidl_BaseInterface *_ex);
/*
 * RMI connector function for the class.
 */

bHYPRE_StructJacobi
bHYPRE_StructJacobi__connect(const char* url, sidl_BaseInterface *_ex)
{
  return bHYPRE_StructJacobi__remoteConnect(url, TRUE, _ex);
}

/*
 *  This function is the preferred way to create a Struct Jacobi solver. 
 */

bHYPRE_StructJacobi
bHYPRE_StructJacobi_Create(
  /* in */ bHYPRE_MPICommunicator mpi_comm,
  /* in */ bHYPRE_StructMatrix A,
  /* out */ sidl_BaseInterface *_ex)
{
  bHYPRE_StructJacobi _result;
  _result = (_getSEPV()->f_Create)(
    mpi_comm,
    A,
    _ex);
  return _result;
}

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
bHYPRE_StructJacobi_addRef(
  /* in */ bHYPRE_StructJacobi self,
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
bHYPRE_StructJacobi_deleteRef(
  /* in */ bHYPRE_StructJacobi self,
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
bHYPRE_StructJacobi_isSame(
  /* in */ bHYPRE_StructJacobi self,
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
bHYPRE_StructJacobi_isType(
  /* in */ bHYPRE_StructJacobi self,
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
bHYPRE_StructJacobi_getClassInfo(
  /* in */ bHYPRE_StructJacobi self,
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
 * Set the operator for the linear system being solved.
 * DEPRECATED.  use Create
 */

SIDL_C_INLINE_DEFN
int32_t
bHYPRE_StructJacobi_SetOperator(
  /* in */ bHYPRE_StructJacobi self,
  /* in */ bHYPRE_Operator A,
  /* out */ sidl_BaseInterface *_ex)
#if SIDL_C_INLINE_REPEAT_DEFN
{
  int32_t _result;
  _result = (*self->d_epv->f_SetOperator)(
    self,
    A,
    _ex);
  return _result;
}
#else /* ISO C 1999 inline semantics */
;
#endif /* SIDL_C_INLINE_REPEAT_DEFN */

/*
 * (Optional) Set the convergence tolerance.
 * DEPRECATED.  use SetDoubleParameter
 */

SIDL_C_INLINE_DEFN
int32_t
bHYPRE_StructJacobi_SetTolerance(
  /* in */ bHYPRE_StructJacobi self,
  /* in */ double tolerance,
  /* out */ sidl_BaseInterface *_ex)
#if SIDL_C_INLINE_REPEAT_DEFN
{
  int32_t _result;
  _result = (*self->d_epv->f_SetTolerance)(
    self,
    tolerance,
    _ex);
  return _result;
}
#else /* ISO C 1999 inline semantics */
;
#endif /* SIDL_C_INLINE_REPEAT_DEFN */

/*
 * (Optional) Set maximum number of iterations.
 * DEPRECATED   use SetIntParameter
 */

SIDL_C_INLINE_DEFN
int32_t
bHYPRE_StructJacobi_SetMaxIterations(
  /* in */ bHYPRE_StructJacobi self,
  /* in */ int32_t max_iterations,
  /* out */ sidl_BaseInterface *_ex)
#if SIDL_C_INLINE_REPEAT_DEFN
{
  int32_t _result;
  _result = (*self->d_epv->f_SetMaxIterations)(
    self,
    max_iterations,
    _ex);
  return _result;
}
#else /* ISO C 1999 inline semantics */
;
#endif /* SIDL_C_INLINE_REPEAT_DEFN */

/*
 * (Optional) Set the {\it logging level}, specifying the degree
 * of additional informational data to be accumulated.  Does
 * nothing by default (level = 0).  Other levels (if any) are
 * implementation-specific.  Must be called before {\tt Setup}
 * and {\tt Apply}.
 * DEPRECATED   use SetIntParameter
 */

SIDL_C_INLINE_DEFN
int32_t
bHYPRE_StructJacobi_SetLogging(
  /* in */ bHYPRE_StructJacobi self,
  /* in */ int32_t level,
  /* out */ sidl_BaseInterface *_ex)
#if SIDL_C_INLINE_REPEAT_DEFN
{
  int32_t _result;
  _result = (*self->d_epv->f_SetLogging)(
    self,
    level,
    _ex);
  return _result;
}
#else /* ISO C 1999 inline semantics */
;
#endif /* SIDL_C_INLINE_REPEAT_DEFN */

/*
 * (Optional) Set the {\it print level}, specifying the degree
 * of informational data to be printed either to the screen or
 * to a file.  Does nothing by default (level=0).  Other levels
 * (if any) are implementation-specific.  Must be called before
 * {\tt Setup} and {\tt Apply}.
 * DEPRECATED   use SetIntParameter
 */

SIDL_C_INLINE_DEFN
int32_t
bHYPRE_StructJacobi_SetPrintLevel(
  /* in */ bHYPRE_StructJacobi self,
  /* in */ int32_t level,
  /* out */ sidl_BaseInterface *_ex)
#if SIDL_C_INLINE_REPEAT_DEFN
{
  int32_t _result;
  _result = (*self->d_epv->f_SetPrintLevel)(
    self,
    level,
    _ex);
  return _result;
}
#else /* ISO C 1999 inline semantics */
;
#endif /* SIDL_C_INLINE_REPEAT_DEFN */

/*
 * (Optional) Return the number of iterations taken.
 */

SIDL_C_INLINE_DEFN
int32_t
bHYPRE_StructJacobi_GetNumIterations(
  /* in */ bHYPRE_StructJacobi self,
  /* out */ int32_t* num_iterations,
  /* out */ sidl_BaseInterface *_ex)
#if SIDL_C_INLINE_REPEAT_DEFN
{
  int32_t _result;
  _result = (*self->d_epv->f_GetNumIterations)(
    self,
    num_iterations,
    _ex);
  return _result;
}
#else /* ISO C 1999 inline semantics */
;
#endif /* SIDL_C_INLINE_REPEAT_DEFN */

/*
 * (Optional) Return the norm of the relative residual.
 */

SIDL_C_INLINE_DEFN
int32_t
bHYPRE_StructJacobi_GetRelResidualNorm(
  /* in */ bHYPRE_StructJacobi self,
  /* out */ double* norm,
  /* out */ sidl_BaseInterface *_ex)
#if SIDL_C_INLINE_REPEAT_DEFN
{
  int32_t _result;
  _result = (*self->d_epv->f_GetRelResidualNorm)(
    self,
    norm,
    _ex);
  return _result;
}
#else /* ISO C 1999 inline semantics */
;
#endif /* SIDL_C_INLINE_REPEAT_DEFN */

/*
 * Set the MPI Communicator.
 * DEPRECATED, use Create:
 */

SIDL_C_INLINE_DEFN
int32_t
bHYPRE_StructJacobi_SetCommunicator(
  /* in */ bHYPRE_StructJacobi self,
  /* in */ bHYPRE_MPICommunicator mpi_comm,
  /* out */ sidl_BaseInterface *_ex)
#if SIDL_C_INLINE_REPEAT_DEFN
{
  int32_t _result;
  _result = (*self->d_epv->f_SetCommunicator)(
    self,
    mpi_comm,
    _ex);
  return _result;
}
#else /* ISO C 1999 inline semantics */
;
#endif /* SIDL_C_INLINE_REPEAT_DEFN */

/*
 * The Destroy function doesn't necessarily destroy anything.
 * It is just another name for deleteRef.  Thus it decrements the
 * object's reference count.  The Babel memory management system will
 * destroy the object if the reference count goes to zero.
 */

SIDL_C_INLINE_DEFN
void
bHYPRE_StructJacobi_Destroy(
  /* in */ bHYPRE_StructJacobi self,
  /* out */ sidl_BaseInterface *_ex)
#if SIDL_C_INLINE_REPEAT_DEFN
{
  (*self->d_epv->f_Destroy)(
    self,
    _ex);
}
#else /* ISO C 1999 inline semantics */
;
#endif /* SIDL_C_INLINE_REPEAT_DEFN */

/*
 * Set the int parameter associated with {\tt name}.
 */

SIDL_C_INLINE_DEFN
int32_t
bHYPRE_StructJacobi_SetIntParameter(
  /* in */ bHYPRE_StructJacobi self,
  /* in */ const char* name,
  /* in */ int32_t value,
  /* out */ sidl_BaseInterface *_ex)
#if SIDL_C_INLINE_REPEAT_DEFN
{
  int32_t _result;
  _result = (*self->d_epv->f_SetIntParameter)(
    self,
    name,
    value,
    _ex);
  return _result;
}
#else /* ISO C 1999 inline semantics */
;
#endif /* SIDL_C_INLINE_REPEAT_DEFN */

/*
 * Set the double parameter associated with {\tt name}.
 */

SIDL_C_INLINE_DEFN
int32_t
bHYPRE_StructJacobi_SetDoubleParameter(
  /* in */ bHYPRE_StructJacobi self,
  /* in */ const char* name,
  /* in */ double value,
  /* out */ sidl_BaseInterface *_ex)
#if SIDL_C_INLINE_REPEAT_DEFN
{
  int32_t _result;
  _result = (*self->d_epv->f_SetDoubleParameter)(
    self,
    name,
    value,
    _ex);
  return _result;
}
#else /* ISO C 1999 inline semantics */
;
#endif /* SIDL_C_INLINE_REPEAT_DEFN */

/*
 * Set the string parameter associated with {\tt name}.
 */

SIDL_C_INLINE_DEFN
int32_t
bHYPRE_StructJacobi_SetStringParameter(
  /* in */ bHYPRE_StructJacobi self,
  /* in */ const char* name,
  /* in */ const char* value,
  /* out */ sidl_BaseInterface *_ex)
#if SIDL_C_INLINE_REPEAT_DEFN
{
  int32_t _result;
  _result = (*self->d_epv->f_SetStringParameter)(
    self,
    name,
    value,
    _ex);
  return _result;
}
#else /* ISO C 1999 inline semantics */
;
#endif /* SIDL_C_INLINE_REPEAT_DEFN */

/*
 * Set the int 1-D array parameter associated with {\tt name}.
 */

SIDL_C_INLINE_DEFN
int32_t
bHYPRE_StructJacobi_SetIntArray1Parameter(
  /* in */ bHYPRE_StructJacobi self,
  /* in */ const char* name,
  /* in rarray[nvalues] */ int32_t* value,
  /* in */ int32_t nvalues,
  /* out */ sidl_BaseInterface *_ex)
#if SIDL_C_INLINE_REPEAT_DEFN
{
  int32_t _result;
  int32_t value_lower[1], value_upper[1], value_stride[1]; 
  struct sidl_int__array value_real;
  struct sidl_int__array*value_tmp = &value_real;
  value_upper[0] = nvalues-1;
  sidl_int__array_init(value, value_tmp, 1, value_lower, value_upper, 
    value_stride);
  _result = (*self->d_epv->f_SetIntArray1Parameter)(
    self,
    name,
    value_tmp,
    _ex);
#ifdef SIDL_DEBUG_REFCOUNT
  sidl__array_deleteRef((struct sidl__array*)value_tmp);
#endif /* SIDL_DEBUG_REFCOUNT */
  return _result;
}
#else /* ISO C 1999 inline semantics */
;
#endif /* SIDL_C_INLINE_REPEAT_DEFN */

/*
 * Set the int 2-D array parameter associated with {\tt name}.
 */

SIDL_C_INLINE_DEFN
int32_t
bHYPRE_StructJacobi_SetIntArray2Parameter(
  /* in */ bHYPRE_StructJacobi self,
  /* in */ const char* name,
  /* in array<int,2,column-major> */ struct sidl_int__array* value,
  /* out */ sidl_BaseInterface *_ex)
#if SIDL_C_INLINE_REPEAT_DEFN
{
  int32_t _result;
  _result = (*self->d_epv->f_SetIntArray2Parameter)(
    self,
    name,
    value,
    _ex);
  return _result;
}
#else /* ISO C 1999 inline semantics */
;
#endif /* SIDL_C_INLINE_REPEAT_DEFN */

/*
 * Set the double 1-D array parameter associated with {\tt name}.
 */

SIDL_C_INLINE_DEFN
int32_t
bHYPRE_StructJacobi_SetDoubleArray1Parameter(
  /* in */ bHYPRE_StructJacobi self,
  /* in */ const char* name,
  /* in rarray[nvalues] */ double* value,
  /* in */ int32_t nvalues,
  /* out */ sidl_BaseInterface *_ex)
#if SIDL_C_INLINE_REPEAT_DEFN
{
  int32_t _result;
  int32_t value_lower[1], value_upper[1], value_stride[1]; 
  struct sidl_double__array value_real;
  struct sidl_double__array*value_tmp = &value_real;
  value_upper[0] = nvalues-1;
  sidl_double__array_init(value, value_tmp, 1, value_lower, value_upper, 
    value_stride);
  _result = (*self->d_epv->f_SetDoubleArray1Parameter)(
    self,
    name,
    value_tmp,
    _ex);
#ifdef SIDL_DEBUG_REFCOUNT
  sidl__array_deleteRef((struct sidl__array*)value_tmp);
#endif /* SIDL_DEBUG_REFCOUNT */
  return _result;
}
#else /* ISO C 1999 inline semantics */
;
#endif /* SIDL_C_INLINE_REPEAT_DEFN */

/*
 * Set the double 2-D array parameter associated with {\tt name}.
 */

SIDL_C_INLINE_DEFN
int32_t
bHYPRE_StructJacobi_SetDoubleArray2Parameter(
  /* in */ bHYPRE_StructJacobi self,
  /* in */ const char* name,
  /* in array<double,2,column-major> */ struct sidl_double__array* value,
  /* out */ sidl_BaseInterface *_ex)
#if SIDL_C_INLINE_REPEAT_DEFN
{
  int32_t _result;
  _result = (*self->d_epv->f_SetDoubleArray2Parameter)(
    self,
    name,
    value,
    _ex);
  return _result;
}
#else /* ISO C 1999 inline semantics */
;
#endif /* SIDL_C_INLINE_REPEAT_DEFN */

/*
 * Set the int parameter associated with {\tt name}.
 */

SIDL_C_INLINE_DEFN
int32_t
bHYPRE_StructJacobi_GetIntValue(
  /* in */ bHYPRE_StructJacobi self,
  /* in */ const char* name,
  /* out */ int32_t* value,
  /* out */ sidl_BaseInterface *_ex)
#if SIDL_C_INLINE_REPEAT_DEFN
{
  int32_t _result;
  _result = (*self->d_epv->f_GetIntValue)(
    self,
    name,
    value,
    _ex);
  return _result;
}
#else /* ISO C 1999 inline semantics */
;
#endif /* SIDL_C_INLINE_REPEAT_DEFN */

/*
 * Get the double parameter associated with {\tt name}.
 */

SIDL_C_INLINE_DEFN
int32_t
bHYPRE_StructJacobi_GetDoubleValue(
  /* in */ bHYPRE_StructJacobi self,
  /* in */ const char* name,
  /* out */ double* value,
  /* out */ sidl_BaseInterface *_ex)
#if SIDL_C_INLINE_REPEAT_DEFN
{
  int32_t _result;
  _result = (*self->d_epv->f_GetDoubleValue)(
    self,
    name,
    value,
    _ex);
  return _result;
}
#else /* ISO C 1999 inline semantics */
;
#endif /* SIDL_C_INLINE_REPEAT_DEFN */

/*
 * (Optional) Do any preprocessing that may be necessary in
 * order to execute {\tt Apply}.
 */

SIDL_C_INLINE_DEFN
int32_t
bHYPRE_StructJacobi_Setup(
  /* in */ bHYPRE_StructJacobi self,
  /* in */ bHYPRE_Vector b,
  /* in */ bHYPRE_Vector x,
  /* out */ sidl_BaseInterface *_ex)
#if SIDL_C_INLINE_REPEAT_DEFN
{
  int32_t _result;
  _result = (*self->d_epv->f_Setup)(
    self,
    b,
    x,
    _ex);
  return _result;
}
#else /* ISO C 1999 inline semantics */
;
#endif /* SIDL_C_INLINE_REPEAT_DEFN */

/*
 * Apply the operator to {\tt b}, returning {\tt x}.
 */

SIDL_C_INLINE_DEFN
int32_t
bHYPRE_StructJacobi_Apply(
  /* in */ bHYPRE_StructJacobi self,
  /* in */ bHYPRE_Vector b,
  /* inout */ bHYPRE_Vector* x,
  /* out */ sidl_BaseInterface *_ex)
#if SIDL_C_INLINE_REPEAT_DEFN
{
  int32_t _result;
  _result = (*self->d_epv->f_Apply)(
    self,
    b,
    x,
    _ex);
  return _result;
}
#else /* ISO C 1999 inline semantics */
;
#endif /* SIDL_C_INLINE_REPEAT_DEFN */

/*
 * Apply the adjoint of the operator to {\tt b}, returning {\tt x}.
 */

SIDL_C_INLINE_DEFN
int32_t
bHYPRE_StructJacobi_ApplyAdjoint(
  /* in */ bHYPRE_StructJacobi self,
  /* in */ bHYPRE_Vector b,
  /* inout */ bHYPRE_Vector* x,
  /* out */ sidl_BaseInterface *_ex)
#if SIDL_C_INLINE_REPEAT_DEFN
{
  int32_t _result;
  _result = (*self->d_epv->f_ApplyAdjoint)(
    self,
    b,
    x,
    _ex);
  return _result;
}
#else /* ISO C 1999 inline semantics */
;
#endif /* SIDL_C_INLINE_REPEAT_DEFN */

/*
 * Cast method for interface and class type conversions.
 */

bHYPRE_StructJacobi
bHYPRE_StructJacobi__cast(
  void* obj,
  sidl_BaseInterface* _ex)
{
  bHYPRE_StructJacobi cast = NULL;

  if(!connect_loaded) {
    connect_loaded = 1;
    sidl_rmi_ConnectRegistry_registerConnect("bHYPRE.StructJacobi", (
      void*)bHYPRE_StructJacobi__IHConnect,_ex);SIDL_CHECK(*_ex);
  }
  if (obj != NULL) {
    sidl_BaseInterface base = (sidl_BaseInterface) obj;
    cast = (bHYPRE_StructJacobi) (*base->d_epv->f__cast)(
      base->d_object,
      "bHYPRE.StructJacobi", _ex); SIDL_CHECK(*_ex);
  }

  EXIT:
  return cast;
}

/*
 * String cast method for interface and class type conversions.
 */

void*
bHYPRE_StructJacobi__cast2(
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
bHYPRE_StructJacobi__exec(
  /* in */ bHYPRE_StructJacobi self,
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
bHYPRE_StructJacobi__getURL(
  /* in */ bHYPRE_StructJacobi self,
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
bHYPRE_StructJacobi__raddRef(
  /* in */ bHYPRE_StructJacobi self,
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
 * Method to enable/disable static hooks execution.
 */

void
bHYPRE_StructJacobi__set_hooks_static(
  int32_t on,
  struct sidl_BaseInterface__object **_ex)
{
  (_getSEPV()->f__set_hooks_static)(
  on, _ex);
  _resetSEPV();
}

/*
 * Method to set whether or not method hooks should be invoked.
 */

SIDL_C_INLINE_DEFN
void
bHYPRE_StructJacobi__set_hooks(
  /* in */ bHYPRE_StructJacobi self,
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
bHYPRE_StructJacobi__isRemote(
  /* in */ bHYPRE_StructJacobi self,
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
bHYPRE_StructJacobi__isLocal(
  /* in */ bHYPRE_StructJacobi self,
  /* out */ sidl_BaseInterface *_ex)
{
  return !bHYPRE_StructJacobi__isRemote(self,_ex);
}

struct bHYPRE_StructJacobi__array*
bHYPRE_StructJacobi__array_createCol(
  int32_t       dimen,
  const int32_t lower[],
  const int32_t upper[])
{
  return (struct bHYPRE_StructJacobi__array*)sidl_interface__array_createCol(
    dimen, lower, upper);
}

struct bHYPRE_StructJacobi__array*
bHYPRE_StructJacobi__array_createRow(
  int32_t       dimen,
  const int32_t lower[],
  const int32_t upper[])
{
  return (struct bHYPRE_StructJacobi__array*)sidl_interface__array_createRow(
    dimen, lower, upper);
}

struct bHYPRE_StructJacobi__array*
bHYPRE_StructJacobi__array_create1d(int32_t len)
{
  return (struct bHYPRE_StructJacobi__array*)sidl_interface__array_create1d(
    len);
}

struct bHYPRE_StructJacobi__array*
bHYPRE_StructJacobi__array_create1dInit(
  int32_t len, 
  bHYPRE_StructJacobi* data)
{
  return (struct bHYPRE_StructJacobi__array*)sidl_interface__array_create1dInit(
    len, (struct sidl_BaseInterface__object **)data);
}

struct bHYPRE_StructJacobi__array*
bHYPRE_StructJacobi__array_create2dCol(int32_t m, int32_t n)
{
  return (struct bHYPRE_StructJacobi__array*)sidl_interface__array_create2dCol(
    m, n);
}

struct bHYPRE_StructJacobi__array*
bHYPRE_StructJacobi__array_create2dRow(int32_t m, int32_t n)
{
  return (struct bHYPRE_StructJacobi__array*)sidl_interface__array_create2dRow(
    m, n);
}

struct bHYPRE_StructJacobi__array*
bHYPRE_StructJacobi__array_borrow(
  bHYPRE_StructJacobi* firstElement,
  int32_t       dimen,
  const int32_t lower[],
  const int32_t upper[],
  const int32_t stride[])
{
  return (struct bHYPRE_StructJacobi__array*)sidl_interface__array_borrow(
    (struct sidl_BaseInterface__object **)
    firstElement, dimen, lower, upper, stride);
}

struct bHYPRE_StructJacobi__array*
bHYPRE_StructJacobi__array_smartCopy(
  struct bHYPRE_StructJacobi__array *array)
{
  return (struct bHYPRE_StructJacobi__array*)
    sidl_interface__array_smartCopy((struct sidl_interface__array *)array);
}

void
bHYPRE_StructJacobi__array_addRef(
  struct bHYPRE_StructJacobi__array* array)
{
  sidl_interface__array_addRef((struct sidl_interface__array *)array);
}

void
bHYPRE_StructJacobi__array_deleteRef(
  struct bHYPRE_StructJacobi__array* array)
{
  sidl_interface__array_deleteRef((struct sidl_interface__array *)array);
}

bHYPRE_StructJacobi
bHYPRE_StructJacobi__array_get1(
  const struct bHYPRE_StructJacobi__array* array,
  const int32_t i1)
{
  return (bHYPRE_StructJacobi)
    sidl_interface__array_get1((const struct sidl_interface__array *)array
    , i1);
}

bHYPRE_StructJacobi
bHYPRE_StructJacobi__array_get2(
  const struct bHYPRE_StructJacobi__array* array,
  const int32_t i1,
  const int32_t i2)
{
  return (bHYPRE_StructJacobi)
    sidl_interface__array_get2((const struct sidl_interface__array *)array
    , i1, i2);
}

bHYPRE_StructJacobi
bHYPRE_StructJacobi__array_get3(
  const struct bHYPRE_StructJacobi__array* array,
  const int32_t i1,
  const int32_t i2,
  const int32_t i3)
{
  return (bHYPRE_StructJacobi)
    sidl_interface__array_get3((const struct sidl_interface__array *)array
    , i1, i2, i3);
}

bHYPRE_StructJacobi
bHYPRE_StructJacobi__array_get4(
  const struct bHYPRE_StructJacobi__array* array,
  const int32_t i1,
  const int32_t i2,
  const int32_t i3,
  const int32_t i4)
{
  return (bHYPRE_StructJacobi)
    sidl_interface__array_get4((const struct sidl_interface__array *)array
    , i1, i2, i3, i4);
}

bHYPRE_StructJacobi
bHYPRE_StructJacobi__array_get5(
  const struct bHYPRE_StructJacobi__array* array,
  const int32_t i1,
  const int32_t i2,
  const int32_t i3,
  const int32_t i4,
  const int32_t i5)
{
  return (bHYPRE_StructJacobi)
    sidl_interface__array_get5((const struct sidl_interface__array *)array
    , i1, i2, i3, i4, i5);
}

bHYPRE_StructJacobi
bHYPRE_StructJacobi__array_get6(
  const struct bHYPRE_StructJacobi__array* array,
  const int32_t i1,
  const int32_t i2,
  const int32_t i3,
  const int32_t i4,
  const int32_t i5,
  const int32_t i6)
{
  return (bHYPRE_StructJacobi)
    sidl_interface__array_get6((const struct sidl_interface__array *)array
    , i1, i2, i3, i4, i5, i6);
}

bHYPRE_StructJacobi
bHYPRE_StructJacobi__array_get7(
  const struct bHYPRE_StructJacobi__array* array,
  const int32_t i1,
  const int32_t i2,
  const int32_t i3,
  const int32_t i4,
  const int32_t i5,
  const int32_t i6,
  const int32_t i7)
{
  return (bHYPRE_StructJacobi)
    sidl_interface__array_get7((const struct sidl_interface__array *)array
    , i1, i2, i3, i4, i5, i6, i7);
}

bHYPRE_StructJacobi
bHYPRE_StructJacobi__array_get(
  const struct bHYPRE_StructJacobi__array* array,
  const int32_t indices[])
{
  return (bHYPRE_StructJacobi)
    sidl_interface__array_get((const struct sidl_interface__array *)array, 
      indices);
}

void
bHYPRE_StructJacobi__array_set1(
  struct bHYPRE_StructJacobi__array* array,
  const int32_t i1,
  bHYPRE_StructJacobi const value)
{
  sidl_interface__array_set1((struct sidl_interface__array *)array
  , i1, (struct sidl_BaseInterface__object *)value);
}

void
bHYPRE_StructJacobi__array_set2(
  struct bHYPRE_StructJacobi__array* array,
  const int32_t i1,
  const int32_t i2,
  bHYPRE_StructJacobi const value)
{
  sidl_interface__array_set2((struct sidl_interface__array *)array
  , i1, i2, (struct sidl_BaseInterface__object *)value);
}

void
bHYPRE_StructJacobi__array_set3(
  struct bHYPRE_StructJacobi__array* array,
  const int32_t i1,
  const int32_t i2,
  const int32_t i3,
  bHYPRE_StructJacobi const value)
{
  sidl_interface__array_set3((struct sidl_interface__array *)array
  , i1, i2, i3, (struct sidl_BaseInterface__object *)value);
}

void
bHYPRE_StructJacobi__array_set4(
  struct bHYPRE_StructJacobi__array* array,
  const int32_t i1,
  const int32_t i2,
  const int32_t i3,
  const int32_t i4,
  bHYPRE_StructJacobi const value)
{
  sidl_interface__array_set4((struct sidl_interface__array *)array
  , i1, i2, i3, i4, (struct sidl_BaseInterface__object *)value);
}

void
bHYPRE_StructJacobi__array_set5(
  struct bHYPRE_StructJacobi__array* array,
  const int32_t i1,
  const int32_t i2,
  const int32_t i3,
  const int32_t i4,
  const int32_t i5,
  bHYPRE_StructJacobi const value)
{
  sidl_interface__array_set5((struct sidl_interface__array *)array
  , i1, i2, i3, i4, i5, (struct sidl_BaseInterface__object *)value);
}

void
bHYPRE_StructJacobi__array_set6(
  struct bHYPRE_StructJacobi__array* array,
  const int32_t i1,
  const int32_t i2,
  const int32_t i3,
  const int32_t i4,
  const int32_t i5,
  const int32_t i6,
  bHYPRE_StructJacobi const value)
{
  sidl_interface__array_set6((struct sidl_interface__array *)array
  , i1, i2, i3, i4, i5, i6, (struct sidl_BaseInterface__object *)value);
}

void
bHYPRE_StructJacobi__array_set7(
  struct bHYPRE_StructJacobi__array* array,
  const int32_t i1,
  const int32_t i2,
  const int32_t i3,
  const int32_t i4,
  const int32_t i5,
  const int32_t i6,
  const int32_t i7,
  bHYPRE_StructJacobi const value)
{
  sidl_interface__array_set7((struct sidl_interface__array *)array
  , i1, i2, i3, i4, i5, i6, i7, (struct sidl_BaseInterface__object *)value);
}

void
bHYPRE_StructJacobi__array_set(
  struct bHYPRE_StructJacobi__array* array,
  const int32_t indices[],
  bHYPRE_StructJacobi const value)
{
  sidl_interface__array_set((struct sidl_interface__array *)array, indices, (
    struct sidl_BaseInterface__object *)value);
}

int32_t
bHYPRE_StructJacobi__array_dimen(
  const struct bHYPRE_StructJacobi__array* array)
{
  return sidl_interface__array_dimen((struct sidl_interface__array *)array);
}

int32_t
bHYPRE_StructJacobi__array_lower(
  const struct bHYPRE_StructJacobi__array* array,
  const int32_t ind)
{
  return sidl_interface__array_lower((struct sidl_interface__array *)array, 
    ind);
}

int32_t
bHYPRE_StructJacobi__array_upper(
  const struct bHYPRE_StructJacobi__array* array,
  const int32_t ind)
{
  return sidl_interface__array_upper((struct sidl_interface__array *)array, 
    ind);
}

int32_t
bHYPRE_StructJacobi__array_length(
  const struct bHYPRE_StructJacobi__array* array,
  const int32_t ind)
{
  return sidl_interface__array_length((struct sidl_interface__array *)array, 
    ind);
}

int32_t
bHYPRE_StructJacobi__array_stride(
  const struct bHYPRE_StructJacobi__array* array,
  const int32_t ind)
{
  return sidl_interface__array_stride((struct sidl_interface__array *)array, 
    ind);
}

int
bHYPRE_StructJacobi__array_isColumnOrder(
  const struct bHYPRE_StructJacobi__array* array)
{
  return sidl_interface__array_isColumnOrder((struct sidl_interface__array 
    *)array);
}

int
bHYPRE_StructJacobi__array_isRowOrder(
  const struct bHYPRE_StructJacobi__array* array)
{
  return sidl_interface__array_isRowOrder((struct sidl_interface__array 
    *)array);
}

void
bHYPRE_StructJacobi__array_copy(
  const struct bHYPRE_StructJacobi__array* src,
  struct bHYPRE_StructJacobi__array* dest)
{
  sidl_interface__array_copy((const struct sidl_interface__array *)src,
                             (struct sidl_interface__array *)dest);
}

struct bHYPRE_StructJacobi__array*
bHYPRE_StructJacobi__array_slice(
  struct bHYPRE_StructJacobi__array* src,
  int32_t        dimen,
  const int32_t  numElem[],
  const int32_t  *srcStart,
  const int32_t  *srcStride,
  const int32_t  *newStart)
{
  return (struct bHYPRE_StructJacobi__array*)
    sidl_interface__array_slice((struct sidl_interface__array *)src,
                                dimen, numElem, srcStart, srcStride, newStart);
}

struct bHYPRE_StructJacobi__array*
bHYPRE_StructJacobi__array_ensure(
  struct bHYPRE_StructJacobi__array* src,
  int32_t dimen,
  int     ordering)
{
  return (struct bHYPRE_StructJacobi__array*)
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
static struct sidl_recursive_mutex_t bHYPRE_StructJacobi__mutex= SIDL_RECURSIVE_MUTEX_INITIALIZER;
#define LOCK_STATIC_GLOBALS sidl_recursive_mutex_lock( &bHYPRE_StructJacobi__mutex )
#define UNLOCK_STATIC_GLOBALS sidl_recursive_mutex_unlock( &bHYPRE_StructJacobi__mutex )
/* #define HAVE_LOCKED_STATIC_GLOBALS (sidl_recursive_mutex_trylock( &bHYPRE_StructJacobi__mutex )==EDEADLOCK) */
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

static struct bHYPRE_StructJacobi__epv s_rem_epv__bhypre_structjacobi;

static struct bHYPRE_Operator__epv s_rem_epv__bhypre_operator;

static struct bHYPRE_Solver__epv s_rem_epv__bhypre_solver;

static struct sidl_BaseClass__epv  s_rem_epv__sidl_baseclass;

static struct sidl_BaseInterface__epv  s_rem_epv__sidl_baseinterface;


/* REMOTE CAST: dynamic type casting for remote objects. */
static void* remote_bHYPRE_StructJacobi__cast(
  struct bHYPRE_StructJacobi__object* self,
  const char* name, sidl_BaseInterface* _ex)
{
  int
    cmp0,
    cmp1,
    cmp2;
  void* cast = NULL;
  *_ex = NULL; /* default to no exception */
  cmp0 = strcmp(name, "bHYPRE.StructJacobi");
  if (!cmp0) {
    (*self->d_epv->f_addRef)(self, _ex); SIDL_CHECK(*_ex);
    cast = ((struct bHYPRE_StructJacobi__object*)self);
    return cast;
  }
  else if (cmp0 < 0) {
    cmp1 = strcmp(name, "bHYPRE.Solver");
    if (!cmp1) {
      (*self->d_epv->f_addRef)(self, _ex); SIDL_CHECK(*_ex);
      cast = &((*self).d_bhypre_solver);
      return cast;
    }
    else if (cmp1 < 0) {
      cmp2 = strcmp(name, "bHYPRE.Operator");
      if (!cmp2) {
        (*self->d_epv->f_addRef)(self, _ex); SIDL_CHECK(*_ex);
        cast = &((*self).d_bhypre_operator);
        return cast;
      }
    }
  }
  else if (cmp0 > 0) {
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
  if ((*self->d_epv->f_isType)(self,name, _ex)) {
    void* (*func)(struct sidl_rmi_InstanceHandle__object*, struct 
      sidl_BaseInterface__object**) = 
      (void* (*)(struct sidl_rmi_InstanceHandle__object*, struct 
        sidl_BaseInterface__object**)) 
      sidl_rmi_ConnectRegistry_getConnect(name, _ex);SIDL_CHECK(*_ex);
    cast =  (*func)(((struct bHYPRE_StructJacobi__remote*)self->d_data)->d_ih, 
      _ex);
  }

  return cast;
  EXIT:
  return NULL;
}

/* REMOTE DELETE: call the remote destructor for the object. */
static void remote_bHYPRE_StructJacobi__delete(
  struct bHYPRE_StructJacobi__object* self,
  sidl_BaseInterface* _ex)
{
  *_ex = NULL;
  free((void*) self);
}

/* REMOTE GETURL: call the getURL function for the object. */
static char* remote_bHYPRE_StructJacobi__getURL(
  struct bHYPRE_StructJacobi__object* self, sidl_BaseInterface* _ex)
{
  struct sidl_rmi_InstanceHandle__object *conn = ((struct 
    bHYPRE_StructJacobi__remote*)self->d_data)->d_ih;
  *_ex = NULL;
  if(conn != NULL) {
    return sidl_rmi_InstanceHandle_getObjectURL(conn, _ex);
  }
  return NULL;
}

/* REMOTE ADDREF: For internal babel use only! Remote addRef. */
static void remote_bHYPRE_StructJacobi__raddRef(
  struct bHYPRE_StructJacobi__object* self,sidl_BaseInterface* _ex)
{
  sidl_BaseException netex = NULL;
  /* initialize a new invocation */
  sidl_BaseInterface _throwaway = NULL;
  struct sidl_rmi_InstanceHandle__object *_conn = ((struct 
    bHYPRE_StructJacobi__remote*)self->d_data)->d_ih;
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
remote_bHYPRE_StructJacobi__isRemote(
    struct bHYPRE_StructJacobi__object* self, 
    sidl_BaseInterface *_ex) {
  *_ex = NULL;
  return TRUE;
}

/* REMOTE METHOD STUB:_set_hooks */
static void
remote_bHYPRE_StructJacobi__set_hooks(
  /* in */ struct bHYPRE_StructJacobi__object* self ,
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
      bHYPRE_StructJacobi__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "_set_hooks", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */
    sidl_rmi_Invocation_packBool( _inv, "on", on, _ex);SIDL_CHECK(*_ex);

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if(_be != NULL) {
      sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from bHYPRE.StructJacobi._set_hooks.", &throwaway_exception);
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
static void remote_bHYPRE_StructJacobi__exec(
  struct bHYPRE_StructJacobi__object* self,const char* methodName,
  sidl_rmi_Call inArgs,
  sidl_rmi_Return outArgs,
  sidl_BaseInterface* _ex)
{
  *_ex = NULL;
}

/* REMOTE METHOD STUB:addRef */
static void
remote_bHYPRE_StructJacobi_addRef(
  /* in */ struct bHYPRE_StructJacobi__object* self ,
  /* out */ struct sidl_BaseInterface__object* *_ex)
{
  LANG_SPECIFIC_INIT();
  *_ex = NULL;
  {
    struct bHYPRE_StructJacobi__remote* r_obj = (struct 
      bHYPRE_StructJacobi__remote*)self->d_data;
    LOCK_STATIC_GLOBALS;
    r_obj->d_refcount++;
    UNLOCK_STATIC_GLOBALS;
  }
}

/* REMOTE METHOD STUB:deleteRef */
static void
remote_bHYPRE_StructJacobi_deleteRef(
  /* in */ struct bHYPRE_StructJacobi__object* self ,
  /* out */ struct sidl_BaseInterface__object* *_ex)
{
  LANG_SPECIFIC_INIT();
  *_ex = NULL;
  {
    struct bHYPRE_StructJacobi__remote* r_obj = (struct 
      bHYPRE_StructJacobi__remote*)self->d_data;
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
remote_bHYPRE_StructJacobi_isSame(
  /* in */ struct bHYPRE_StructJacobi__object* self ,
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
      bHYPRE_StructJacobi__remote*)self->d_data)->d_ih;
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
sidl_BaseException_addLine(_be, "Exception unserialized from bHYPRE.StructJacobi.isSame.", &throwaway_exception);
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
remote_bHYPRE_StructJacobi_isType(
  /* in */ struct bHYPRE_StructJacobi__object* self ,
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
      bHYPRE_StructJacobi__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "isType", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */
    sidl_rmi_Invocation_packString( _inv, "name", name, _ex);SIDL_CHECK(*_ex);

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if(_be != NULL) {
      sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from bHYPRE.StructJacobi.isType.", &throwaway_exception);
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
remote_bHYPRE_StructJacobi_getClassInfo(
  /* in */ struct bHYPRE_StructJacobi__object* self ,
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
      bHYPRE_StructJacobi__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "getClassInfo", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if(_be != NULL) {
      sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from bHYPRE.StructJacobi.getClassInfo.", &throwaway_exception);
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

/* REMOTE METHOD STUB:SetOperator */
static int32_t
remote_bHYPRE_StructJacobi_SetOperator(
  /* in */ struct bHYPRE_StructJacobi__object* self ,
  /* in */ struct bHYPRE_Operator__object* A,
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
      bHYPRE_StructJacobi__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "SetOperator", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */
    if(A){
      char* _url = sidl_BaseInterface__getURL((sidl_BaseInterface)A, 
        _ex);SIDL_CHECK(*_ex);
      sidl_rmi_Invocation_packString( _inv, "A", _url, _ex);SIDL_CHECK(*_ex);
      free((void*)_url);
    } else {
      sidl_rmi_Invocation_packString( _inv, "A", NULL, _ex);SIDL_CHECK(*_ex);
    }

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if(_be != NULL) {
      sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from bHYPRE.StructJacobi.SetOperator.", &throwaway_exception);
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

/* REMOTE METHOD STUB:SetTolerance */
static int32_t
remote_bHYPRE_StructJacobi_SetTolerance(
  /* in */ struct bHYPRE_StructJacobi__object* self ,
  /* in */ double tolerance,
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
      bHYPRE_StructJacobi__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "SetTolerance", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */
    sidl_rmi_Invocation_packDouble( _inv, "tolerance", tolerance, 
      _ex);SIDL_CHECK(*_ex);

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if(_be != NULL) {
      sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from bHYPRE.StructJacobi.SetTolerance.", &throwaway_exception);
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

/* REMOTE METHOD STUB:SetMaxIterations */
static int32_t
remote_bHYPRE_StructJacobi_SetMaxIterations(
  /* in */ struct bHYPRE_StructJacobi__object* self ,
  /* in */ int32_t max_iterations,
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
      bHYPRE_StructJacobi__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "SetMaxIterations", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */
    sidl_rmi_Invocation_packInt( _inv, "max_iterations", max_iterations, 
      _ex);SIDL_CHECK(*_ex);

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if(_be != NULL) {
      sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from bHYPRE.StructJacobi.SetMaxIterations.", &throwaway_exception);
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

/* REMOTE METHOD STUB:SetLogging */
static int32_t
remote_bHYPRE_StructJacobi_SetLogging(
  /* in */ struct bHYPRE_StructJacobi__object* self ,
  /* in */ int32_t level,
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
      bHYPRE_StructJacobi__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "SetLogging", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */
    sidl_rmi_Invocation_packInt( _inv, "level", level, _ex);SIDL_CHECK(*_ex);

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if(_be != NULL) {
      sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from bHYPRE.StructJacobi.SetLogging.", &throwaway_exception);
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

/* REMOTE METHOD STUB:SetPrintLevel */
static int32_t
remote_bHYPRE_StructJacobi_SetPrintLevel(
  /* in */ struct bHYPRE_StructJacobi__object* self ,
  /* in */ int32_t level,
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
      bHYPRE_StructJacobi__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "SetPrintLevel", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */
    sidl_rmi_Invocation_packInt( _inv, "level", level, _ex);SIDL_CHECK(*_ex);

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if(_be != NULL) {
      sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from bHYPRE.StructJacobi.SetPrintLevel.", &throwaway_exception);
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

/* REMOTE METHOD STUB:GetNumIterations */
static int32_t
remote_bHYPRE_StructJacobi_GetNumIterations(
  /* in */ struct bHYPRE_StructJacobi__object* self ,
  /* out */ int32_t* num_iterations,
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
      bHYPRE_StructJacobi__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "GetNumIterations", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if(_be != NULL) {
      sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from bHYPRE.StructJacobi.GetNumIterations.", &throwaway_exception);
      *_ex = (sidl_BaseInterface) sidl_BaseInterface__rmicast(_be,
        &throwaway_exception);
      goto EXIT;
    }

    /* extract return value */
    sidl_rmi_Response_unpackInt( _rsvp, "_retval", &_retval, _ex);SIDL_CHECK(
      *_ex);

    /* unpack out and inout arguments */
    sidl_rmi_Response_unpackInt( _rsvp, "num_iterations", num_iterations, 
      _ex);SIDL_CHECK(*_ex);

    /* cleanup and return */
    EXIT:
    if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
    if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
    return _retval;
  }
}

/* REMOTE METHOD STUB:GetRelResidualNorm */
static int32_t
remote_bHYPRE_StructJacobi_GetRelResidualNorm(
  /* in */ struct bHYPRE_StructJacobi__object* self ,
  /* out */ double* norm,
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
      bHYPRE_StructJacobi__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "GetRelResidualNorm", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if(_be != NULL) {
      sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from bHYPRE.StructJacobi.GetRelResidualNorm.", &throwaway_exception);
      *_ex = (sidl_BaseInterface) sidl_BaseInterface__rmicast(_be,
        &throwaway_exception);
      goto EXIT;
    }

    /* extract return value */
    sidl_rmi_Response_unpackInt( _rsvp, "_retval", &_retval, _ex);SIDL_CHECK(
      *_ex);

    /* unpack out and inout arguments */
    sidl_rmi_Response_unpackDouble( _rsvp, "norm", norm, _ex);SIDL_CHECK(*_ex);

    /* cleanup and return */
    EXIT:
    if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
    if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
    return _retval;
  }
}

/* REMOTE METHOD STUB:SetCommunicator */
static int32_t
remote_bHYPRE_StructJacobi_SetCommunicator(
  /* in */ struct bHYPRE_StructJacobi__object* self ,
  /* in */ struct bHYPRE_MPICommunicator__object* mpi_comm,
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
      bHYPRE_StructJacobi__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "SetCommunicator", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */
    if(mpi_comm){
      char* _url = sidl_BaseInterface__getURL((sidl_BaseInterface)mpi_comm, 
        _ex);SIDL_CHECK(*_ex);
      sidl_rmi_Invocation_packString( _inv, "mpi_comm", _url, _ex);SIDL_CHECK(
        *_ex);
      free((void*)_url);
    } else {
      sidl_rmi_Invocation_packString( _inv, "mpi_comm", NULL, _ex);SIDL_CHECK(
        *_ex);
    }

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if(_be != NULL) {
      sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from bHYPRE.StructJacobi.SetCommunicator.", &throwaway_exception);
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

/* REMOTE METHOD STUB:Destroy */
static void
remote_bHYPRE_StructJacobi_Destroy(
  /* in */ struct bHYPRE_StructJacobi__object* self ,
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
      bHYPRE_StructJacobi__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "Destroy", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if(_be != NULL) {
      sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from bHYPRE.StructJacobi.Destroy.", &throwaway_exception);
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

/* REMOTE METHOD STUB:SetIntParameter */
static int32_t
remote_bHYPRE_StructJacobi_SetIntParameter(
  /* in */ struct bHYPRE_StructJacobi__object* self ,
  /* in */ const char* name,
  /* in */ int32_t value,
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
      bHYPRE_StructJacobi__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "SetIntParameter", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */
    sidl_rmi_Invocation_packString( _inv, "name", name, _ex);SIDL_CHECK(*_ex);
    sidl_rmi_Invocation_packInt( _inv, "value", value, _ex);SIDL_CHECK(*_ex);

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if(_be != NULL) {
      sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from bHYPRE.StructJacobi.SetIntParameter.", &throwaway_exception);
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

/* REMOTE METHOD STUB:SetDoubleParameter */
static int32_t
remote_bHYPRE_StructJacobi_SetDoubleParameter(
  /* in */ struct bHYPRE_StructJacobi__object* self ,
  /* in */ const char* name,
  /* in */ double value,
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
      bHYPRE_StructJacobi__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "SetDoubleParameter", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */
    sidl_rmi_Invocation_packString( _inv, "name", name, _ex);SIDL_CHECK(*_ex);
    sidl_rmi_Invocation_packDouble( _inv, "value", value, _ex);SIDL_CHECK(*_ex);

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if(_be != NULL) {
      sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from bHYPRE.StructJacobi.SetDoubleParameter.", &throwaway_exception);
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

/* REMOTE METHOD STUB:SetStringParameter */
static int32_t
remote_bHYPRE_StructJacobi_SetStringParameter(
  /* in */ struct bHYPRE_StructJacobi__object* self ,
  /* in */ const char* name,
  /* in */ const char* value,
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
      bHYPRE_StructJacobi__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "SetStringParameter", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */
    sidl_rmi_Invocation_packString( _inv, "name", name, _ex);SIDL_CHECK(*_ex);
    sidl_rmi_Invocation_packString( _inv, "value", value, _ex);SIDL_CHECK(*_ex);

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if(_be != NULL) {
      sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from bHYPRE.StructJacobi.SetStringParameter.", &throwaway_exception);
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

/* REMOTE METHOD STUB:SetIntArray1Parameter */
static int32_t
remote_bHYPRE_StructJacobi_SetIntArray1Parameter(
  /* in */ struct bHYPRE_StructJacobi__object* self ,
  /* in */ const char* name,
  /* in rarray[nvalues] */ struct sidl_int__array* value,
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
      bHYPRE_StructJacobi__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "SetIntArray1Parameter", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */
    sidl_rmi_Invocation_packString( _inv, "name", name, _ex);SIDL_CHECK(*_ex);
    sidl_rmi_Invocation_packIntArray( _inv, "value", value,
      sidl_column_major_order,1,0, _ex);SIDL_CHECK(*_ex);

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if(_be != NULL) {
      sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from bHYPRE.StructJacobi.SetIntArray1Parameter.", &throwaway_exception);
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

/* REMOTE METHOD STUB:SetIntArray2Parameter */
static int32_t
remote_bHYPRE_StructJacobi_SetIntArray2Parameter(
  /* in */ struct bHYPRE_StructJacobi__object* self ,
  /* in */ const char* name,
  /* in array<int,2,column-major> */ struct sidl_int__array* value,
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
      bHYPRE_StructJacobi__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "SetIntArray2Parameter", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */
    sidl_rmi_Invocation_packString( _inv, "name", name, _ex);SIDL_CHECK(*_ex);
    sidl_rmi_Invocation_packIntArray( _inv, "value", value,
      sidl_column_major_order,2,0, _ex);SIDL_CHECK(*_ex);

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if(_be != NULL) {
      sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from bHYPRE.StructJacobi.SetIntArray2Parameter.", &throwaway_exception);
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

/* REMOTE METHOD STUB:SetDoubleArray1Parameter */
static int32_t
remote_bHYPRE_StructJacobi_SetDoubleArray1Parameter(
  /* in */ struct bHYPRE_StructJacobi__object* self ,
  /* in */ const char* name,
  /* in rarray[nvalues] */ struct sidl_double__array* value,
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
      bHYPRE_StructJacobi__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "SetDoubleArray1Parameter", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */
    sidl_rmi_Invocation_packString( _inv, "name", name, _ex);SIDL_CHECK(*_ex);
    sidl_rmi_Invocation_packDoubleArray( _inv, "value", value,
      sidl_column_major_order,1,0, _ex);SIDL_CHECK(*_ex);

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if(_be != NULL) {
      sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from bHYPRE.StructJacobi.SetDoubleArray1Parameter.", &throwaway_exception);
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

/* REMOTE METHOD STUB:SetDoubleArray2Parameter */
static int32_t
remote_bHYPRE_StructJacobi_SetDoubleArray2Parameter(
  /* in */ struct bHYPRE_StructJacobi__object* self ,
  /* in */ const char* name,
  /* in array<double,2,column-major> */ struct sidl_double__array* value,
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
      bHYPRE_StructJacobi__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "SetDoubleArray2Parameter", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */
    sidl_rmi_Invocation_packString( _inv, "name", name, _ex);SIDL_CHECK(*_ex);
    sidl_rmi_Invocation_packDoubleArray( _inv, "value", value,
      sidl_column_major_order,2,0, _ex);SIDL_CHECK(*_ex);

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if(_be != NULL) {
      sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from bHYPRE.StructJacobi.SetDoubleArray2Parameter.", &throwaway_exception);
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

/* REMOTE METHOD STUB:GetIntValue */
static int32_t
remote_bHYPRE_StructJacobi_GetIntValue(
  /* in */ struct bHYPRE_StructJacobi__object* self ,
  /* in */ const char* name,
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
    int32_t _retval = 0;
    struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
      bHYPRE_StructJacobi__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "GetIntValue", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */
    sidl_rmi_Invocation_packString( _inv, "name", name, _ex);SIDL_CHECK(*_ex);

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if(_be != NULL) {
      sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from bHYPRE.StructJacobi.GetIntValue.", &throwaway_exception);
      *_ex = (sidl_BaseInterface) sidl_BaseInterface__rmicast(_be,
        &throwaway_exception);
      goto EXIT;
    }

    /* extract return value */
    sidl_rmi_Response_unpackInt( _rsvp, "_retval", &_retval, _ex);SIDL_CHECK(
      *_ex);

    /* unpack out and inout arguments */
    sidl_rmi_Response_unpackInt( _rsvp, "value", value, _ex);SIDL_CHECK(*_ex);

    /* cleanup and return */
    EXIT:
    if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
    if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
    return _retval;
  }
}

/* REMOTE METHOD STUB:GetDoubleValue */
static int32_t
remote_bHYPRE_StructJacobi_GetDoubleValue(
  /* in */ struct bHYPRE_StructJacobi__object* self ,
  /* in */ const char* name,
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
    int32_t _retval = 0;
    struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
      bHYPRE_StructJacobi__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "GetDoubleValue", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */
    sidl_rmi_Invocation_packString( _inv, "name", name, _ex);SIDL_CHECK(*_ex);

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if(_be != NULL) {
      sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from bHYPRE.StructJacobi.GetDoubleValue.", &throwaway_exception);
      *_ex = (sidl_BaseInterface) sidl_BaseInterface__rmicast(_be,
        &throwaway_exception);
      goto EXIT;
    }

    /* extract return value */
    sidl_rmi_Response_unpackInt( _rsvp, "_retval", &_retval, _ex);SIDL_CHECK(
      *_ex);

    /* unpack out and inout arguments */
    sidl_rmi_Response_unpackDouble( _rsvp, "value", value, _ex);SIDL_CHECK(
      *_ex);

    /* cleanup and return */
    EXIT:
    if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
    if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
    return _retval;
  }
}

/* REMOTE METHOD STUB:Setup */
static int32_t
remote_bHYPRE_StructJacobi_Setup(
  /* in */ struct bHYPRE_StructJacobi__object* self ,
  /* in */ struct bHYPRE_Vector__object* b,
  /* in */ struct bHYPRE_Vector__object* x,
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
      bHYPRE_StructJacobi__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "Setup", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */
    if(b){
      char* _url = sidl_BaseInterface__getURL((sidl_BaseInterface)b, 
        _ex);SIDL_CHECK(*_ex);
      sidl_rmi_Invocation_packString( _inv, "b", _url, _ex);SIDL_CHECK(*_ex);
      free((void*)_url);
    } else {
      sidl_rmi_Invocation_packString( _inv, "b", NULL, _ex);SIDL_CHECK(*_ex);
    }
    if(x){
      char* _url = sidl_BaseInterface__getURL((sidl_BaseInterface)x, 
        _ex);SIDL_CHECK(*_ex);
      sidl_rmi_Invocation_packString( _inv, "x", _url, _ex);SIDL_CHECK(*_ex);
      free((void*)_url);
    } else {
      sidl_rmi_Invocation_packString( _inv, "x", NULL, _ex);SIDL_CHECK(*_ex);
    }

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if(_be != NULL) {
      sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from bHYPRE.StructJacobi.Setup.", &throwaway_exception);
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

/* REMOTE METHOD STUB:Apply */
static int32_t
remote_bHYPRE_StructJacobi_Apply(
  /* in */ struct bHYPRE_StructJacobi__object* self ,
  /* in */ struct bHYPRE_Vector__object* b,
  /* inout */ struct bHYPRE_Vector__object** x,
  /* out */ struct sidl_BaseInterface__object* *_ex)
{
  LANG_SPECIFIC_INIT();
  *_ex = NULL;
  {
    /* initialize a new invocation */
    sidl_BaseInterface _throwaway = NULL;
    sidl_BaseException _be = NULL;
    sidl_rmi_Response _rsvp = NULL;
    char* x_str= NULL;
    int32_t _retval = 0;
    struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
      bHYPRE_StructJacobi__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "Apply", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */
    if(b){
      char* _url = sidl_BaseInterface__getURL((sidl_BaseInterface)b, 
        _ex);SIDL_CHECK(*_ex);
      sidl_rmi_Invocation_packString( _inv, "b", _url, _ex);SIDL_CHECK(*_ex);
      free((void*)_url);
    } else {
      sidl_rmi_Invocation_packString( _inv, "b", NULL, _ex);SIDL_CHECK(*_ex);
    }
    if(*x){
      char* _url = sidl_BaseInterface__getURL((sidl_BaseInterface)*x, 
        _ex);SIDL_CHECK(*_ex);
      sidl_rmi_Invocation_packString( _inv, "x", _url, _ex);SIDL_CHECK(*_ex);
      free((void*)_url);
    } else {
      sidl_rmi_Invocation_packString( _inv, "x", NULL, _ex);SIDL_CHECK(*_ex);
    }
    /* Transfer this reference */
    if(*x && sidl_BaseInterface__isRemote((sidl_BaseInterface)*x, _ex)) {
      SIDL_CHECK(*_ex);
      (*((sidl_BaseInterface)*x)->d_epv->f__raddRef)(((
        sidl_BaseInterface)*x)->d_object, _ex);SIDL_CHECK(*_ex);
      sidl_BaseInterface_deleteRef((sidl_BaseInterface)*x, _ex);SIDL_CHECK(
        *_ex); 
    }

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if(_be != NULL) {
      sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from bHYPRE.StructJacobi.Apply.", &throwaway_exception);
      *_ex = (sidl_BaseInterface) sidl_BaseInterface__rmicast(_be,
        &throwaway_exception);
      goto EXIT;
    }

    /* extract return value */
    sidl_rmi_Response_unpackInt( _rsvp, "_retval", &_retval, _ex);SIDL_CHECK(
      *_ex);

    /* unpack out and inout arguments */
    sidl_rmi_Response_unpackString( _rsvp, "x", &x_str, _ex);SIDL_CHECK(*_ex);
    *x = bHYPRE_Vector__connectI(x_str, FALSE, _ex);SIDL_CHECK(*_ex);

    /* cleanup and return */
    EXIT:
    if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
    if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
    return _retval;
  }
}

/* REMOTE METHOD STUB:ApplyAdjoint */
static int32_t
remote_bHYPRE_StructJacobi_ApplyAdjoint(
  /* in */ struct bHYPRE_StructJacobi__object* self ,
  /* in */ struct bHYPRE_Vector__object* b,
  /* inout */ struct bHYPRE_Vector__object** x,
  /* out */ struct sidl_BaseInterface__object* *_ex)
{
  LANG_SPECIFIC_INIT();
  *_ex = NULL;
  {
    /* initialize a new invocation */
    sidl_BaseInterface _throwaway = NULL;
    sidl_BaseException _be = NULL;
    sidl_rmi_Response _rsvp = NULL;
    char* x_str= NULL;
    int32_t _retval = 0;
    struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
      bHYPRE_StructJacobi__remote*)self->d_data)->d_ih;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "ApplyAdjoint", _ex ); SIDL_CHECK(*_ex);

    /* pack in and inout arguments */
    if(b){
      char* _url = sidl_BaseInterface__getURL((sidl_BaseInterface)b, 
        _ex);SIDL_CHECK(*_ex);
      sidl_rmi_Invocation_packString( _inv, "b", _url, _ex);SIDL_CHECK(*_ex);
      free((void*)_url);
    } else {
      sidl_rmi_Invocation_packString( _inv, "b", NULL, _ex);SIDL_CHECK(*_ex);
    }
    if(*x){
      char* _url = sidl_BaseInterface__getURL((sidl_BaseInterface)*x, 
        _ex);SIDL_CHECK(*_ex);
      sidl_rmi_Invocation_packString( _inv, "x", _url, _ex);SIDL_CHECK(*_ex);
      free((void*)_url);
    } else {
      sidl_rmi_Invocation_packString( _inv, "x", NULL, _ex);SIDL_CHECK(*_ex);
    }
    /* Transfer this reference */
    if(*x && sidl_BaseInterface__isRemote((sidl_BaseInterface)*x, _ex)) {
      SIDL_CHECK(*_ex);
      (*((sidl_BaseInterface)*x)->d_epv->f__raddRef)(((
        sidl_BaseInterface)*x)->d_object, _ex);SIDL_CHECK(*_ex);
      sidl_BaseInterface_deleteRef((sidl_BaseInterface)*x, _ex);SIDL_CHECK(
        *_ex); 
    }

    /* send actual RMI request */
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

    _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
    if(_be != NULL) {
      sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from bHYPRE.StructJacobi.ApplyAdjoint.", &throwaway_exception);
      *_ex = (sidl_BaseInterface) sidl_BaseInterface__rmicast(_be,
        &throwaway_exception);
      goto EXIT;
    }

    /* extract return value */
    sidl_rmi_Response_unpackInt( _rsvp, "_retval", &_retval, _ex);SIDL_CHECK(
      *_ex);

    /* unpack out and inout arguments */
    sidl_rmi_Response_unpackString( _rsvp, "x", &x_str, _ex);SIDL_CHECK(*_ex);
    *x = bHYPRE_Vector__connectI(x_str, FALSE, _ex);SIDL_CHECK(*_ex);

    /* cleanup and return */
    EXIT:
    if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
    if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
    return _retval;
  }
}

/* REMOTE EPV: create remote entry point vectors (EPVs). */
static void bHYPRE_StructJacobi__init_remote_epv(void)
{
  /* assert( HAVE_LOCKED_STATIC_GLOBALS ); */
  struct bHYPRE_StructJacobi__epv* epv = &s_rem_epv__bhypre_structjacobi;
  struct bHYPRE_Operator__epv*     e0  = &s_rem_epv__bhypre_operator;
  struct bHYPRE_Solver__epv*       e1  = &s_rem_epv__bhypre_solver;
  struct sidl_BaseClass__epv*      e2  = &s_rem_epv__sidl_baseclass;
  struct sidl_BaseInterface__epv*  e3  = &s_rem_epv__sidl_baseinterface;

  epv->f__cast                         = remote_bHYPRE_StructJacobi__cast;
  epv->f__delete                       = remote_bHYPRE_StructJacobi__delete;
  epv->f__exec                         = remote_bHYPRE_StructJacobi__exec;
  epv->f__getURL                       = remote_bHYPRE_StructJacobi__getURL;
  epv->f__raddRef                      = remote_bHYPRE_StructJacobi__raddRef;
  epv->f__isRemote                     = remote_bHYPRE_StructJacobi__isRemote;
  epv->f__set_hooks                    = remote_bHYPRE_StructJacobi__set_hooks;
  epv->f__ctor                         = NULL;
  epv->f__ctor2                        = NULL;
  epv->f__dtor                         = NULL;
  epv->f_addRef                        = remote_bHYPRE_StructJacobi_addRef;
  epv->f_deleteRef                     = remote_bHYPRE_StructJacobi_deleteRef;
  epv->f_isSame                        = remote_bHYPRE_StructJacobi_isSame;
  epv->f_isType                        = remote_bHYPRE_StructJacobi_isType;
  epv->f_getClassInfo                  = 
    remote_bHYPRE_StructJacobi_getClassInfo;
  epv->f_SetOperator                   = remote_bHYPRE_StructJacobi_SetOperator;
  epv->f_SetTolerance                  = 
    remote_bHYPRE_StructJacobi_SetTolerance;
  epv->f_SetMaxIterations              = 
    remote_bHYPRE_StructJacobi_SetMaxIterations;
  epv->f_SetLogging                    = remote_bHYPRE_StructJacobi_SetLogging;
  epv->f_SetPrintLevel                 = 
    remote_bHYPRE_StructJacobi_SetPrintLevel;
  epv->f_GetNumIterations              = 
    remote_bHYPRE_StructJacobi_GetNumIterations;
  epv->f_GetRelResidualNorm            = 
    remote_bHYPRE_StructJacobi_GetRelResidualNorm;
  epv->f_SetCommunicator               = 
    remote_bHYPRE_StructJacobi_SetCommunicator;
  epv->f_Destroy                       = remote_bHYPRE_StructJacobi_Destroy;
  epv->f_SetIntParameter               = 
    remote_bHYPRE_StructJacobi_SetIntParameter;
  epv->f_SetDoubleParameter            = 
    remote_bHYPRE_StructJacobi_SetDoubleParameter;
  epv->f_SetStringParameter            = 
    remote_bHYPRE_StructJacobi_SetStringParameter;
  epv->f_SetIntArray1Parameter         = 
    remote_bHYPRE_StructJacobi_SetIntArray1Parameter;
  epv->f_SetIntArray2Parameter         = 
    remote_bHYPRE_StructJacobi_SetIntArray2Parameter;
  epv->f_SetDoubleArray1Parameter      = 
    remote_bHYPRE_StructJacobi_SetDoubleArray1Parameter;
  epv->f_SetDoubleArray2Parameter      = 
    remote_bHYPRE_StructJacobi_SetDoubleArray2Parameter;
  epv->f_GetIntValue                   = remote_bHYPRE_StructJacobi_GetIntValue;
  epv->f_GetDoubleValue                = 
    remote_bHYPRE_StructJacobi_GetDoubleValue;
  epv->f_Setup                         = remote_bHYPRE_StructJacobi_Setup;
  epv->f_Apply                         = remote_bHYPRE_StructJacobi_Apply;
  epv->f_ApplyAdjoint                  = 
    remote_bHYPRE_StructJacobi_ApplyAdjoint;

  e0->f__cast                    = (void* (*)(void*,const char*,
    sidl_BaseInterface*)) epv->f__cast;
  e0->f__delete                  = (void (*)(void*,sidl_BaseInterface*)) 
    epv->f__delete;
  e0->f__getURL                  = (char* (*)(void*,sidl_BaseInterface*)) 
    epv->f__getURL;
  e0->f__raddRef                 = (void (*)(void*,sidl_BaseInterface*)) 
    epv->f__raddRef;
  e0->f__isRemote                = (sidl_bool (*)(void*,sidl_BaseInterface*)) 
    epv->f__isRemote;
  e0->f__set_hooks               = (void (*)(void*,int32_t, 
    sidl_BaseInterface*)) epv->f__set_hooks;
  e0->f__exec                    = (void (*)(void*,const char*,struct 
    sidl_rmi_Call__object*,struct sidl_rmi_Return__object*,struct 
    sidl_BaseInterface__object **)) epv->f__exec;
  e0->f_SetCommunicator          = (int32_t (*)(void*,struct 
    bHYPRE_MPICommunicator__object*,struct sidl_BaseInterface__object **)) 
    epv->f_SetCommunicator;
  e0->f_Destroy                  = (void (*)(void*,struct 
    sidl_BaseInterface__object **)) epv->f_Destroy;
  e0->f_SetIntParameter          = (int32_t (*)(void*,const char*,int32_t,
    struct sidl_BaseInterface__object **)) epv->f_SetIntParameter;
  e0->f_SetDoubleParameter       = (int32_t (*)(void*,const char*,double,struct 
    sidl_BaseInterface__object **)) epv->f_SetDoubleParameter;
  e0->f_SetStringParameter       = (int32_t (*)(void*,const char*,const char*,
    struct sidl_BaseInterface__object **)) epv->f_SetStringParameter;
  e0->f_SetIntArray1Parameter    = (int32_t (*)(void*,const char*,struct 
    sidl_int__array*,struct sidl_BaseInterface__object **)) 
    epv->f_SetIntArray1Parameter;
  e0->f_SetIntArray2Parameter    = (int32_t (*)(void*,const char*,struct 
    sidl_int__array*,struct sidl_BaseInterface__object **)) 
    epv->f_SetIntArray2Parameter;
  e0->f_SetDoubleArray1Parameter = (int32_t (*)(void*,const char*,struct 
    sidl_double__array*,struct sidl_BaseInterface__object **)) 
    epv->f_SetDoubleArray1Parameter;
  e0->f_SetDoubleArray2Parameter = (int32_t (*)(void*,const char*,struct 
    sidl_double__array*,struct sidl_BaseInterface__object **)) 
    epv->f_SetDoubleArray2Parameter;
  e0->f_GetIntValue              = (int32_t (*)(void*,const char*,int32_t*,
    struct sidl_BaseInterface__object **)) epv->f_GetIntValue;
  e0->f_GetDoubleValue           = (int32_t (*)(void*,const char*,double*,
    struct sidl_BaseInterface__object **)) epv->f_GetDoubleValue;
  e0->f_Setup                    = (int32_t (*)(void*,struct 
    bHYPRE_Vector__object*,struct bHYPRE_Vector__object*,struct 
    sidl_BaseInterface__object **)) epv->f_Setup;
  e0->f_Apply                    = (int32_t (*)(void*,struct 
    bHYPRE_Vector__object*,struct bHYPRE_Vector__object**,struct 
    sidl_BaseInterface__object **)) epv->f_Apply;
  e0->f_ApplyAdjoint             = (int32_t (*)(void*,struct 
    bHYPRE_Vector__object*,struct bHYPRE_Vector__object**,struct 
    sidl_BaseInterface__object **)) epv->f_ApplyAdjoint;
  e0->f_addRef                   = (void (*)(void*,struct 
    sidl_BaseInterface__object **)) epv->f_addRef;
  e0->f_deleteRef                = (void (*)(void*,struct 
    sidl_BaseInterface__object **)) epv->f_deleteRef;
  e0->f_isSame                   = (sidl_bool (*)(void*,struct 
    sidl_BaseInterface__object*,struct sidl_BaseInterface__object **)) 
    epv->f_isSame;
  e0->f_isType                   = (sidl_bool (*)(void*,const char*,struct 
    sidl_BaseInterface__object **)) epv->f_isType;
  e0->f_getClassInfo             = (struct sidl_ClassInfo__object* (*)(void*,
    struct sidl_BaseInterface__object **)) epv->f_getClassInfo;

  e1->f__cast                    = (void* (*)(void*,const char*,
    sidl_BaseInterface*)) epv->f__cast;
  e1->f__delete                  = (void (*)(void*,sidl_BaseInterface*)) 
    epv->f__delete;
  e1->f__getURL                  = (char* (*)(void*,sidl_BaseInterface*)) 
    epv->f__getURL;
  e1->f__raddRef                 = (void (*)(void*,sidl_BaseInterface*)) 
    epv->f__raddRef;
  e1->f__isRemote                = (sidl_bool (*)(void*,sidl_BaseInterface*)) 
    epv->f__isRemote;
  e1->f__set_hooks               = (void (*)(void*,int32_t, 
    sidl_BaseInterface*)) epv->f__set_hooks;
  e1->f__exec                    = (void (*)(void*,const char*,struct 
    sidl_rmi_Call__object*,struct sidl_rmi_Return__object*,struct 
    sidl_BaseInterface__object **)) epv->f__exec;
  e1->f_SetOperator              = (int32_t (*)(void*,struct 
    bHYPRE_Operator__object*,struct sidl_BaseInterface__object **)) 
    epv->f_SetOperator;
  e1->f_SetTolerance             = (int32_t (*)(void*,double,struct 
    sidl_BaseInterface__object **)) epv->f_SetTolerance;
  e1->f_SetMaxIterations         = (int32_t (*)(void*,int32_t,struct 
    sidl_BaseInterface__object **)) epv->f_SetMaxIterations;
  e1->f_SetLogging               = (int32_t (*)(void*,int32_t,struct 
    sidl_BaseInterface__object **)) epv->f_SetLogging;
  e1->f_SetPrintLevel            = (int32_t (*)(void*,int32_t,struct 
    sidl_BaseInterface__object **)) epv->f_SetPrintLevel;
  e1->f_GetNumIterations         = (int32_t (*)(void*,int32_t*,struct 
    sidl_BaseInterface__object **)) epv->f_GetNumIterations;
  e1->f_GetRelResidualNorm       = (int32_t (*)(void*,double*,struct 
    sidl_BaseInterface__object **)) epv->f_GetRelResidualNorm;
  e1->f_SetCommunicator          = (int32_t (*)(void*,struct 
    bHYPRE_MPICommunicator__object*,struct sidl_BaseInterface__object **)) 
    epv->f_SetCommunicator;
  e1->f_Destroy                  = (void (*)(void*,struct 
    sidl_BaseInterface__object **)) epv->f_Destroy;
  e1->f_SetIntParameter          = (int32_t (*)(void*,const char*,int32_t,
    struct sidl_BaseInterface__object **)) epv->f_SetIntParameter;
  e1->f_SetDoubleParameter       = (int32_t (*)(void*,const char*,double,struct 
    sidl_BaseInterface__object **)) epv->f_SetDoubleParameter;
  e1->f_SetStringParameter       = (int32_t (*)(void*,const char*,const char*,
    struct sidl_BaseInterface__object **)) epv->f_SetStringParameter;
  e1->f_SetIntArray1Parameter    = (int32_t (*)(void*,const char*,struct 
    sidl_int__array*,struct sidl_BaseInterface__object **)) 
    epv->f_SetIntArray1Parameter;
  e1->f_SetIntArray2Parameter    = (int32_t (*)(void*,const char*,struct 
    sidl_int__array*,struct sidl_BaseInterface__object **)) 
    epv->f_SetIntArray2Parameter;
  e1->f_SetDoubleArray1Parameter = (int32_t (*)(void*,const char*,struct 
    sidl_double__array*,struct sidl_BaseInterface__object **)) 
    epv->f_SetDoubleArray1Parameter;
  e1->f_SetDoubleArray2Parameter = (int32_t (*)(void*,const char*,struct 
    sidl_double__array*,struct sidl_BaseInterface__object **)) 
    epv->f_SetDoubleArray2Parameter;
  e1->f_GetIntValue              = (int32_t (*)(void*,const char*,int32_t*,
    struct sidl_BaseInterface__object **)) epv->f_GetIntValue;
  e1->f_GetDoubleValue           = (int32_t (*)(void*,const char*,double*,
    struct sidl_BaseInterface__object **)) epv->f_GetDoubleValue;
  e1->f_Setup                    = (int32_t (*)(void*,struct 
    bHYPRE_Vector__object*,struct bHYPRE_Vector__object*,struct 
    sidl_BaseInterface__object **)) epv->f_Setup;
  e1->f_Apply                    = (int32_t (*)(void*,struct 
    bHYPRE_Vector__object*,struct bHYPRE_Vector__object**,struct 
    sidl_BaseInterface__object **)) epv->f_Apply;
  e1->f_ApplyAdjoint             = (int32_t (*)(void*,struct 
    bHYPRE_Vector__object*,struct bHYPRE_Vector__object**,struct 
    sidl_BaseInterface__object **)) epv->f_ApplyAdjoint;
  e1->f_addRef                   = (void (*)(void*,struct 
    sidl_BaseInterface__object **)) epv->f_addRef;
  e1->f_deleteRef                = (void (*)(void*,struct 
    sidl_BaseInterface__object **)) epv->f_deleteRef;
  e1->f_isSame                   = (sidl_bool (*)(void*,struct 
    sidl_BaseInterface__object*,struct sidl_BaseInterface__object **)) 
    epv->f_isSame;
  e1->f_isType                   = (sidl_bool (*)(void*,const char*,struct 
    sidl_BaseInterface__object **)) epv->f_isType;
  e1->f_getClassInfo             = (struct sidl_ClassInfo__object* (*)(void*,
    struct sidl_BaseInterface__object **)) epv->f_getClassInfo;

  e2->f__cast        = (void* (*)(struct sidl_BaseClass__object*,const char*,
    sidl_BaseInterface*)) epv->f__cast;
  e2->f__delete      = (void (*)(struct sidl_BaseClass__object*,
    sidl_BaseInterface*)) epv->f__delete;
  e2->f__getURL      = (char* (*)(struct sidl_BaseClass__object*,
    sidl_BaseInterface*)) epv->f__getURL;
  e2->f__raddRef     = (void (*)(struct sidl_BaseClass__object*,
    sidl_BaseInterface*)) epv->f__raddRef;
  e2->f__isRemote    = (sidl_bool (*)(struct sidl_BaseClass__object*,
    sidl_BaseInterface*)) epv->f__isRemote;
  e2->f__set_hooks   = (void (*)(struct sidl_BaseClass__object*,int32_t, 
    sidl_BaseInterface*)) epv->f__set_hooks;
  e2->f__exec        = (void (*)(struct sidl_BaseClass__object*,const char*,
    struct sidl_rmi_Call__object*,struct sidl_rmi_Return__object*,struct 
    sidl_BaseInterface__object **)) epv->f__exec;
  e2->f_addRef       = (void (*)(struct sidl_BaseClass__object*,struct 
    sidl_BaseInterface__object **)) epv->f_addRef;
  e2->f_deleteRef    = (void (*)(struct sidl_BaseClass__object*,struct 
    sidl_BaseInterface__object **)) epv->f_deleteRef;
  e2->f_isSame       = (sidl_bool (*)(struct sidl_BaseClass__object*,struct 
    sidl_BaseInterface__object*,struct sidl_BaseInterface__object **)) 
    epv->f_isSame;
  e2->f_isType       = (sidl_bool (*)(struct sidl_BaseClass__object*,const 
    char*,struct sidl_BaseInterface__object **)) epv->f_isType;
  e2->f_getClassInfo = (struct sidl_ClassInfo__object* (*)(struct 
    sidl_BaseClass__object*,struct sidl_BaseInterface__object **)) 
    epv->f_getClassInfo;

  e3->f__cast        = (void* (*)(void*,const char*,sidl_BaseInterface*)) 
    epv->f__cast;
  e3->f__delete      = (void (*)(void*,sidl_BaseInterface*)) epv->f__delete;
  e3->f__getURL      = (char* (*)(void*,sidl_BaseInterface*)) epv->f__getURL;
  e3->f__raddRef     = (void (*)(void*,sidl_BaseInterface*)) epv->f__raddRef;
  e3->f__isRemote    = (sidl_bool (*)(void*,sidl_BaseInterface*)) 
    epv->f__isRemote;
  e3->f__set_hooks   = (void (*)(void*,int32_t, sidl_BaseInterface*)) 
    epv->f__set_hooks;
  e3->f__exec        = (void (*)(void*,const char*,struct 
    sidl_rmi_Call__object*,struct sidl_rmi_Return__object*,struct 
    sidl_BaseInterface__object **)) epv->f__exec;
  e3->f_addRef       = (void (*)(void*,struct sidl_BaseInterface__object **)) 
    epv->f_addRef;
  e3->f_deleteRef    = (void (*)(void*,struct sidl_BaseInterface__object **)) 
    epv->f_deleteRef;
  e3->f_isSame       = (sidl_bool (*)(void*,struct sidl_BaseInterface__object*,
    struct sidl_BaseInterface__object **)) epv->f_isSame;
  e3->f_isType       = (sidl_bool (*)(void*,const char*,struct 
    sidl_BaseInterface__object **)) epv->f_isType;
  e3->f_getClassInfo = (struct sidl_ClassInfo__object* (*)(void*,struct 
    sidl_BaseInterface__object **)) epv->f_getClassInfo;

  s_remote_initialized = 1;
}

/* Create an instance that connects to an existing remote object. */
static struct bHYPRE_StructJacobi__object*
bHYPRE_StructJacobi__remoteConnect(const char *url, sidl_bool ar, 
  sidl_BaseInterface *_ex)
{
  struct bHYPRE_StructJacobi__object* self;

  struct bHYPRE_StructJacobi__object* s0;
  struct sidl_BaseClass__object* s1;

  struct bHYPRE_StructJacobi__remote* r_obj;
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
    return bHYPRE_StructJacobi__rmicast(bi,_ex);SIDL_CHECK(*_ex);
  }
  instance = sidl_rmi_ProtocolFactory_connectInstance(url, ar, _ex ); 
    SIDL_CHECK(*_ex);
  if ( instance == NULL) { return NULL; }
  self =
    (struct bHYPRE_StructJacobi__object*) malloc(
      sizeof(struct bHYPRE_StructJacobi__object));

  r_obj =
    (struct bHYPRE_StructJacobi__remote*) malloc(
      sizeof(struct bHYPRE_StructJacobi__remote));

  r_obj->d_refcount = 1;
  r_obj->d_ih = instance;
  s0 =                               self;
  s1 =                               &s0->d_sidl_baseclass;

  LOCK_STATIC_GLOBALS;
  if (!s_remote_initialized) {
    bHYPRE_StructJacobi__init_remote_epv();
  }
  UNLOCK_STATIC_GLOBALS;

  s1->d_sidl_baseinterface.d_epv    = &s_rem_epv__sidl_baseinterface;
  s1->d_sidl_baseinterface.d_object = (void*) self;

  s1->d_data = (void*) r_obj;
  s1->d_epv  = &s_rem_epv__sidl_baseclass;

  s0->d_bhypre_operator.d_epv    = &s_rem_epv__bhypre_operator;
  s0->d_bhypre_operator.d_object = (void*) self;

  s0->d_bhypre_solver.d_epv    = &s_rem_epv__bhypre_solver;
  s0->d_bhypre_solver.d_object = (void*) self;

  s0->d_data = (void*) r_obj;
  s0->d_epv  = &s_rem_epv__bhypre_structjacobi;

  self->d_data = (void*) r_obj;

  return self;
  EXIT:
  return NULL;
}
/* Create an instance that uses an already existing  */
/* InstanceHandle to connect to an existing remote object. */
static struct bHYPRE_StructJacobi__object*
bHYPRE_StructJacobi__IHConnect(sidl_rmi_InstanceHandle instance, 
  sidl_BaseInterface *_ex)
{
  struct bHYPRE_StructJacobi__object* self;

  struct bHYPRE_StructJacobi__object* s0;
  struct sidl_BaseClass__object* s1;

  struct bHYPRE_StructJacobi__remote* r_obj;
  self =
    (struct bHYPRE_StructJacobi__object*) malloc(
      sizeof(struct bHYPRE_StructJacobi__object));

  r_obj =
    (struct bHYPRE_StructJacobi__remote*) malloc(
      sizeof(struct bHYPRE_StructJacobi__remote));

  r_obj->d_refcount = 1;
  r_obj->d_ih = instance;
  s0 =                               self;
  s1 =                               &s0->d_sidl_baseclass;

  LOCK_STATIC_GLOBALS;
  if (!s_remote_initialized) {
    bHYPRE_StructJacobi__init_remote_epv();
  }
  UNLOCK_STATIC_GLOBALS;

  s1->d_sidl_baseinterface.d_epv    = &s_rem_epv__sidl_baseinterface;
  s1->d_sidl_baseinterface.d_object = (void*) self;

  s1->d_data = (void*) r_obj;
  s1->d_epv  = &s_rem_epv__sidl_baseclass;

  s0->d_bhypre_operator.d_epv    = &s_rem_epv__bhypre_operator;
  s0->d_bhypre_operator.d_object = (void*) self;

  s0->d_bhypre_solver.d_epv    = &s_rem_epv__bhypre_solver;
  s0->d_bhypre_solver.d_object = (void*) self;

  s0->d_data = (void*) r_obj;
  s0->d_epv  = &s_rem_epv__bhypre_structjacobi;

  self->d_data = (void*) r_obj;

  sidl_rmi_InstanceHandle_addRef(instance,_ex);SIDL_CHECK(*_ex);
  return self;
  EXIT:
  return NULL;
}
/* REMOTE: generate remote instance given URL string. */
static struct bHYPRE_StructJacobi__object*
bHYPRE_StructJacobi__remoteCreate(const char *url, sidl_BaseInterface *_ex)
{
  sidl_BaseInterface _throwaway_exception = NULL;
  struct bHYPRE_StructJacobi__object* self;

  struct bHYPRE_StructJacobi__object* s0;
  struct sidl_BaseClass__object* s1;

  struct bHYPRE_StructJacobi__remote* r_obj;
  sidl_rmi_InstanceHandle instance = sidl_rmi_ProtocolFactory_createInstance(
    url, "bHYPRE.StructJacobi", _ex ); SIDL_CHECK(*_ex);
  if ( instance == NULL) { return NULL; }
  self =
    (struct bHYPRE_StructJacobi__object*) malloc(
      sizeof(struct bHYPRE_StructJacobi__object));

  r_obj =
    (struct bHYPRE_StructJacobi__remote*) malloc(
      sizeof(struct bHYPRE_StructJacobi__remote));

  r_obj->d_refcount = 1;
  r_obj->d_ih = instance;
  s0 =                               self;
  s1 =                               &s0->d_sidl_baseclass;

  LOCK_STATIC_GLOBALS;
  if (!s_remote_initialized) {
    bHYPRE_StructJacobi__init_remote_epv();
  }
  UNLOCK_STATIC_GLOBALS;

  s1->d_sidl_baseinterface.d_epv    = &s_rem_epv__sidl_baseinterface;
  s1->d_sidl_baseinterface.d_object = (void*) self;

  s1->d_data = (void*) r_obj;
  s1->d_epv  = &s_rem_epv__sidl_baseclass;

  s0->d_bhypre_operator.d_epv    = &s_rem_epv__bhypre_operator;
  s0->d_bhypre_operator.d_object = (void*) self;

  s0->d_bhypre_solver.d_epv    = &s_rem_epv__bhypre_solver;
  s0->d_bhypre_solver.d_object = (void*) self;

  s0->d_data = (void*) r_obj;
  s0->d_epv  = &s_rem_epv__bhypre_structjacobi;

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

struct bHYPRE_StructJacobi__object*
bHYPRE_StructJacobi__rmicast(
  void* obj,
  sidl_BaseInterface* _ex)
{
  struct bHYPRE_StructJacobi__object* cast = NULL;

  *_ex = NULL;
  if(!connect_loaded) {
    sidl_rmi_ConnectRegistry_registerConnect("bHYPRE.StructJacobi", (
      void*)bHYPRE_StructJacobi__IHConnect, _ex);
    connect_loaded = 1;
  }
  if (obj != NULL) {
    struct sidl_BaseInterface__object* base = (struct 
      sidl_BaseInterface__object*) obj;
    cast = (struct bHYPRE_StructJacobi__object*) (*base->d_epv->f__cast)(
      base->d_object,
      "bHYPRE.StructJacobi", _ex); SIDL_CHECK(*_ex);
  }

  return cast;
  EXIT:
  return NULL;
}

/*
 * RMI connector function for the class.
 */

struct bHYPRE_StructJacobi__object*
bHYPRE_StructJacobi__connectI(const char* url, sidl_bool ar, struct 
  sidl_BaseInterface__object **_ex)
{
  return bHYPRE_StructJacobi__remoteConnect(url, ar, _ex);
}

