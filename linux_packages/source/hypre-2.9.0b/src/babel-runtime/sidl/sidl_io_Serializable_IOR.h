/*
 * File:          sidl_io_Serializable_IOR.h
 * Symbol:        sidl.io.Serializable-v0.9.15
 * Symbol Type:   interface
 * Babel Version: 1.0.4
 * Release:       $Name: V2-9-0b $
 * Revision:      @(#) $Id: sidl_io_Serializable_IOR.h,v 1.2 2007/09/27 19:35:45 painter Exp $
 * Description:   Intermediate Object Representation for sidl.io.Serializable
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

#ifndef included_sidl_io_Serializable_IOR_h
#define included_sidl_io_Serializable_IOR_h

#ifndef included_sidl_header_h
#include "sidl_header.h"
#endif
struct sidl_rmi_InstanceHandle__object;
#ifndef included_sidl_BaseInterface_IOR_h
#include "sidl_BaseInterface_IOR.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif

/*
 * Symbol "sidl.io.Serializable" (version 0.9.15)
 * 
 * Objects that implement Serializable will be serializable (copyable)
 * over RMI, or storable to streams.  Classes that can pack or unpack 
 * themselves should implement this interface
 */

struct sidl_io_Serializable__array;
struct sidl_io_Serializable__object;

/*
 * Forward references for external classes and interfaces.
 */

struct sidl_BaseException__array;
struct sidl_BaseException__object;
struct sidl_ClassInfo__array;
struct sidl_ClassInfo__object;
struct sidl_RuntimeException__array;
struct sidl_RuntimeException__object;
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

struct sidl_io_Serializable__epv {
  /* Implicit builtin methods */
  /* 0 */
  void* (*f__cast)(
    /* in */ void* self,
    /* in */ const char* name,
    /* out */ struct sidl_BaseInterface__object* *_ex);
  /* 1 */
  void (*f__delete)(
    /* in */ void* self,
    /* out */ struct sidl_BaseInterface__object* *_ex);
  /* 2 */
  void (*f__exec)(
    /* in */ void* self,
    /* in */ const char* methodName,
    /* in */ struct sidl_rmi_Call__object* inArgs,
    /* in */ struct sidl_rmi_Return__object* outArgs,
    /* out */ struct sidl_BaseInterface__object* *_ex);
  /* 3 */
  char* (*f__getURL)(
    /* in */ void* self,
    /* out */ struct sidl_BaseInterface__object* *_ex);
  /* 4 */
  void (*f__raddRef)(
    /* in */ void* self,
    /* out */ struct sidl_BaseInterface__object* *_ex);
  /* 5 */
  sidl_bool (*f__isRemote)(
    /* in */ void* self,
    /* out */ struct sidl_BaseInterface__object* *_ex);
  /* 6 */
  void (*f__set_hooks)(
    /* in */ void* self,
    /* in */ sidl_bool on,
    /* out */ struct sidl_BaseInterface__object* *_ex);
  /* Methods introduced in sidl.BaseInterface-v0.9.15 */
  void (*f_addRef)(
    /* in */ void* self,
    /* out */ struct sidl_BaseInterface__object* *_ex);
  void (*f_deleteRef)(
    /* in */ void* self,
    /* out */ struct sidl_BaseInterface__object* *_ex);
  sidl_bool (*f_isSame)(
    /* in */ void* self,
    /* in */ struct sidl_BaseInterface__object* iobj,
    /* out */ struct sidl_BaseInterface__object* *_ex);
  sidl_bool (*f_isType)(
    /* in */ void* self,
    /* in */ const char* name,
    /* out */ struct sidl_BaseInterface__object* *_ex);
  struct sidl_ClassInfo__object* (*f_getClassInfo)(
    /* in */ void* self,
    /* out */ struct sidl_BaseInterface__object* *_ex);
  /* Methods introduced in sidl.io.Serializable-v0.9.15 */
  void (*f_packObj)(
    /* in */ void* self,
    /* in */ struct sidl_io_Serializer__object* ser,
    /* out */ struct sidl_BaseInterface__object* *_ex);
  void (*f_unpackObj)(
    /* in */ void* self,
    /* in */ struct sidl_io_Deserializer__object* des,
    /* out */ struct sidl_BaseInterface__object* *_ex);
};

/*
 * Define the interface object structure.
 */

struct sidl_io_Serializable__object {
  struct sidl_io_Serializable__epv* d_epv;
  void*                             d_object;
};

