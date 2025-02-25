/*
 * File:          sidl_PostViolation_Impl.c
 * Symbol:        sidl.PostViolation-v0.9.15
 * Symbol Type:   class
 * Babel Version: 1.0.4
 * Release:       $Name: V2-9-0b $
 * Revision:      @(#) $Id: sidl_PostViolation_Impl.c,v 1.7 2007/09/27 19:35:44 painter Exp $
 * Description:   Server-side implementation for sidl.PostViolation
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
 * WARNING: Automatically generated; only changes within splicers preserved
 * 
 */

/*
 * DEVELOPERS ARE EXPECTED TO PROVIDE IMPLEMENTATIONS
 * FOR THE FOLLOWING METHODS BETWEEN SPLICER PAIRS.
 */

/*
 * Symbol "sidl.PostViolation" (version 0.9.15)
 * 
 * <code>PostViolation</code> provides the basic marker for 
 * a post-condition exception.
 */

#include "sidl_PostViolation_Impl.h"
#include "sidl_NotImplementedException.h"
#include "sidl_Exception.h"

/* DO-NOT-DELETE splicer.begin(sidl.PostViolation._includes) */
/* Put additional includes or other arbitrary code here... */
/* DO-NOT-DELETE splicer.end(sidl.PostViolation._includes) */

#define SIDL_IOR_MAJOR_VERSION 1
#define SIDL_IOR_MINOR_VERSION 0
/*
 * Static class initializer called exactly once before any user-defined method is dispatched
 */

#undef __FUNC__
#define __FUNC__ "impl_sidl_PostViolation__load"

#ifdef __cplusplus
extern "C"
#endif
void
impl_sidl_PostViolation__load(
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
  /* DO-NOT-DELETE splicer.begin(sidl.PostViolation._load) */
  /* Insert implementation here: sidl.PostViolation._load (static class initializer method) */
  /* DO-NOT-DELETE splicer.end(sidl.PostViolation._load) */
  }
}
/*
 * Class constructor called when the class is created.
 */

#undef __FUNC__
#define __FUNC__ "impl_sidl_PostViolation__ctor"

#ifdef __cplusplus
extern "C"
#endif
void
impl_sidl_PostViolation__ctor(
  /* in */ sidl_PostViolation self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
  /* DO-NOT-DELETE splicer.begin(sidl.PostViolation._ctor) */
  /* Insert the implementation of the constructor method here... */
  /* DO-NOT-DELETE splicer.end(sidl.PostViolation._ctor) */
  }
}

/*
 * Special Class constructor called when the user wants to wrap his own private data.
 */

#undef __FUNC__
#define __FUNC__ "impl_sidl_PostViolation__ctor2"

#ifdef __cplusplus
extern "C"
#endif
void
impl_sidl_PostViolation__ctor2(
  /* in */ sidl_PostViolation self,
  /* in */ void* private_data,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
  /* DO-NOT-DELETE splicer.begin(sidl.PostViolation._ctor2) */
  /* Insert-Code-Here {sidl.PostViolation._ctor2} (special constructor method) */
  /* DO-NOT-DELETE splicer.end(sidl.PostViolation._ctor2) */
  }
}
/*
 * Class destructor called when the class is deleted.
 */

#undef __FUNC__
#define __FUNC__ "impl_sidl_PostViolation__dtor"

