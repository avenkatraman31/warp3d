/*
 * File:          sidl_rmi_Invocation.h
 * Symbol:        sidl.rmi.Invocation-v0.9.15
 * Symbol Type:   interface
 * Babel Version: 1.0.4
 * Release:       $Name: V2-9-0b $
 * Revision:      @(#) $Id: sidl_rmi_Invocation.h,v 1.6 2007/09/27 19:35:46 painter Exp $
 * Description:   Client-side glue code for sidl.rmi.Invocation
 * 
 * Copyright (c) 2000-2002, The Regents of the University of California.
 * Produced at the Lawrence Livermore National Laboratory.
 * Written by the Components Team <components@llnl.gov>
 * All rights reserved.
 * 
 * This file is part of Babel. For more information, see
 * http://www.llnl.gov/CASC/components/. Please read the COPYRIGHT file
 * for Our Notice and the LICENSE file for the GNU Lesser General Public
 * License.
 * 
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License (as published by
 * the Free Software Foundation) version 2.1 dated February 1999.
 * 
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the IMPLIED WARRANTY OF
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the terms and
 * conditions of the GNU Lesser General Public License for more details.
 * 
 * You should have recieved a copy of the GNU Lesser General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 * 
 * WARNING: Automatically generated; changes will be lost
 * 
 */

#ifndef included_sidl_rmi_Invocation_h
#define included_sidl_rmi_Invocation_h

/**
 * Symbol "sidl.rmi.Invocation" (version 0.9.15)
 * 
 * This type is used to pack arguments and make the Client->Server 
 * method invocation.
 */
struct sidl_rmi_Invocation__object;
struct sidl_rmi_Invocation__array;
typedef struct sidl_rmi_Invocation__object* sidl_rmi_Invocation;

/*
 * Includes for all header dependencies.
 */

#ifndef included_sidl_header_h
#include "sidl_header.h"
#endif
#ifndef included_sidl_BaseException_h
#include "sidl_BaseException.h"
#endif
#ifndef included_sidl_BaseInterface_h
#include "sidl_BaseInterface.h"
#endif
#ifndef included_sidl_ClassInfo_h
#include "sidl_ClassInfo.h"
#endif
#ifndef included_sidl_RuntimeException_h
#include "sidl_RuntimeException.h"
#endif
#ifndef included_sidl_SIDLException_h
#include "sidl_SIDLException.h"
#endif
#ifndef included_sidl_io_Serializable_h
#include "sidl_io_Serializable.h"
#endif
#ifndef included_sidl_rmi_Response_h
#include "sidl_rmi_Response.h"
#endif
#ifndef included_sidl_rmi_Ticket_h
#include "sidl_rmi_Ticket.h"
#endif

