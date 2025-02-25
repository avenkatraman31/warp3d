/*
 * File:          sidl_rmi_NetworkException_Impl.c
 * Symbol:        sidl.rmi.NetworkException-v0.9.15
 * Symbol Type:   class
 * Babel Version: 1.0.4
 * Release:       $Name: V2-9-0b $
 * Revision:      @(#) $Id: sidl_rmi_NetworkException_Impl.c,v 1.7 2007/09/27 19:35:47 painter Exp $
 * Description:   Server-side implementation for sidl.rmi.NetworkException
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
 * Symbol "sidl.rmi.NetworkException" (version 0.9.15)
 * 
 * Generic Network Exception
 */

#include "sidl_rmi_NetworkException_Impl.h"
#include "sidl_NotImplementedException.h"
#include "sidl_Exception.h"

/* DO-NOT-DELETE splicer.begin(sidl.rmi.NetworkException._includes) */
#include <stdlib.h>
#include "sidl_Exception.h"
/* DO-NOT-DELETE splicer.end(sidl.rmi.NetworkException._includes) */

#define SIDL_IOR_MAJOR_VERSION 1
#define SIDL_IOR_MINOR_VERSION 0
static const struct sidl_io_IOException__epv* superEPV = NULL;

void sidl_rmi_NetworkException__superEPV(
struct sidl_io_IOException__epv* parentEPV){
  superEPV = parentEPV;
}
/*
 * Method:  packObj[]
 */

static void
super_packObj(
  /* in */ sidl_rmi_NetworkException self,
  /* in */ sidl_io_Serializer ser,
  /* out */ sidl_BaseInterface *_ex)
{
  (*superEPV->f_packObj)((struct sidl_io_IOException__object*)
    self,
    ser,
    _ex);
}

/*
 * Method:  unpackObj[]
 */

static void
super_unpackObj(
  /* in */ sidl_rmi_NetworkException self,
  /* in */ sidl_io_Deserializer des,
  /* out */ sidl_BaseInterface *_ex)
{
  (*superEPV->f_unpackObj)((struct sidl_io_IOException__object*)
    self,
    des,
    _ex);
}

/*
 * Static class initializer called exactly once before any user-defined method is dispatched
 */

#undef __FUNC__
#define __FUNC__ "impl_sidl_rmi_NetworkException__load"

#ifdef __cplusplus
extern "C"
#endif
void
impl_sidl_rmi_NetworkException__load(
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
  /* DO-NOT-DELETE splicer.begin(sidl.rmi.NetworkException._load) */
  /* insert implementation here: sidl.rmi.NetworkException._load (static class initializer method) */
  /* DO-NOT-DELETE splicer.end(sidl.rmi.NetworkException._load) */
  }
}
/*
 * Class constructor called when the class is created.
 */

#undef __FUNC__
#define __FUNC__ "impl_sidl_rmi_NetworkException__ctor"

#ifdef __cplusplus
extern "C"
#endif
void
impl_sidl_rmi_NetworkException__ctor(
  /* in */ sidl_rmi_NetworkException self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
  /* DO-NOT-DELETE splicer.begin(sidl.rmi.NetworkException._ctor) */
  struct sidl_rmi_NetworkException__data *data = (struct sidl_rmi_NetworkException__data *)
    malloc(sizeof (struct sidl_rmi_NetworkException__data));
  data->hop_count = 0;
  sidl_rmi_NetworkException__set_data(self,data);
  /* DO-NOT-DELETE splicer.end(sidl.rmi.NetworkException._ctor) */
  }
}

/*
 * Special Class constructor called when the user wants to wrap his own private data.
 */

#undef __FUNC__
#define __FUNC__ "impl_sidl_rmi_NetworkException__ctor2"

#ifdef __cplusplus
extern "C"
#endif
void
impl_sidl_rmi_NetworkException__ctor2(
  /* in */ sidl_rmi_NetworkException self,
  /* in */ void* private_data,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
  /* DO-NOT-DELETE splicer.begin(sidl.rmi.NetworkException._ctor2) */
  /* Insert-Code-Here {sidl.rmi.NetworkException._ctor2} (special constructor method) */
  /* DO-NOT-DELETE splicer.end(sidl.rmi.NetworkException._ctor2) */
  }
}
/*
 * Class destructor called when the class is deleted.
 */

#undef __FUNC__
#define __FUNC__ "impl_sidl_rmi_NetworkException__dtor"

#ifdef __cplusplus
extern "C"
#endif
void
impl_sidl_rmi_NetworkException__dtor(
  /* in */ sidl_rmi_NetworkException self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
  /* DO-NOT-DELETE splicer.begin(sidl.rmi.NetworkException._dtor) */
  struct sidl_rmi_NetworkException__data *data = sidl_rmi_NetworkException__get_data(self);
  if(data) {
    free((void*) data);
  }
  sidl_rmi_NetworkException__set_data(self,NULL);
  /* DO-NOT-DELETE splicer.end(sidl.rmi.NetworkException._dtor) */
  }
}

