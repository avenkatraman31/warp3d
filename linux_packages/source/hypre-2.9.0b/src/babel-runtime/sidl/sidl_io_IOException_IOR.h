/*
 * File:          sidl_io_IOException_IOR.h
 * Symbol:        sidl.io.IOException-v0.9.15
 * Symbol Type:   class
 * Babel Version: 1.0.4
 * Release:       $Name: V2-9-0b $
 * Revision:      @(#) $Id: sidl_io_IOException_IOR.h,v 1.6 2007/09/27 19:35:45 painter Exp $
 * Description:   Intermediate Object Representation for sidl.io.IOException
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

#ifndef included_sidl_io_IOException_IOR_h
#define included_sidl_io_IOException_IOR_h

#ifndef included_sidl_header_h
#include "sidl_header.h"
#endif
struct sidl_rmi_InstanceHandle__object;
#ifndef included_sidl_RuntimeException_IOR_h
#include "sidl_RuntimeException_IOR.h"
#endif
#ifndef included_sidl_SIDLException_IOR_h
#include "sidl_SIDLException_IOR.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif

/*
 * Symbol "sidl.io.IOException" (version 0.9.15)
 * 
 *  generic exception for I/O issues 
 */

struct sidl_io_IOException__array;
struct sidl_io_IOException__object;

/*
 * Forward references for external classes and interfaces.
 */

struct sidl_BaseException__array;
struct sidl_BaseException__object;
struct sidl_BaseInterface__array;
struct sidl_BaseInterface__object;
struct sidl_ClassInfo__array;
struct sidl_ClassInfo__object;
struct sidl_io_Deserializer__array;
struct sidl_io_Deserializer__object;
struct sidl_io_Serializer__array;
struct sidl_io_Serializer__object;
struct sidl_rmi_Call__array;
struct sidl_rmi_Call__object;
struct sidl_rmi_Return__array;
struct sidl_rmi_Return__object;

/*
 * Declare the method entry point vector.
 */

struct sidl_io_IOException__epv {
  /* Implicit builtin methods */
  /* 0 */
  void* (*f__cast)(
    /* in */ struct sidl_io_IOException__object* self,
    /* in */ const char* name,
    /* out */ struct sidl_BaseInterface__object* *_ex);
  /* 1 */
  void (*f__delete)(
    /* in */ struct sidl_io_IOException__object* self,
    /* out */ struct sidl_BaseInterface__object* *_ex);
  /* 2 */
  void (*f__exec)(
    /* in */ struct sidl_io_IOException__object* self,
    /* in */ const char* methodName,
    /* in */ struct sidl_rmi_Call__object* inArgs,
    /* in */ struct sidl_rmi_Return__object* outArgs,
    /* out */ struct sidl_BaseInterface__object* *_ex);
  /* 3 */
  char* (*f__getURL)(
    /* in */ struct sidl_io_IOException__object* self,
    /* out */ struct sidl_BaseInterface__object* *_ex);
  /* 4 */
  void (*f__raddRef)(
    /* in */ struct sidl_io_IOException__object* self,
    /* out */ struct sidl_BaseInterface__object* *_ex);
  /* 5 */
  sidl_bool (*f__isRemote)(
    /* in */ struct sidl_io_IOException__object* self,
    /* out */ struct sidl_BaseInterface__object* *_ex);
  /* 6 */
  void (*f__set_hooks)(
    /* in */ struct sidl_io_IOException__object* self,
    /* in */ sidl_bool on,
    /* out */ struct sidl_BaseInterface__object* *_ex);
  /* 7 */
  void (*f__ctor)(
    /* in */ struct sidl_io_IOException__object* self,
    /* out */ struct sidl_BaseInterface__object* *_ex);
  /* 8 */
  void (*f__ctor2)(
    /* in */ struct sidl_io_IOException__object* self,
    /* in */ void* private_data,
    /* out */ struct sidl_BaseInterface__object* *_ex);
  /* 9 */
  void (*f__dtor)(
    /* in */ struct sidl_io_IOException__object* self,
    /* out */ struct sidl_BaseInterface__object* *_ex);
  /* 10 */
  /* 11 */
  /* 12 */
  /* 13 */
  /* Methods introduced in sidl.BaseInterface-v0.9.15 */
  void (*f_addRef)(
    /* in */ struct sidl_io_IOException__object* self,
    /* out */ struct sidl_BaseInterface__object* *_ex);
  void (*f_deleteRef)(
    /* in */ struct sidl_io_IOException__object* self,
    /* out */ struct sidl_BaseInterface__object* *_ex);
  sidl_bool (*f_isSame)(
    /* in */ struct sidl_io_IOException__object* self,
    /* in */ struct sidl_BaseInterface__object* iobj,
    /* out */ struct sidl_BaseInterface__object* *_ex);
  sidl_bool (*f_isType)(
    /* in */ struct sidl_io_IOException__object* self,
    /* in */ const char* name,
    /* out */ struct sidl_BaseInterface__object* *_ex);
  struct sidl_ClassInfo__object* (*f_getClassInfo)(
    /* in */ struct sidl_io_IOException__object* self,
    /* out */ struct sidl_BaseInterface__object* *_ex);
  /* Methods introduced in sidl.BaseClass-v0.9.15 */
  /* Methods introduced in sidl.io.Serializable-v0.9.15 */
  void (*f_packObj)(
    /* in */ struct sidl_io_IOException__object* self,
    /* in */ struct sidl_io_Serializer__object* ser,
    /* out */ struct sidl_BaseInterface__object* *_ex);
  void (*f_unpackObj)(
    /* in */ struct sidl_io_IOException__object* self,
    /* in */ struct sidl_io_Deserializer__object* des,
    /* out */ struct sidl_BaseInterface__object* *_ex);
  /* Methods introduced in sidl.BaseException-v0.9.15 */
  char* (*f_getNote)(
    /* in */ struct sidl_io_IOException__object* self,
    /* out */ struct sidl_BaseInterface__object* *_ex);
  void (*f_setNote)(
    /* in */ struct sidl_io_IOException__object* self,
    /* in */ const char* message,
    /* out */ struct sidl_BaseInterface__object* *_ex);
  char* (*f_getTrace)(
    /* in */ struct sidl_io_IOException__object* self,
    /* out */ struct sidl_BaseInterface__object* *_ex);
  void (*f_addLine)(
    /* in */ struct sidl_io_IOException__object* self,
    /* in */ const char* traceline,
    /* out */ struct sidl_BaseInterface__object* *_ex);
  void (*f_add)(
    /* in */ struct sidl_io_IOException__object* self,
    /* in */ const char* filename,
    /* in */ int32_t lineno,
    /* in */ const char* methodname,
    /* out */ struct sidl_BaseInterface__object* *_ex);
  /* Methods introduced in sidl.SIDLException-v0.9.15 */
  /* Methods introduced in sidl.RuntimeException-v0.9.15 */
  /* Methods introduced in sidl.io.IOException-v0.9.15 */
};

