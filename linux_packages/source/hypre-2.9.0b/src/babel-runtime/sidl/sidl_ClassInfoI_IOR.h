/*
 * File:          sidl_ClassInfoI_IOR.h
 * Symbol:        sidl.ClassInfoI-v0.9.15
 * Symbol Type:   class
 * Babel Version: 1.0.4
 * Release:       $Name: V2-9-0b $
 * Revision:      @(#) $Id: sidl_ClassInfoI_IOR.h,v 1.7 2007/09/27 19:35:42 painter Exp $
 * Description:   Intermediate Object Representation for sidl.ClassInfoI
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

#ifndef included_sidl_ClassInfoI_IOR_h
#define included_sidl_ClassInfoI_IOR_h

#ifndef included_sidl_header_h
#include "sidl_header.h"
#endif
struct sidl_rmi_InstanceHandle__object;
#ifndef included_sidl_BaseClass_IOR_h
#include "sidl_BaseClass_IOR.h"
#endif
#ifndef included_sidl_ClassInfo_IOR_h
#include "sidl_ClassInfo_IOR.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif

/*
 * Symbol "sidl.ClassInfoI" (version 0.9.15)
 * 
 *  
 * An implementation of the <code>ClassInfo</code> interface. This
 * provides methods to set all the attributes that are read-only in
 * the <code>ClassInfo</code> interface.
 */

struct sidl_ClassInfoI__array;
struct sidl_ClassInfoI__object;

/*
 * Forward references for external classes and interfaces.
 */

struct sidl_BaseException__array;
struct sidl_BaseException__object;
struct sidl_BaseInterface__array;
struct sidl_BaseInterface__object;
struct sidl_RuntimeException__array;
struct sidl_RuntimeException__object;
struct sidl_rmi_Call__array;
struct sidl_rmi_Call__object;
struct sidl_rmi_Return__array;
struct sidl_rmi_Return__object;

/*
 * Declare the method entry point vector.
 */

struct sidl_ClassInfoI__epv {
  /* Implicit builtin methods */
  /* 0 */
  void* (*f__cast)(
    /* in */ struct sidl_ClassInfoI__object* self,
    /* in */ const char* name,
    /* out */ struct sidl_BaseInterface__object* *_ex);
  /* 1 */
  void (*f__delete)(
    /* in */ struct sidl_ClassInfoI__object* self,
    /* out */ struct sidl_BaseInterface__object* *_ex);
  /* 2 */
  void (*f__exec)(
    /* in */ struct sidl_ClassInfoI__object* self,
    /* in */ const char* methodName,
    /* in */ struct sidl_rmi_Call__object* inArgs,
    /* in */ struct sidl_rmi_Return__object* outArgs,
    /* out */ struct sidl_BaseInterface__object* *_ex);
  /* 3 */
  char* (*f__getURL)(
    /* in */ struct sidl_ClassInfoI__object* self,
    /* out */ struct sidl_BaseInterface__object* *_ex);
  /* 4 */
  void (*f__raddRef)(
    /* in */ struct sidl_ClassInfoI__object* self,
    /* out */ struct sidl_BaseInterface__object* *_ex);
  /* 5 */
  sidl_bool (*f__isRemote)(
    /* in */ struct sidl_ClassInfoI__object* self,
    /* out */ struct sidl_BaseInterface__object* *_ex);
  /* 6 */
  void (*f__set_hooks)(
    /* in */ struct sidl_ClassInfoI__object* self,
    /* in */ sidl_bool on,
    /* out */ struct sidl_BaseInterface__object* *_ex);
  /* 7 */
  void (*f__ctor)(
    /* in */ struct sidl_ClassInfoI__object* self,
    /* out */ struct sidl_BaseInterface__object* *_ex);
  /* 8 */
  void (*f__ctor2)(
    /* in */ struct sidl_ClassInfoI__object* self,
    /* in */ void* private_data,
    /* out */ struct sidl_BaseInterface__object* *_ex);
  /* 9 */
  void (*f__dtor)(
    /* in */ struct sidl_ClassInfoI__object* self,
    /* out */ struct sidl_BaseInterface__object* *_ex);
  /* 10 */
  /* 11 */
  /* 12 */
  /* 13 */
  /* Methods introduced in sidl.BaseInterface-v0.9.15 */
  void (*f_addRef)(
    /* in */ struct sidl_ClassInfoI__object* self,
    /* out */ struct sidl_BaseInterface__object* *_ex);
  void (*f_deleteRef)(
    /* in */ struct sidl_ClassInfoI__object* self,
    /* out */ struct sidl_BaseInterface__object* *_ex);
  sidl_bool (*f_isSame)(
    /* in */ struct sidl_ClassInfoI__object* self,
    /* in */ struct sidl_BaseInterface__object* iobj,
    /* out */ struct sidl_BaseInterface__object* *_ex);
  sidl_bool (*f_isType)(
    /* in */ struct sidl_ClassInfoI__object* self,
    /* in */ const char* name,
    /* out */ struct sidl_BaseInterface__object* *_ex);
  struct sidl_ClassInfo__object* (*f_getClassInfo)(
    /* in */ struct sidl_ClassInfoI__object* self,
    /* out */ struct sidl_BaseInterface__object* *_ex);
  /* Methods introduced in sidl.BaseClass-v0.9.15 */
  /* Methods introduced in sidl.ClassInfo-v0.9.15 */
  char* (*f_getName)(
    /* in */ struct sidl_ClassInfoI__object* self,
    /* out */ struct sidl_BaseInterface__object* *_ex);
  char* (*f_getIORVersion)(
    /* in */ struct sidl_ClassInfoI__object* self,
    /* out */ struct sidl_BaseInterface__object* *_ex);
  /* Methods introduced in sidl.ClassInfoI-v0.9.15 */
  void (*f_setName)(
    /* in */ struct sidl_ClassInfoI__object* self,
    /* in */ const char* name,
    /* out */ struct sidl_BaseInterface__object* *_ex);
  void (*f_setIORVersion)(
    /* in */ struct sidl_ClassInfoI__object* self,
    /* in */ int32_t major,
    /* in */ int32_t minor,
    /* out */ struct sidl_BaseInterface__object* *_ex);
};