#ifndef included_sidl_rmi_Call_h
#include "sidl_rmi_Call.h"
#endif
#ifndef included_sidl_rmi_Return_h
#include "sidl_rmi_Return.h"
#endif
#ifdef SIDL_C_HAS_INLINE
#ifndef included_sidl_rmi_Invocation_IOR_h
#include "sidl_rmi_Invocation_IOR.h"
#endif
#endif /* SIDL_C_HAS_INLINE */
#ifdef __cplusplus
extern "C" {
#endif

/**
 * RMI connector function for the class.(addrefs)
 */
sidl_rmi_Invocation
sidl_rmi_Invocation__connect(const char *, sidl_BaseInterface *_ex);

/**
 *  
 * this method is one of a triad.  Only one of which 
 * may be called, and it must the the last method called
 * in the object's lifetime.
 */
SIDL_C_INLINE_DECL
sidl_rmi_Response
sidl_rmi_Invocation_invokeMethod(
  /* in */ sidl_rmi_Invocation self,
  /* out */ sidl_BaseInterface *_ex)
#ifdef SIDL_C_HAS_INLINE
{
  sidl_rmi_Response _result;
  _result = (*self->d_epv->f_invokeMethod)(
    self->d_object,
    _ex);
  return _result;
}
#else
;
#endif /* SIDL_C_HAS_INLINE */


/**
 * This method is second of the triad.  It returns
 * a Ticket, from which a Response is later extracted.
 */
SIDL_C_INLINE_DECL
sidl_rmi_Ticket
sidl_rmi_Invocation_invokeNonblocking(
  /* in */ sidl_rmi_Invocation self,
  /* out */ sidl_BaseInterface *_ex)
#ifdef SIDL_C_HAS_INLINE
{
  sidl_rmi_Ticket _result;
  _result = (*self->d_epv->f_invokeNonblocking)(
    self->d_object,
    _ex);
  return _result;
}
#else
;
#endif /* SIDL_C_HAS_INLINE */


/**
 * This method is third of the triad.  It returns
 * and exception iff the invocation cannot be delivered
 * reliably.  It does not wait for the invocation to 
 * be acted upon and returns no values from the invocation.
 */
SIDL_C_INLINE_DECL
void
sidl_rmi_Invocation_invokeOneWay(
  /* in */ sidl_rmi_Invocation self,
  /* out */ sidl_BaseInterface *_ex)
#ifdef SIDL_C_HAS_INLINE
{
  (*self->d_epv->f_invokeOneWay)(
    self->d_object,
    _ex);
}
#else
;
#endif /* SIDL_C_HAS_INLINE */


/**
 * Method:  packBool[]
 */
SIDL_C_INLINE_DECL
void
sidl_rmi_Invocation_packBool(
  /* in */ sidl_rmi_Invocation self,
  /* in */ const char* key,
  /* in */ sidl_bool value,
  /* out */ sidl_BaseInterface *_ex)
#ifdef SIDL_C_HAS_INLINE
{
  (*self->d_epv->f_packBool)(
    self->d_object,
    key,
    value,
    _ex);
}
#else
;
#endif /* SIDL_C_HAS_INLINE */


/**
 * Method:  packChar[]
 */
SIDL_C_INLINE_DECL
void
sidl_rmi_Invocation_packChar(
  /* in */ sidl_rmi_Invocation self,
  /* in */ const char* key,
  /* in */ char value,
  /* out */ sidl_BaseInterface *_ex)
#ifdef SIDL_C_HAS_INLINE
{
  (*self->d_epv->f_packChar)(
    self->d_object,
    key,
    value,
    _ex);
}
#else
;
#endif /* SIDL_C_HAS_INLINE */


/**
 * Method:  packInt[]
 */
SIDL_C_INLINE_DECL
void
sidl_rmi_Invocation_packInt(
  /* in */ sidl_rmi_Invocation self,
  /* in */ const char* key,
  /* in */ int32_t value,
  /* out */ sidl_BaseInterface *_ex)
#ifdef SIDL_C_HAS_INLINE
{
  (*self->d_epv->f_packInt)(
    self->d_object,
    key,
    value,
    _ex);
}
#else
;
#endif /* SIDL_C_HAS_INLINE */


/**
 * Method:  packLong[]
 */
SIDL_C_INLINE_DECL
void
sidl_rmi_Invocation_packLong(
  /* in */ sidl_rmi_Invocation self,
  /* in */ const char* key,
  /* in */ int64_t value,
  /* out */ sidl_BaseInterface *_ex)
#ifdef SIDL_C_HAS_INLINE
{
  (*self->d_epv->f_packLong)(
    self->d_object,
    key,
    value,
    _ex);
}
#else
;
#endif /* SIDL_C_HAS_INLINE */


/**
 * Method:  packOpaque[]
 */
SIDL_C_INLINE_DECL
void
sidl_rmi_Invocation_packOpaque(
  /* in */ sidl_rmi_Invocation self,
  /* in */ const char* key,
  /* in */ void* value,
  /* out */ sidl_BaseInterface *_ex)
#ifdef SIDL_C_HAS_INLINE
{
  (*self->d_epv->f_packOpaque)(
    self->d_object,
    key,
    value,
    _ex);
}
#else
;
#endif /* SIDL_C_HAS_INLINE */


/**
 * Method:  packFloat[]
 */
SIDL_C_INLINE_DECL
void
sidl_rmi_Invocation_packFloat(
  /* in */ sidl_rmi_Invocation self,
  /* in */ const char* key,
  /* in */ float value,
  /* out */ sidl_BaseInterface *_ex)
#ifdef SIDL_C_HAS_INLINE
{
  (*self->d_epv->f_packFloat)(
    self->d_object,
    key,
    value,
    _ex);
}
#else
;
#endif /* SIDL_C_HAS_INLINE */


/**
 * Method:  packDouble[]
 */
SIDL_C_INLINE_DECL
void
sidl_rmi_Invocation_packDouble(
  /* in */ sidl_rmi_Invocation self,
  /* in */ const char* key,
  /* in */ double value,
  /* out */ sidl_BaseInterface *_ex)
#ifdef SIDL_C_HAS_INLINE
{
  (*self->d_epv->f_packDouble)(
    self->d_object,
    key,
    value,
    _ex);
}
#else
;
#endif /* SIDL_C_HAS_INLINE */


/**
 * Method:  packFcomplex[]
 */
SIDL_C_INLINE_DECL
void
sidl_rmi_Invocation_packFcomplex(
  /* in */ sidl_rmi_Invocation self,
  /* in */ const char* key,
  /* in */ struct sidl_fcomplex value,
  /* out */ sidl_BaseInterface *_ex)
#ifdef SIDL_C_HAS_INLINE
{
  (*self->d_epv->f_packFcomplex)(
    self->d_object,
    key,
    value,
    _ex);
}
#else
;
#endif /* SIDL_C_HAS_INLINE */


/**
 * Method:  packDcomplex[]
 */
SIDL_C_INLINE_DECL
void
sidl_rmi_Invocation_packDcomplex(
  /* in */ sidl_rmi_Invocation self,
  /* in */ const char* key,
  /* in */ struct sidl_dcomplex value,
  /* out */ sidl_BaseInterface *_ex)
#ifdef SIDL_C_HAS_INLINE
{
  (*self->d_epv->f_packDcomplex)(
    self->d_object,
    key,
    value,
    _ex);
}
#else
;
#endif /* SIDL_C_HAS_INLINE */


/**
 * Method:  packString[]
 */
SIDL_C_INLINE_DECL
void
sidl_rmi_Invocation_packString(
  /* in */ sidl_rmi_Invocation self,
  /* in */ const char* key,
  /* in */ const char* value,
  /* out */ sidl_BaseInterface *_ex)
#ifdef SIDL_C_HAS_INLINE
{
  (*self->d_epv->f_packString)(
    self->d_object,
    key,
    value,
    _ex);
}
#else
;
#endif /* SIDL_C_HAS_INLINE */


/**
 * Method:  packSerializable[]
 */
SIDL_C_INLINE_DECL
void
sidl_rmi_Invocation_packSerializable(
  /* in */ sidl_rmi_Invocation self,
  /* in */ const char* key,
  /* in */ sidl_io_Serializable value,
  /* out */ sidl_BaseInterface *_ex)
#ifdef SIDL_C_HAS_INLINE
{
  (*self->d_epv->f_packSerializable)(
    self->d_object,
    key,
    value,
    _ex);
}
#else
;
#endif /* SIDL_C_HAS_INLINE */


/**
 *  
 * pack arrays of values.  It is possible to ensure an array is
 * in a certain order by passing in ordering and dimension
 * requirements.  ordering should represent a value in the
 * sidl_array_ordering enumeration in sidlArray.h If either
 * argument is 0, it means there is no restriction on that
 * aspect.  The boolean reuse_array flag is set to true if the
 * remote unserializer should try to reuse the array that is
 * passed into it or not.
 */
SIDL_C_INLINE_DECL
void
sidl_rmi_Invocation_packBoolArray(
  /* in */ sidl_rmi_Invocation self,
  /* in */ const char* key,
  /* in array<bool> */ struct sidl_bool__array* value,
  /* in */ int32_t ordering,
  /* in */ int32_t dimen,
  /* in */ sidl_bool reuse_array,
  /* out */ sidl_BaseInterface *_ex)
#ifdef SIDL_C_HAS_INLINE
{
  (*self->d_epv->f_packBoolArray)(
    self->d_object,
    key,
    value,
    ordering,
    dimen,
    reuse_array,
    _ex);
}
#else
;
#endif /* SIDL_C_HAS_INLINE */


/**
 * Method:  packCharArray[]
 */
SIDL_C_INLINE_DECL
void
sidl_rmi_Invocation_packCharArray(
  /* in */ sidl_rmi_Invocation self,
  /* in */ const char* key,
  /* in array<char> */ struct sidl_char__array* value,
  /* in */ int32_t ordering,
  /* in */ int32_t dimen,
  /* in */ sidl_bool reuse_array,
  /* out */ sidl_BaseInterface *_ex)
#ifdef SIDL_C_HAS_INLINE
{
  (*self->d_epv->f_packCharArray)(
    self->d_object,
    key,
    value,
    ordering,
    dimen,
    reuse_array,
    _ex);
}
#else
;
#endif /* SIDL_C_HAS_INLINE */


/**
 * Method:  packIntArray[]
 */
SIDL_C_INLINE_DECL
void
sidl_rmi_Invocation_packIntArray(
  /* in */ sidl_rmi_Invocation self,
  /* in */ const char* key,
  /* in array<int> */ struct sidl_int__array* value,
  /* in */ int32_t ordering,
  /* in */ int32_t dimen,
  /* in */ sidl_bool reuse_array,
  /* out */ sidl_BaseInterface *_ex)
#ifdef SIDL_C_HAS_INLINE
{
  (*self->d_epv->f_packIntArray)(
    self->d_object,
    key,
    value,
    ordering,
    dimen,
    reuse_array,
    _ex);
}
#else
;
#endif /* SIDL_C_HAS_INLINE */


/**
 * Method:  packLongArray[]
 */
SIDL_C_INLINE_DECL
void
sidl_rmi_Invocation_packLongArray(
  /* in */ sidl_rmi_Invocation self,
  /* in */ const char* key,
  /* in array<long> */ struct sidl_long__array* value,
  /* in */ int32_t ordering,
  /* in */ int32_t dimen,
  /* in */ sidl_bool reuse_array,
  /* out */ sidl_BaseInterface *_ex)
#ifdef SIDL_C_HAS_INLINE
{
  (*self->d_epv->f_packLongArray)(
    self->d_object,
    key,
    value,
    ordering,
    dimen,
    reuse_array,
    _ex);
}
#else
;
#endif /* SIDL_C_HAS_INLINE */


/**
 * Method:  packOpaqueArray[]
 */
SIDL_C_INLINE_DECL
void
sidl_rmi_Invocation_packOpaqueArray(
  /* in */ sidl_rmi_Invocation self,
  /* in */ const char* key,
  /* in array<opaque> */ struct sidl_opaque__array* value,
  /* in */ int32_t ordering,
  /* in */ int32_t dimen,
  /* in */ sidl_bool reuse_array,
  /* out */ sidl_BaseInterface *_ex)
#ifdef SIDL_C_HAS_INLINE
{
  (*self->d_epv->f_packOpaqueArray)(
    self->d_object,
    key,
    value,
    ordering,
    dimen,
    reuse_array,
    _ex);
}
#else
;
#endif /* SIDL_C_HAS_INLINE */


/**
 * Method:  packFloatArray[]
 */
SIDL_C_INLINE_DECL
void
sidl_rmi_Invocation_packFloatArray(
  /* in */ sidl_rmi_Invocation self,
  /* in */ const char* key,
  /* in array<float> */ struct sidl_float__array* value,
  /* in */ int32_t ordering,
  /* in */ int32_t dimen,
  /* in */ sidl_bool reuse_array,
  /* out */ sidl_BaseInterface *_ex)
#ifdef SIDL_C_HAS_INLINE
{
  (*self->d_epv->f_packFloatArray)(
    self->d_object,
    key,
    value,
    ordering,
    dimen,
    reuse_array,
    _ex);
}
#else
;
#endif /* SIDL_C_HAS_INLINE */


/**
 * Method:  packDoubleArray[]
 */
SIDL_C_INLINE_DECL
void
sidl_rmi_Invocation_packDoubleArray(
  /* in */ sidl_rmi_Invocation self,
  /* in */ const char* key,
  /* in array<double> */ struct sidl_double__array* value,
  /* in */ int32_t ordering,
  /* in */ int32_t dimen,
  /* in */ sidl_bool reuse_array,
  /* out */ sidl_BaseInterface *_ex)
#ifdef SIDL_C_HAS_INLINE
{
  (*self->d_epv->f_packDoubleArray)(
    self->d_object,
    key,
    value,
    ordering,
    dimen,
    reuse_array,
    _ex);
}
#else
;
#endif /* SIDL_C_HAS_INLINE */


/**
 * Method:  packFcomplexArray[]
 */
SIDL_C_INLINE_DECL
void
sidl_rmi_Invocation_packFcomplexArray(
  /* in */ sidl_rmi_Invocation self,
  /* in */ const char* key,
  /* in array<fcomplex> */ struct sidl_fcomplex__array* value,
  /* in */ int32_t ordering,
  /* in */ int32_t dimen,
  /* in */ sidl_bool reuse_array,
  /* out */ sidl_BaseInterface *_ex)
#ifdef SIDL_C_HAS_INLINE
{
  (*self->d_epv->f_packFcomplexArray)(
    self->d_object,
    key,
    value,
    ordering,
    dimen,
    reuse_array,
    _ex);
}
#else
;
#endif /* SIDL_C_HAS_INLINE */


/**
 * Method:  packDcomplexArray[]
 */
SIDL_C_INLINE_DECL
void
sidl_rmi_Invocation_packDcomplexArray(
  /* in */ sidl_rmi_Invocation self,
  /* in */ const char* key,
  /* in array<dcomplex> */ struct sidl_dcomplex__array* value,
  /* in */ int32_t ordering,
  /* in */ int32_t dimen,
  /* in */ sidl_bool reuse_array,
  /* out */ sidl_BaseInterface *_ex)
#ifdef SIDL_C_HAS_INLINE
{
  (*self->d_epv->f_packDcomplexArray)(
    self->d_object,
    key,
    value,
    ordering,
    dimen,
    reuse_array,
    _ex);
}
#else
;
#endif /* SIDL_C_HAS_INLINE */


/**
 * Method:  packStringArray[]
 */
SIDL_C_INLINE_DECL
void
sidl_rmi_Invocation_packStringArray(
  /* in */ sidl_rmi_Invocation self,
  /* in */ const char* key,
  /* in array<string> */ struct sidl_string__array* value,
  /* in */ int32_t ordering,
  /* in */ int32_t dimen,
  /* in */ sidl_bool reuse_array,
  /* out */ sidl_BaseInterface *_ex)
#ifdef SIDL_C_HAS_INLINE
{
  (*self->d_epv->f_packStringArray)(
    self->d_object,
    key,
    value,
    ordering,
    dimen,
    reuse_array,
    _ex);
}
#else
;
#endif /* SIDL_C_HAS_INLINE */


/**
 * Method:  packGenericArray[]
 */
SIDL_C_INLINE_DECL
void
sidl_rmi_Invocation_packGenericArray(
  /* in */ sidl_rmi_Invocation self,
  /* in */ const char* key,
  /* in array<> */ struct sidl__array* value,
  /* in */ sidl_bool reuse_array,
  /* out */ sidl_BaseInterface *_ex)
#ifdef SIDL_C_HAS_INLINE
{
  (*self->d_epv->f_packGenericArray)(
    self->d_object,
    key,
    value,
    reuse_array,
    _ex);
}
#else
;
#endif /* SIDL_C_HAS_INLINE */


/**
 * Method:  packSerializableArray[]
 */
SIDL_C_INLINE_DECL
void
sidl_rmi_Invocation_packSerializableArray(
  /* in */ sidl_rmi_Invocation self,
  /* in */ const char* key,
  /* in array<sidl.io.Serializable> */ struct sidl_io_Serializable__array* 
    value,
  /* in */ int32_t ordering,
  /* in */ int32_t dimen,
  /* in */ sidl_bool reuse_array,
  /* out */ sidl_BaseInterface *_ex)
#ifdef SIDL_C_HAS_INLINE
{
  (*self->d_epv->f_packSerializableArray)(
    self->d_object,
    key,
    value,
    ordering,
    dimen,
    reuse_array,
    _ex);
}
#else
;
#endif /* SIDL_C_HAS_INLINE */


/**
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
SIDL_C_INLINE_DECL
void
sidl_rmi_Invocation_addRef(
  /* in */ sidl_rmi_Invocation self,
  /* out */ sidl_BaseInterface *_ex)