/*
 * Method:  getHopCount[]
 */

#undef __FUNC__
#define __FUNC__ "impl_sidl_rmi_NetworkException_getHopCount"

#ifdef __cplusplus
extern "C"
#endif
int32_t
impl_sidl_rmi_NetworkException_getHopCount(
  /* in */ sidl_rmi_NetworkException self,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
  /* DO-NOT-DELETE splicer.begin(sidl.rmi.NetworkException.getHopCount) */
  struct sidl_rmi_NetworkException__data *data = sidl_rmi_NetworkException__get_data(self);
  if(data) {
    return data->hop_count;
  }
  return 0;
  /* DO-NOT-DELETE splicer.end(sidl.rmi.NetworkException.getHopCount) */
  }
}

/*
 * Method:  packObj[]
 */

#undef __FUNC__
#define __FUNC__ "impl_sidl_rmi_NetworkException_packObj"

#ifdef __cplusplus
extern "C"
#endif
void
impl_sidl_rmi_NetworkException_packObj(
  /* in */ sidl_rmi_NetworkException self,
  /* in */ sidl_io_Serializer ser,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
  /* DO-NOT-DELETE splicer.begin(sidl.rmi.NetworkException.packObj) */
  struct sidl_rmi_NetworkException__data *data = NULL;
  super_packObj(self, ser, _ex);
  data  = sidl_rmi_NetworkException__get_data(self);
  if(data) {
    sidl_io_Serializer_packInt(ser, "HopCount", data->hop_count, _ex); SIDL_CHECK(*_ex);
  } else {
    sidl_io_Serializer_packInt(ser, "HopCount", 0, _ex); SIDL_CHECK(*_ex);
  }
 EXIT:
  return;
  /* DO-NOT-DELETE splicer.end(sidl.rmi.NetworkException.packObj) */
  }
}

/*
 * Method:  unpackObj[]
 */

#undef __FUNC__
#define __FUNC__ "impl_sidl_rmi_NetworkException_unpackObj"