#ifdef __cplusplus
extern "C"
#endif
void
impl_sidl_PostViolation__dtor(
  /* in */ sidl_PostViolation self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
  /* DO-NOT-DELETE splicer.begin(sidl.PostViolation._dtor) */
  /* Insert the implementation of the destructor method here... */
  /* DO-NOT-DELETE splicer.end(sidl.PostViolation._dtor) */
  }
}
/* Babel internal methods, Users should not edit below this line. */
struct sidl_BaseClass__object* impl_sidl_PostViolation_fconnect_sidl_BaseClass(
  const char* url, sidl_bool ar, sidl_BaseInterface *_ex) {
  return sidl_BaseClass__connectI(url, ar, _ex);
}
struct sidl_BaseClass__object* impl_sidl_PostViolation_fcast_sidl_BaseClass(
  void* bi, sidl_BaseInterface* _ex) {
  return sidl_BaseClass__cast(bi, _ex);
}
struct sidl_BaseException__object* 
  impl_sidl_PostViolation_fconnect_sidl_BaseException(const char* url, 
  sidl_bool ar, sidl_BaseInterface *_ex) {
  return sidl_BaseException__connectI(url, ar, _ex);
}
struct sidl_BaseException__object* 
  impl_sidl_PostViolation_fcast_sidl_BaseException(void* bi, 
  sidl_BaseInterface* _ex) {
  return sidl_BaseException__cast(bi, _ex);
}
struct sidl_BaseInterface__object* 
  impl_sidl_PostViolation_fconnect_sidl_BaseInterface(const char* url, 
  sidl_bool ar, sidl_BaseInterface *_ex) {
  return sidl_BaseInterface__connectI(url, ar, _ex);
}
struct sidl_BaseInterface__object* 
  impl_sidl_PostViolation_fcast_sidl_BaseInterface(void* bi, 
  sidl_BaseInterface* _ex) {
  return sidl_BaseInterface__cast(bi, _ex);
}
struct sidl_ClassInfo__object* impl_sidl_PostViolation_fconnect_sidl_ClassInfo(
  const char* url, sidl_bool ar, sidl_BaseInterface *_ex) {
  return sidl_ClassInfo__connectI(url, ar, _ex);
}
struct sidl_ClassInfo__object* impl_sidl_PostViolation_fcast_sidl_ClassInfo(
  void* bi, sidl_BaseInterface* _ex) {
  return sidl_ClassInfo__cast(bi, _ex);
}
struct sidl_PostViolation__object* 
  impl_sidl_PostViolation_fconnect_sidl_PostViolation(const char* url, 
  sidl_bool ar, sidl_BaseInterface *_ex) {
  return sidl_PostViolation__connectI(url, ar, _ex);
}
struct sidl_PostViolation__object* 
  impl_sidl_PostViolation_fcast_sidl_PostViolation(void* bi, 
  sidl_BaseInterface* _ex) {
  return sidl_PostViolation__cast(bi, _ex);
}
struct sidl_RuntimeException__object* 
  impl_sidl_PostViolation_fconnect_sidl_RuntimeException(const char* url, 
  sidl_bool ar, sidl_BaseInterface *_ex) {
  return sidl_RuntimeException__connectI(url, ar, _ex);
}
struct sidl_RuntimeException__object* 
  impl_sidl_PostViolation_fcast_sidl_RuntimeException(void* bi, 
  sidl_BaseInterface* _ex) {
  return sidl_RuntimeException__cast(bi, _ex);
}
struct sidl_SIDLException__object* 
  impl_sidl_PostViolation_fconnect_sidl_SIDLException(const char* url, 
  sidl_bool ar, sidl_BaseInterface *_ex) {
  return sidl_SIDLException__connectI(url, ar, _ex);
}
struct sidl_SIDLException__object* 
  impl_sidl_PostViolation_fcast_sidl_SIDLException(void* bi, 
  sidl_BaseInterface* _ex) {
  return sidl_SIDLException__cast(bi, _ex);
}
struct sidl_io_Deserializer__object* 
  impl_sidl_PostViolation_fconnect_sidl_io_Deserializer(const char* url, 
  sidl_bool ar, sidl_BaseInterface *_ex) {
  return sidl_io_Deserializer__connectI(url, ar, _ex);
}
struct sidl_io_Deserializer__object* 
  impl_sidl_PostViolation_fcast_sidl_io_Deserializer(void* bi, 
  sidl_BaseInterface* _ex) {
  return sidl_io_Deserializer__cast(bi, _ex);
}
struct sidl_io_Serializable__object* 
  impl_sidl_PostViolation_fconnect_sidl_io_Serializable(const char* url, 
  sidl_bool ar, sidl_BaseInterface *_ex) {
  return sidl_io_Serializable__connectI(url, ar, _ex);
}
struct sidl_io_Serializable__object* 
  impl_sidl_PostViolation_fcast_sidl_io_Serializable(void* bi, 
  sidl_BaseInterface* _ex) {
  return sidl_io_Serializable__cast(bi, _ex);
}
struct sidl_io_Serializer__object* 
  impl_sidl_PostViolation_fconnect_sidl_io_Serializer(const char* url, 
  sidl_bool ar, sidl_BaseInterface *_ex) {
  return sidl_io_Serializer__connectI(url, ar, _ex);
}
struct sidl_io_Serializer__object* 
  impl_sidl_PostViolation_fcast_sidl_io_Serializer(void* bi, 
  sidl_BaseInterface* _ex) {
  return sidl_io_Serializer__cast(bi, _ex);
}