#ifdef SIDL_C_HAS_INLINE
{
  (*self->d_epv->f_addRef)(
    self->d_object,
    _ex);
}
#else
;
#endif /* SIDL_C_HAS_INLINE */


/**
 * Decrease by one the intrinsic reference count in the underlying
 * object, and delete the object if the reference is non-positive.
 * Objects in <code>sidl</code> have an intrinsic reference count.
 * Clients should call this method whenever they remove a
 * reference to an object or interface.
 */
SIDL_C_INLINE_DECL
void
sidl_rmi_Invocation_deleteRef(
  /* in */ sidl_rmi_Invocation self,
  /* out */ sidl_BaseInterface *_ex)
#ifdef SIDL_C_HAS_INLINE
{
  (*self->d_epv->f_deleteRef)(
    self->d_object,
    _ex);
}
#else
;
#endif /* SIDL_C_HAS_INLINE */


/**
 * Return true if and only if <code>obj</code> refers to the same
 * object as this object.
 */
SIDL_C_INLINE_DECL
sidl_bool
sidl_rmi_Invocation_isSame(
  /* in */ sidl_rmi_Invocation self,
  /* in */ sidl_BaseInterface iobj,
  /* out */ sidl_BaseInterface *_ex)
#ifdef SIDL_C_HAS_INLINE
{
  sidl_bool _result;
  _result = (*self->d_epv->f_isSame)(
    self->d_object,
    iobj,
    _ex);
  return _result;
}
#else
;
#endif /* SIDL_C_HAS_INLINE */