/*
 * Define the controls structure.
 */


struct sidl_ClassInfoI__controls {
  int     use_hooks;
};
/*
 * Define the class object structure.
 */

struct sidl_ClassInfoI__object {
  struct sidl_BaseClass__object d_sidl_baseclass;
  struct sidl_ClassInfo__object d_sidl_classinfo;
  struct sidl_ClassInfoI__epv*  d_epv;
  void*                         d_data;
};

struct sidl_ClassInfoI__external {
  struct sidl_ClassInfoI__object*
  (*createObject)(void* ddata, struct sidl_BaseInterface__object **_ex);

  struct sidl_BaseClass__epv*(*getSuperEPV)(void);
  int d_ior_major_version;
  int d_ior_minor_version;
};

/*
 * This function returns a pointer to a static structure of
 * pointers to function entry points.  Its purpose is to provide
 * one-stop shopping for loading DLLs.
 */

const struct sidl_ClassInfoI__external*
sidl_ClassInfoI__externals(void);

extern struct sidl_ClassInfoI__object*
sidl_ClassInfoI__new(void* ddata,struct sidl_BaseInterface__object ** _ex);

extern void sidl_ClassInfoI__init(
  struct sidl_ClassInfoI__object* self, void* ddata, struct 
    sidl_BaseInterface__object ** _ex);
extern void sidl_ClassInfoI__getEPVs(
  struct sidl_BaseInterface__epv **s_arg_epv__sidl_baseinterface,
  struct sidl_BaseInterface__epv **s_arg_epv_hooks__sidl_baseinterface,
  struct sidl_BaseClass__epv **s_arg_epv__sidl_baseclass,struct 
    sidl_BaseClass__epv **s_arg_epv_hooks__sidl_baseclass,
  struct sidl_ClassInfo__epv **s_arg_epv__sidl_classinfo,
  struct sidl_ClassInfo__epv **s_arg_epv_hooks__sidl_classinfo,
  struct sidl_ClassInfoI__epv **s_arg_epv__sidl_classinfoi,struct 
    sidl_ClassInfoI__epv **s_arg_epv_hooks__sidl_classinfoi);
  extern void sidl_ClassInfoI__fini(
    struct sidl_ClassInfoI__object* self, struct sidl_BaseInterface__object ** 
      _ex);
  extern void sidl_ClassInfoI__IOR_version(int32_t *major, int32_t *minor);

  struct sidl_BaseClass__object* skel_sidl_ClassInfoI_fconnect_sidl_BaseClass(
    const char* url, sidl_bool ar, struct sidl_BaseInterface__object **_ex);
  struct sidl_BaseClass__object* skel_sidl_ClassInfoI_fcast_sidl_BaseClass(void 
    *bi, struct sidl_BaseInterface__object **_ex);

  struct sidl_BaseInterface__object* 
    skel_sidl_ClassInfoI_fconnect_sidl_BaseInterface(const char* url, sidl_bool 
    ar, struct sidl_BaseInterface__object **_ex);
  struct sidl_BaseInterface__object* 
    skel_sidl_ClassInfoI_fcast_sidl_BaseInterface(void *bi, struct 
    sidl_BaseInterface__object **_ex);

  struct sidl_ClassInfo__object* skel_sidl_ClassInfoI_fconnect_sidl_ClassInfo(
    const char* url, sidl_bool ar, struct sidl_BaseInterface__object **_ex);
  struct sidl_ClassInfo__object* skel_sidl_ClassInfoI_fcast_sidl_ClassInfo(void 
    *bi, struct sidl_BaseInterface__object **_ex);

  struct sidl_ClassInfoI__object* skel_sidl_ClassInfoI_fconnect_sidl_ClassInfoI(
    const char* url, sidl_bool ar, struct sidl_BaseInterface__object **_ex);
  struct sidl_ClassInfoI__object* skel_sidl_ClassInfoI_fcast_sidl_ClassInfoI(
    void *bi, struct sidl_BaseInterface__object **_ex);

  struct sidl_RuntimeException__object* 
    skel_sidl_ClassInfoI_fconnect_sidl_RuntimeException(const char* url, 
    sidl_bool ar, struct sidl_BaseInterface__object **_ex);
  struct sidl_RuntimeException__object* 
    skel_sidl_ClassInfoI_fcast_sidl_RuntimeException(void *bi, struct 
    sidl_BaseInterface__object **_ex);

  struct sidl_ClassInfoI__remote{
    int d_refcount;
    struct sidl_rmi_InstanceHandle__object *d_ih;
  };

#ifdef __cplusplus
  }
#endif
#endif