#ifdef __cplusplus
extern "C"
#endif
void
impl_sidl_rmi_NetworkException_unpackObj(
  /* in */ sidl_rmi_NetworkException self,
  /* in */ sidl_io_Deserializer des,
  /* out */ sidl_BaseInterface *_ex)
{
  *_ex = 0;
  {
  /* DO-NOT-DELETE splicer.begin(sidl.rmi.NetworkException.unpackObj) */
  struct sidl_rmi_NetworkException__data *data = NULL;
  int32_t tmp_hop = 0;
  super_unpackObj(self,des,_ex);
  data  = sidl_rmi_NetworkException__get_data(self);
  if(!data) {
    data = (struct sidl_rmi_NetworkException__data *)
      malloc(sizeof (struct sidl_rmi_NetworkException__data));
    sidl_rmi_NetworkException__set_data(self,data);
  }
  sidl_io_Deserializer_unpackInt(des, "HopCount", &tmp_hop, _ex); SIDL_CHECK(*_ex);
  data->hop_count = ++tmp_hop;
 EXIT:
  return;
  /* DO-NOT-DELETE splicer.end(sidl.rmi.NetworkException.unpackObj) */
  }
}
/* Babel internal methods, Users should not edit below this line. */
struct sidl_BaseClass__object* 
  impl_sidl_rmi_NetworkException_fconnect_sidl_BaseClass(const char* url, 
  sidl_bool ar, sidl_BaseInterface *_ex) {
  return sidl_BaseClass__connectI(url, ar, _ex);
}
struct sidl_BaseClass__object* 
  impl_sidl_rmi_NetworkException_fcast_sidl_BaseClass(void* bi, 
  sidl_BaseInterface* _ex) {
  return sidl_BaseClass__cast(bi, _ex);
}
struct sidl_BaseException__object* 
  impl_sidl_rmi_NetworkException_fconnect_sidl_BaseException(const char* url, 
  sidl_bool ar, sidl_BaseInterface *_ex) {
  return sidl_BaseException__connectI(url, ar, _ex);
}
struct sidl_BaseException__object* 
  impl_sidl_rmi_NetworkException_fcast_sidl_BaseException(void* bi, 
  sidl_BaseInterface* _ex) {
  return sidl_BaseException__cast(bi, _ex);
}
struct sidl_BaseInterface__object* 
  impl_sidl_rmi_NetworkException_fconnect_sidl_BaseInterface(const char* url, 
  sidl_bool ar, sidl_BaseInterface *_ex) {
  return sidl_BaseInterface__connectI(url, ar, _ex);
}
struct sidl_BaseInterface__object* 
  impl_sidl_rmi_NetworkException_fcast_sidl_BaseInterface(void* bi, 
  sidl_BaseInterface* _ex) {
  return sidl_BaseInterface__cast(bi, _ex);
}
struct sidl_ClassInfo__object* 
  impl_sidl_rmi_NetworkException_fconnect_sidl_ClassInfo(const char* url, 
  sidl_bool ar, sidl_BaseInterface *_ex) {
  return sidl_ClassInfo__connectI(url, ar, _ex);
}
struct sidl_ClassInfo__object* 
  impl_sidl_rmi_NetworkException_fcast_sidl_ClassInfo(void* bi, 
  sidl_BaseInterface* _ex) {
  return sidl_ClassInfo__cast(bi, _ex);
}
struct sidl_RuntimeException__object* 
  impl_sidl_rmi_NetworkException_fconnect_sidl_RuntimeException(const char* url,
  sidl_bool ar, sidl_BaseInterface *_ex) {
  return sidl_RuntimeException__connectI(url, ar, _ex);
}
struct sidl_RuntimeException__object* 
  impl_sidl_rmi_NetworkException_fcast_sidl_RuntimeException(void* bi, 
  sidl_BaseInterface* _ex) {
  return sidl_RuntimeException__cast(bi, _ex);
}
struct sidl_SIDLException__object* 
  impl_sidl_rmi_NetworkException_fconnect_sidl_SIDLException(const char* url, 
  sidl_bool ar, sidl_BaseInterface *_ex) {
  return sidl_SIDLException__connectI(url, ar, _ex);
}
struct sidl_SIDLException__object* 
  impl_sidl_rmi_NetworkException_fcast_sidl_SIDLException(void* bi, 
  sidl_BaseInterface* _ex) {
  return sidl_SIDLException__cast(bi, _ex);
}
struct sidl_io_Deserializer__object* 
  impl_sidl_rmi_NetworkException_fconnect_sidl_io_Deserializer(const char* url, 
  sidl_bool ar, sidl_BaseInterface *_ex) {
  return sidl_io_Deserializer__connectI(url, ar, _ex);
}
struct sidl_io_Deserializer__object* 
  impl_sidl_rmi_NetworkException_fcast_sidl_io_Deserializer(void* bi, 
  sidl_BaseInterface* _ex) {
  return sidl_io_Deserializer__cast(bi, _ex);
}
struct sidl_io_IOException__object* 
  impl_sidl_rmi_NetworkException_fconnect_sidl_io_IOException(const char* url, 
  sidl_bool ar, sidl_BaseInterface *_ex) {
  return sidl_io_IOException__connectI(url, ar, _ex);
}
struct sidl_io_IOException__object* 
  impl_sidl_rmi_NetworkException_fcast_sidl_io_IOException(void* bi, 
  sidl_BaseInterface* _ex) {
  return sidl_io_IOException__cast(bi, _ex);
}
struct sidl_io_Serializable__object* 
  impl_sidl_rmi_NetworkException_fconnect_sidl_io_Serializable(const char* url, 
  sidl_bool ar, sidl_BaseInterface *_ex) {
  return sidl_io_Serializable__connectI(url, ar, _ex);
}
struct sidl_io_Serializable__object* 
  impl_sidl_rmi_NetworkException_fcast_sidl_io_Serializable(void* bi, 
  sidl_BaseInterface* _ex) {
  return sidl_io_Serializable__cast(bi, _ex);
}
struct sidl_io_Serializer__object* 
  impl_sidl_rmi_NetworkException_fconnect_sidl_io_Serializer(const char* url, 
  sidl_bool ar, sidl_BaseInterface *_ex) {
  return sidl_io_Serializer__connectI(url, ar, _ex);
}
struct sidl_io_Serializer__object* 
  impl_sidl_rmi_NetworkException_fcast_sidl_io_Serializer(void* bi, 
  sidl_BaseInterface* _ex) {
  return sidl_io_Serializer__cast(bi, _ex);
}
struct sidl_rmi_NetworkException__object* 
  impl_sidl_rmi_NetworkException_fconnect_sidl_rmi_NetworkException(const char* 
  url, sidl_bool ar, sidl_BaseInterface *_ex) {
  return sidl_rmi_NetworkException__connectI(url, ar, _ex);
}
struct sidl_rmi_NetworkException__object* 
  impl_sidl_rmi_NetworkException_fcast_sidl_rmi_NetworkException(void* bi, 
  sidl_BaseInterface* _ex) {
  return sidl_rmi_NetworkException__cast(bi, _ex);
}