/**
 * Return whether this object is an instance of the specified type.
 * The string name must be the <code>sidl</code> type name.  This
 * routine will return <code>true</code> if and only if a cast to
 * the string type name would succeed.
 */
SIDL_C_INLINE_DECL
sidl_bool
sidl_rmi_Invocation_isType(
  /* in */ sidl_rmi_Invocation self,
  /* in */ const char* name,
  /* out */ sidl_BaseInterface *_ex)
#ifdef SIDL_C_HAS_INLINE
{
  sidl_bool _result;
  _result = (*self->d_epv->f_isType)(
    self->d_object,
    name,
    _ex);
  return _result;
}
#else
;
#endif /* SIDL_C_HAS_INLINE */


/**
 * Return the meta-data about the class implementing this interface.
 */
SIDL_C_INLINE_DECL
sidl_ClassInfo
sidl_rmi_Invocation_getClassInfo(
  /* in */ sidl_rmi_Invocation self,
  /* out */ sidl_BaseInterface *_ex)
#ifdef SIDL_C_HAS_INLINE
{
  sidl_ClassInfo _result;
  _result = (*self->d_epv->f_getClassInfo)(
    self->d_object,
    _ex);
  return _result;
}
#else
;
#endif /* SIDL_C_HAS_INLINE */