/**
 * 
 * 
 * Anonymous class definition
 * 
 * 
 */
/*
 * Symbol "sidl.io._Serializable" (version 1.0)
 */

struct sidl_io__Serializable__array;
struct sidl_io__Serializable__object;

/*
 * Declare the method entry point vector.
 */

struct sidl_io__Serializable__epv {
  /* Implicit builtin methods */
  void* (*f__cast)(
    /* in */ struct sidl_io__Serializable__object* self,
    /* in */ const char* name,
    /* out */ struct sidl_BaseInterface__object* *_ex);
  void (*f__delete)(
    /* in */ struct sidl_io__Serializable__object* self,
    /* out */ struct sidl_BaseInterface__object* *_ex);
  void (*f__exec)(
    /* in */ struct sidl_io__Serializable__object* self,
    /* in */ const char* methodName,
    /* in */ struct sidl_rmi_Call__object* inArgs,
    /* in */ struct sidl_rmi_Return__object* outArgs,
    /* out */ struct sidl_BaseInterface__object* *_ex);
  char* (*f__getURL)(
    /* in */ struct sidl_io__Serializable__object* self,
    /* out */ struct sidl_BaseInterface__object* *_ex);
  void (*f__raddRef)(
    /* in */ struct sidl_io__Serializable__object* self,
    /* out */ struct sidl_BaseInterface__object* *_ex);
  sidl_bool (*f__isRemote)(
    /* in */ struct sidl_io__Serializable__object* self,
    /* out */ struct sidl_BaseInterface__object* *_ex);
  void (*f__set_hooks)(
    /* in */ struct sidl_io__Serializable__object* self,
    /* in */ sidl_bool on,
    /* out */ struct sidl_BaseInterface__object* *_ex);
  void (*f__ctor)(
    /* in */ struct sidl_io__Serializable__object* self,
    /* out */ struct sidl_BaseInterface__object* *_ex);
  void (*f__ctor2)(
    /* in */ struct sidl_io__Serializable__object* self,
    /* in */ void* private_data,
    /* out */ struct sidl_BaseInterface__object* *_ex);
  void (*f__dtor)(
    /* in */ struct sidl_io__Serializable__object* self,
    /* out */ struct sidl_BaseInterface__object* *_ex);
  /* Methods introduced in sidl.BaseInterface-v0.9.15 */
  void (*f_addRef)(
    /* in */ struct sidl_io__Serializable__object* self,
    /* out */ struct sidl_BaseInterface__object* *_ex);
  void (*f_deleteRef)(
    /* in */ struct sidl_io__Serializable__object* self,
    /* out */ struct sidl_BaseInterface__object* *_ex);
  sidl_bool (*f_isSame)(
    /* in */ struct sidl_io__Serializable__object* self,
    /* in */ struct sidl_BaseInterface__object* iobj,
    /* out */ struct sidl_BaseInterface__object* *_ex);
  sidl_bool (*f_isType)(
    /* in */ struct sidl_io__Serializable__object* self,
    /* in */ const char* name,
    /* out */ struct sidl_BaseInterface__object* *_ex);
  struct sidl_ClassInfo__object* (*f_getClassInfo)(
    /* in */ struct sidl_io__Serializable__object* self,
    /* out */ struct sidl_BaseInterface__object* *_ex);
  /* Methods introduced in sidl.io.Serializable-v0.9.15 */
  void (*f_packObj)(
    /* in */ struct sidl_io__Serializable__object* self,
    /* in */ struct sidl_io_Serializer__object* ser,
    /* out */ struct sidl_BaseInterface__object* *_ex);
  void (*f_unpackObj)(
    /* in */ struct sidl_io__Serializable__object* self,
    /* in */ struct sidl_io_Deserializer__object* des,
    /* out */ struct sidl_BaseInterface__object* *_ex);
  /* Methods introduced in sidl.io._Serializable-v1.0 */
};

/*
 * Define the class object structure.
 */

struct sidl_io__Serializable__object {
  struct sidl_BaseInterface__object   d_sidl_baseinterface;
  struct sidl_io_Serializable__object d_sidl_io_serializable;
  struct sidl_io__Serializable__epv*  d_epv;
  void*                               d_data;
};


struct sidl_io__Serializable__remote{
  int d_refcount;
  struct sidl_rmi_InstanceHandle__object *d_ih;
};

#ifdef __cplusplus
}
#endif
#endif