/*
 * Define the controls structure.
 */


struct sidl_io_IOException__controls {
  int     use_hooks;
};
/*
 * Define the class object structure.
 */

struct sidl_io_IOException__object {
  struct sidl_SIDLException__object    d_sidl_sidlexception;
  struct sidl_RuntimeException__object d_sidl_runtimeexception;
  struct sidl_io_IOException__epv*     d_epv;
  void*                                d_data;
};

struct sidl_io_IOException__external {
  struct sidl_io_IOException__object*
  (*createObject)(void* ddata, struct sidl_BaseInterface__object **_ex);

  struct sidl_SIDLException__epv*(*getSuperEPV)(void);
  int d_ior_major_version;
  int d_ior_minor_version;
};

/*
 * This function returns a pointer to a static structure of
 * pointers to function entry points.  Its purpose is to provide
 * one-stop shopping for loading DLLs.
 */

const struct sidl_io_IOException__external*
sidl_io_IOException__externals(void);

extern struct sidl_io_IOException__object*
sidl_io_IOException__new(void* ddata,struct sidl_BaseInterface__object ** _ex);

extern void sidl_io_IOException__init(
  struct sidl_io_IOException__object* self, void* ddata, struct 
    sidl_BaseInterface__object ** _ex);
extern void sidl_io_IOException__getEPVs(
  struct sidl_BaseInterface__epv **s_arg_epv__sidl_baseinterface,
  struct sidl_BaseInterface__epv **s_arg_epv_hooks__sidl_baseinterface,
  struct sidl_BaseClass__epv **s_arg_epv__sidl_baseclass,struct 
    sidl_BaseClass__epv **s_arg_epv_hooks__sidl_baseclass,
  struct sidl_BaseException__epv **s_arg_epv__sidl_baseexception,
  struct sidl_BaseException__epv **s_arg_epv_hooks__sidl_baseexception,
  struct sidl_io_Serializable__epv **s_arg_epv__sidl_io_serializable,
  struct sidl_io_Serializable__epv **s_arg_epv_hooks__sidl_io_serializable,
  struct sidl_SIDLException__epv **s_arg_epv__sidl_sidlexception,struct 
    sidl_SIDLException__epv **s_arg_epv_hooks__sidl_sidlexception,
  struct sidl_RuntimeException__epv **s_arg_epv__sidl_runtimeexception,
  struct sidl_RuntimeException__epv **s_arg_epv_hooks__sidl_runtimeexception,
  struct sidl_io_IOException__epv **s_arg_epv__sidl_io_ioexception,struct 
    sidl_io_IOException__epv **s_arg_epv_hooks__sidl_io_ioexception);
  extern void sidl_io_IOException__fini(
    struct sidl_io_IOException__object* self, struct sidl_BaseInterface__object 
      ** _ex);
  extern void sidl_io_IOException__IOR_version(int32_t *major, int32_t *minor);

  struct sidl_BaseClass__object* 
    skel_sidl_io_IOException_fconnect_sidl_BaseClass(const char* url, sidl_bool 
    ar, struct sidl_BaseInterface__object **_ex);
  struct sidl_BaseClass__object* skel_sidl_io_IOException_fcast_sidl_BaseClass(
    void *bi, struct sidl_BaseInterface__object **_ex);

  struct sidl_BaseException__object* 
    skel_sidl_io_IOException_fconnect_sidl_BaseException(const char* url, 
    sidl_bool ar, struct sidl_BaseInterface__object **_ex);
  struct sidl_BaseException__object* 
    skel_sidl_io_IOException_fcast_sidl_BaseException(void *bi, struct 
    sidl_BaseInterface__object **_ex);

  struct sidl_BaseInterface__object* 
    skel_sidl_io_IOException_fconnect_sidl_BaseInterface(const char* url, 
    sidl_bool ar, struct sidl_BaseInterface__object **_ex);
  struct sidl_BaseInterface__object* 
    skel_sidl_io_IOException_fcast_sidl_BaseInterface(void *bi, struct 
    sidl_BaseInterface__object **_ex);

  struct sidl_ClassInfo__object* 
    skel_sidl_io_IOException_fconnect_sidl_ClassInfo(const char* url, sidl_bool 
    ar, struct sidl_BaseInterface__object **_ex);
  struct sidl_ClassInfo__object* skel_sidl_io_IOException_fcast_sidl_ClassInfo(
    void *bi, struct sidl_BaseInterface__object **_ex);

  struct sidl_RuntimeException__object* 
    skel_sidl_io_IOException_fconnect_sidl_RuntimeException(const char* url, 
    sidl_bool ar, struct sidl_BaseInterface__object **_ex);
  struct sidl_RuntimeException__object* 
    skel_sidl_io_IOException_fcast_sidl_RuntimeException(void *bi, struct 
    sidl_BaseInterface__object **_ex);

  struct sidl_SIDLException__object* 
    skel_sidl_io_IOException_fconnect_sidl_SIDLException(const char* url, 
    sidl_bool ar, struct sidl_BaseInterface__object **_ex);
  struct sidl_SIDLException__object* 
    skel_sidl_io_IOException_fcast_sidl_SIDLException(void *bi, struct 
    sidl_BaseInterface__object **_ex);

  struct sidl_io_Deserializer__object* 
    skel_sidl_io_IOException_fconnect_sidl_io_Deserializer(const char* url, 
    sidl_bool ar, struct sidl_BaseInterface__object **_ex);
  struct sidl_io_Deserializer__object* 
    skel_sidl_io_IOException_fcast_sidl_io_Deserializer(void *bi, struct 
    sidl_BaseInterface__object **_ex);

  struct sidl_io_IOException__object* 
    skel_sidl_io_IOException_fconnect_sidl_io_IOException(const char* url, 
    sidl_bool ar, struct sidl_BaseInterface__object **_ex);
  struct sidl_io_IOException__object* 
    skel_sidl_io_IOException_fcast_sidl_io_IOException(void *bi, struct 
    sidl_BaseInterface__object **_ex);

  struct sidl_io_Serializable__object* 
    skel_sidl_io_IOException_fconnect_sidl_io_Serializable(const char* url, 
    sidl_bool ar, struct sidl_BaseInterface__object **_ex);
  struct sidl_io_Serializable__object* 
    skel_sidl_io_IOException_fcast_sidl_io_Serializable(void *bi, struct 
    sidl_BaseInterface__object **_ex);

  struct sidl_io_Serializer__object* 
    skel_sidl_io_IOException_fconnect_sidl_io_Serializer(const char* url, 
    sidl_bool ar, struct sidl_BaseInterface__object **_ex);
  struct sidl_io_Serializer__object* 
    skel_sidl_io_IOException_fcast_sidl_io_Serializer(void *bi, struct 
    sidl_BaseInterface__object **_ex);

  struct sidl_io_IOException__remote{
    int d_refcount;
    struct sidl_rmi_InstanceHandle__object *d_ih;
  };

#ifdef __cplusplus
  }
#endif
#endif