/**
 * Cast method for interface and class type conversions.
 */
struct sidl_rmi_Invocation__object*
sidl_rmi_Invocation__cast(
  void* obj,
  sidl_BaseInterface* _ex);

/**
 * String cast method for interface and class type conversions.
 */
void*
sidl_rmi_Invocation__cast2(
  void* obj,
  const char* type,
  sidl_BaseInterface *_ex);

/**
 * Select and execute a method by name
 */
SIDL_C_INLINE_DECL
void
sidl_rmi_Invocation__exec(
  /* in */ sidl_rmi_Invocation self,
  /* in */ const char* methodName,
  /* in */ sidl_rmi_Call inArgs,
  /* in */ sidl_rmi_Return outArgs,
  /* out */ sidl_BaseInterface *_ex)
#ifdef SIDL_C_HAS_INLINE
{
  (*self->d_epv->f__exec)(
    self->d_object,
    methodName,
    inArgs,
    outArgs,
    _ex);
}
#else
;
#endif /* SIDL_C_HAS_INLINE */

/**
 * Get the URL of the Implementation of this object (for RMI)
 */
SIDL_C_INLINE_DECL
char*
sidl_rmi_Invocation__getURL(
  /* in */ sidl_rmi_Invocation self,
  /* out */ sidl_BaseInterface *_ex)
#ifdef SIDL_C_HAS_INLINE
{
  char* _result;
  _result = (*self->d_epv->f__getURL)(
    self->d_object,
    _ex);
  return _result;
}
#else
;
#endif /* SIDL_C_HAS_INLINE */

/**
 * On a remote object, addrefs the remote instance.
 */
SIDL_C_INLINE_DECL
void
sidl_rmi_Invocation__raddRef(
  /* in */ sidl_rmi_Invocation self,
  /* out */ sidl_BaseInterface *_ex)
#ifdef SIDL_C_HAS_INLINE
{
  (*self->d_epv->f__raddRef)(
    self->d_object,
    _ex);
}
#else
;
#endif /* SIDL_C_HAS_INLINE */

/**
 * TRUE if this object is remote, false if local
 */
SIDL_C_INLINE_DECL
sidl_bool
sidl_rmi_Invocation__isRemote(
  /* in */ sidl_rmi_Invocation self,
  /* out */ sidl_BaseInterface *_ex)
#ifdef SIDL_C_HAS_INLINE
{
  sidl_bool _result;
  _result = (*self->d_epv->f__isRemote)(
    self->d_object,
    _ex);
  return _result;
}
#else
;
#endif /* SIDL_C_HAS_INLINE */

/**
 * TRUE if this object is remote, false if local
 */
sidl_bool
sidl_rmi_Invocation__isLocal(
  /* in */ sidl_rmi_Invocation self,
  /* out */ sidl_BaseInterface *_ex);
/**
 * Create a contiguous array of the given dimension with specified
 * index bounds in column-major order. This array
 * owns and manages its data.
 * This function initializes the contents of the array to
 * NULL.
 */
struct sidl_rmi_Invocation__array*
sidl_rmi_Invocation__array_createCol(
  int32_t       dimen,
  const int32_t lower[],
  const int32_t upper[]);

/**
 * Create a contiguous array of the given dimension with specified
 * index bounds in row-major order. This array
 * owns and manages its data.
 * This function initializes the contents of the array to
 * NULL.
 */
struct sidl_rmi_Invocation__array*
sidl_rmi_Invocation__array_createRow(
  int32_t       dimen,
  const int32_t lower[],
  const int32_t upper[]);

/**
 * Create a contiguous one-dimensional array with a lower index
 * of 0 and an upper index of len-1. This array
 * owns and manages its data.
 * This function initializes the contents of the array to
 * NULL.
 */
struct sidl_rmi_Invocation__array*
sidl_rmi_Invocation__array_create1d(int32_t len);

/**
 * Create a dense one-dimensional vector with a lower
 * index of 0 and an upper index of len-1. The initial data for this
 * new array is copied from data. This will increment the reference
 * count of each non-NULL object/interface reference in data.
 * 
 * This array owns and manages its data.
 */
struct sidl_rmi_Invocation__array*
sidl_rmi_Invocation__array_create1dInit(
  int32_t len, 
  sidl_rmi_Invocation* data);

/**
 * Create a contiguous two-dimensional array in column-major
 * order with a lower index of (0,0) and an upper index of
 * (m-1,n-1). This array owns and manages its data.
 * This function initializes the contents of the array to
 * NULL.
 */
struct sidl_rmi_Invocation__array*
sidl_rmi_Invocation__array_create2dCol(int32_t m, int32_t n);

/**
 * Create a contiguous two-dimensional array in row-major
 * order with a lower index of (0,0) and an upper index of
 * (m-1,n-1). This array owns and manages its data.
 * This function initializes the contents of the array to
 * NULL.
 */
struct sidl_rmi_Invocation__array*
sidl_rmi_Invocation__array_create2dRow(int32_t m, int32_t n);

/**
 * Create an array that uses data (memory) from another
 * source. The initial contents are determined by the
 * data being borrowed.
 * Any time an element in the borrowed array is replaced
 * via a set call, deleteRef will be called on the
 * value being replaced if it is not NULL.
 */
struct sidl_rmi_Invocation__array*
sidl_rmi_Invocation__array_borrow(
  sidl_rmi_Invocation* firstElement,
  int32_t       dimen,
  const int32_t lower[],
  const int32_t upper[],
  const int32_t stride[]);

/**
 * If array is borrowed, allocate a new self-sufficient
 * array and copy the borrowed array into the new array;
 * otherwise, increment the reference count and return
 * the array passed in. Use this whenever you want to
 * make a copy of a method argument because arrays
 * passed into methods aren't guaranteed to exist after
 * the method call.
 */
struct sidl_rmi_Invocation__array*
sidl_rmi_Invocation__array_smartCopy(
  struct sidl_rmi_Invocation__array *array);

/**
 * Increment the array's internal reference count by one.
 */
void
sidl_rmi_Invocation__array_addRef(
  struct sidl_rmi_Invocation__array* array);

/**
 * Decrement the array's internal reference count by one.
 * If the reference count goes to zero, destroy the array.
 * If the array isn't borrowed, this releases all the
 * object references held by the array.
 */
void
sidl_rmi_Invocation__array_deleteRef(
  struct sidl_rmi_Invocation__array* array);

/**
 * Retrieve element i1 of a(n) 1-dimensional array.
 */
sidl_rmi_Invocation
sidl_rmi_Invocation__array_get1(
  const struct sidl_rmi_Invocation__array* array,
  const int32_t i1);

/**
 * Retrieve element (i1,i2) of a(n) 2-dimensional array.
 */
sidl_rmi_Invocation
sidl_rmi_Invocation__array_get2(
  const struct sidl_rmi_Invocation__array* array,
  const int32_t i1,
  const int32_t i2);

/**
 * Retrieve element (i1,i2,i3) of a(n) 3-dimensional array.
 */
sidl_rmi_Invocation
sidl_rmi_Invocation__array_get3(
  const struct sidl_rmi_Invocation__array* array,
  const int32_t i1,
  const int32_t i2,
  const int32_t i3);

/**
 * Retrieve element (i1,i2,i3,i4) of a(n) 4-dimensional array.
 */
sidl_rmi_Invocation
sidl_rmi_Invocation__array_get4(
  const struct sidl_rmi_Invocation__array* array,
  const int32_t i1,
  const int32_t i2,
  const int32_t i3,
  const int32_t i4);

/**
 * Retrieve element (i1,i2,i3,i4,i5) of a(n) 5-dimensional array.
 */
sidl_rmi_Invocation
sidl_rmi_Invocation__array_get5(
  const struct sidl_rmi_Invocation__array* array,
  const int32_t i1,
  const int32_t i2,
  const int32_t i3,
  const int32_t i4,
  const int32_t i5);

/**
 * Retrieve element (i1,i2,i3,i4,i5,i6) of a(n) 6-dimensional array.
 */
sidl_rmi_Invocation
sidl_rmi_Invocation__array_get6(
  const struct sidl_rmi_Invocation__array* array,
  const int32_t i1,
  const int32_t i2,
  const int32_t i3,
  const int32_t i4,
  const int32_t i5,
  const int32_t i6);

/**
 * Retrieve element (i1,i2,i3,i4,i5,i6,i7) of a(n) 7-dimensional array.
 */
sidl_rmi_Invocation
sidl_rmi_Invocation__array_get7(
  const struct sidl_rmi_Invocation__array* array,
  const int32_t i1,
  const int32_t i2,
  const int32_t i3,
  const int32_t i4,
  const int32_t i5,
  const int32_t i6,
  const int32_t i7);

/**
 * Retrieve element indices of an n-dimensional array.
 * indices is assumed to have the right number of elements
 * for the dimension of array.
 */
sidl_rmi_Invocation
sidl_rmi_Invocation__array_get(
  const struct sidl_rmi_Invocation__array* array,
  const int32_t indices[]);

/**
 * Set element i1 of a(n) 1-dimensional array to value.
 */
void
sidl_rmi_Invocation__array_set1(
  struct sidl_rmi_Invocation__array* array,
  const int32_t i1,
  sidl_rmi_Invocation const value);

/**
 * Set element (i1,i2) of a(n) 2-dimensional array to value.
 */
void
sidl_rmi_Invocation__array_set2(
  struct sidl_rmi_Invocation__array* array,
  const int32_t i1,
  const int32_t i2,
  sidl_rmi_Invocation const value);

/**
 * Set element (i1,i2,i3) of a(n) 3-dimensional array to value.
 */
void
sidl_rmi_Invocation__array_set3(
  struct sidl_rmi_Invocation__array* array,
  const int32_t i1,
  const int32_t i2,
  const int32_t i3,
  sidl_rmi_Invocation const value);

/**
 * Set element (i1,i2,i3,i4) of a(n) 4-dimensional array to value.
 */
void
sidl_rmi_Invocation__array_set4(
  struct sidl_rmi_Invocation__array* array,
  const int32_t i1,
  const int32_t i2,
  const int32_t i3,
  const int32_t i4,
  sidl_rmi_Invocation const value);

/**
 * Set element (i1,i2,i3,i4,i5) of a(n) 5-dimensional array to value.
 */
void
sidl_rmi_Invocation__array_set5(
  struct sidl_rmi_Invocation__array* array,
  const int32_t i1,
  const int32_t i2,
  const int32_t i3,
  const int32_t i4,
  const int32_t i5,
  sidl_rmi_Invocation const value);

/**
 * Set element (i1,i2,i3,i4,i5,i6) of a(n) 6-dimensional array to value.
 */
void
sidl_rmi_Invocation__array_set6(
  struct sidl_rmi_Invocation__array* array,
  const int32_t i1,
  const int32_t i2,
  const int32_t i3,
  const int32_t i4,
  const int32_t i5,
  const int32_t i6,
  sidl_rmi_Invocation const value);

/**
 * Set element (i1,i2,i3,i4,i5,i6,i7) of a(n) 7-dimensional array to value.
 */
void
sidl_rmi_Invocation__array_set7(
  struct sidl_rmi_Invocation__array* array,
  const int32_t i1,
  const int32_t i2,
  const int32_t i3,
  const int32_t i4,
  const int32_t i5,
  const int32_t i6,
  const int32_t i7,
  sidl_rmi_Invocation const value);

/**
 * Set element indices of an n-dimensional array to value.indices is assumed to have the right number of elements
 * for the dimension of array.
 */
void
sidl_rmi_Invocation__array_set(
  struct sidl_rmi_Invocation__array* array,
  const int32_t indices[],
  sidl_rmi_Invocation const value);

/**
 * Return the dimension of array. If the array pointer is
 * NULL, zero is returned.
 */
int32_t
sidl_rmi_Invocation__array_dimen(
  const struct sidl_rmi_Invocation__array* array);

/**
 * Return the lower bound of dimension ind.
 * If ind is not a valid dimension, 0 is returned.
 * The valid range for ind is from 0 to dimen-1.
 */
int32_t
sidl_rmi_Invocation__array_lower(
  const struct sidl_rmi_Invocation__array* array,
  const int32_t ind);

/**
 * Return the upper bound of dimension ind.
 * If ind is not a valid dimension, -1 is returned.
 * The valid range for ind is from 0 to dimen-1.
 */
int32_t
sidl_rmi_Invocation__array_upper(
  const struct sidl_rmi_Invocation__array* array,
  const int32_t ind);

/**
 * Return the length of dimension ind.
 * If ind is not a valid dimension, -1 is returned.
 * The valid range for ind is from 0 to dimen-1.
 */
int32_t
sidl_rmi_Invocation__array_length(
  const struct sidl_rmi_Invocation__array* array,
  const int32_t ind);

/**
 * Return the stride of dimension ind.
 * If ind is not a valid dimension, 0 is returned.
 * The valid range for ind is from 0 to dimen-1.
 */
int32_t
sidl_rmi_Invocation__array_stride(
  const struct sidl_rmi_Invocation__array* array,
  const int32_t ind);

/**
 * Return a true value iff the array is a contiguous
 * column-major ordered array. A NULL array argument
 * causes 0 to be returned.
 */
int
sidl_rmi_Invocation__array_isColumnOrder(
  const struct sidl_rmi_Invocation__array* array);

/**
 * Return a true value iff the array is a contiguous
 * row-major ordered array. A NULL array argument
 * causes 0 to be returned.
 */
int
sidl_rmi_Invocation__array_isRowOrder(
  const struct sidl_rmi_Invocation__array* array);

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
struct sidl_rmi_Invocation__array*
sidl_rmi_Invocation__array_slice(
  struct sidl_rmi_Invocation__array* src,
  int32_t        dimen,
  const int32_t  numElem[],
  const int32_t  *srcStart,
  const int32_t  *srcStride,
  const int32_t  *newStart);

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
sidl_rmi_Invocation__array_copy(
  const struct sidl_rmi_Invocation__array* src,
  struct sidl_rmi_Invocation__array* dest);

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
struct sidl_rmi_Invocation__array*
sidl_rmi_Invocation__array_ensure(
  struct sidl_rmi_Invocation__array* src,
  int32_t dimen,
  int     ordering);


#pragma weak sidl_rmi_Invocation__connectI

#pragma weak sidl_rmi_Invocation__rmicast

/**
 * Cast method for interface and class type conversions.
 */
struct sidl_rmi_Invocation__object*
sidl_rmi_Invocation__rmicast(
  void* obj, struct sidl_BaseInterface__object **_ex);

/**
 * RMI connector function for the class. (no addref)
 */
struct sidl_rmi_Invocation__object*
sidl_rmi_Invocation__connectI(const char * url, sidl_bool ar, struct 
  sidl_BaseInterface__object **_ex);

#ifdef __cplusplus
}
#endif
#endif
