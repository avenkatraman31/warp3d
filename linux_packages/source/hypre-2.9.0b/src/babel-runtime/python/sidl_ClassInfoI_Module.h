/*
 * File:          sidl_ClassInfoI_Module.h
 * Symbol:        sidl.ClassInfoI-v0.9.15
 * Symbol Type:   class
 * Babel Version: 1.0.4
 * Release:       $Name: V2-9-0b $
 * Revision:      @(#) $Id: sidl_ClassInfoI_Module.h,v 1.6 2007/09/27 19:35:21 painter Exp $
 * Description:   expose a constructor for the Python wrapper
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
 * THIS CODE IS AUTOMATICALLY GENERATED BY THE BABEL
 * COMPILER. DO NOT EDIT THIS!
 * 
 * External clients need an entry point to wrap a pointer
 * to an instance of sidl.ClassInfoI.
 * This header files defines two methods that such clients
 * will need.
 *     sidl_ClassInfoI__import
 *         This should be called in the client's init
 *         module method.
 *     sidl_ClassInfoI__wrap
 *         This will wrap an IOR in a Python object.
 */

#ifndef included_sidl_ClassInfoI_MODULE
#define included_sidl_ClassInfoI_MODULE

#include <Python.h>
#include "sidlType.h"
#ifdef HAVE_PTHREAD
#include <pthread.h>
#endif /* HAVE_PTHREAD */

#ifdef __cplusplus
extern "C" {
#endif

struct sidl__array;

/* Forward declaration of IOR structure */
struct sidl_ClassInfoI__object;
struct sidl_ClassInfoI__array;
struct sidl_BaseInterface__object;

#define sidl_ClassInfoI__wrap_NUM 0
#define sidl_ClassInfoI__wrap_RETURN PyObject *
#define sidl_ClassInfoI__wrap_PROTO (struct sidl_ClassInfoI__object *sidlobj)

#define sidl_ClassInfoI__convert_NUM 1
#define sidl_ClassInfoI__convert_RETURN int
#define sidl_ClassInfoI__convert_PROTO (PyObject *obj, struct sidl_ClassInfoI__object **sidlobj)

#define sidl_ClassInfoI__convert_python_array_NUM 2
#define sidl_ClassInfoI__convert_python_array_RETURN int
#define sidl_ClassInfoI__convert_python_array_PROTO (PyObject *obj, struct sidl_ClassInfoI__array **sidlarray)

#define sidl_ClassInfoI__convert_sidl_array_NUM 3
#define sidl_ClassInfoI__convert_sidl_array_RETURN PyObject *
#define sidl_ClassInfoI__convert_sidl_array_PROTO (struct sidl__array *sidlarray)

#define sidl_ClassInfoI__weakRef_NUM 4
#define sidl_ClassInfoI__weakRef_RETURN PyObject *
#define sidl_ClassInfoI__weakRef_PROTO (struct sidl_ClassInfoI__object *sidlobj)

#define sidl_ClassInfoI_deref_NUM 5
#define sidl_ClassInfoI_deref_RETURN void
#define sidl_ClassInfoI_deref_PROTO (struct sidl_ClassInfoI__object *sidlobj)

#define sidl_ClassInfoI__newRef_NUM 6
#define sidl_ClassInfoI__newRef_RETURN PyObject *
#define sidl_ClassInfoI__newRef_PROTO (struct sidl_ClassInfoI__object *sidlobj)

#define sidl_ClassInfoI__addRef_NUM 7
#define sidl_ClassInfoI__addRef_RETURN void
#define sidl_ClassInfoI__addRef_PROTO (struct sidl_ClassInfoI__object *sidlobj)

#define sidl_ClassInfoI_PyType_NUM 8
#define sidl_ClassInfoI_PyType_RETURN PyTypeObject *
#define sidl_ClassInfoI_PyType_PROTO (void)

#define sidl_ClassInfoI__connectI_NUM 9
#define sidl_ClassInfoI__connectI_RETURN struct sidl_ClassInfoI__object* 
#define sidl_ClassInfoI__connectI_PROTO (const char* url, sidl_bool ar, struct sidl_BaseInterface__object ** _ex)

#define sidl_ClassInfoI__rmicast_NUM 10
#define sidl_ClassInfoI__rmicast_RETURN struct sidl_ClassInfoI__object* 
#define sidl_ClassInfoI__rmicast_PROTO (void* bi, struct sidl_BaseInterface__object ** _ex)

#define sidl_ClassInfoI__API_NUM 11

#ifdef sidl_ClassInfoI_INTERNAL

#define sidl_ClassInfoI__import() ;


/*
 * This declaration is not for clients.
 */

static sidl_ClassInfoI__wrap_RETURN
sidl_ClassInfoI__wrap
sidl_ClassInfoI__wrap_PROTO;

static sidl_ClassInfoI__convert_RETURN
sidl_ClassInfoI__convert
sidl_ClassInfoI__convert_PROTO;

static sidl_ClassInfoI__convert_python_array_RETURN
sidl_ClassInfoI__convert_python_array
sidl_ClassInfoI__convert_python_array_PROTO;

static sidl_ClassInfoI__convert_sidl_array_RETURN
sidl_ClassInfoI__convert_sidl_array
sidl_ClassInfoI__convert_sidl_array_PROTO;

static sidl_ClassInfoI__weakRef_RETURN
sidl_ClassInfoI__weakRef
sidl_ClassInfoI__weakRef_PROTO;

static sidl_ClassInfoI_deref_RETURN
sidl_ClassInfoI_deref
sidl_ClassInfoI_deref_PROTO;

static sidl_ClassInfoI__newRef_RETURN
sidl_ClassInfoI__newRef
sidl_ClassInfoI__newRef_PROTO;

static sidl_ClassInfoI__addRef_RETURN
sidl_ClassInfoI__addRef
sidl_ClassInfoI__addRef_PROTO;

static sidl_ClassInfoI_PyType_RETURN
sidl_ClassInfoI_PyType
sidl_ClassInfoI_PyType_PROTO;

#else

static void **sidl_ClassInfoI__API = NULL;

#define sidl_ClassInfoI__wrap \
  (*((sidl_ClassInfoI__wrap_RETURN (*) \
  sidl_ClassInfoI__wrap_PROTO) \
  (sidl_ClassInfoI__API \
  [sidl_ClassInfoI__wrap_NUM])))

#define sidl_ClassInfoI__convert \
  (*((sidl_ClassInfoI__convert_RETURN (*) \
  sidl_ClassInfoI__convert_PROTO) \
  (sidl_ClassInfoI__API \
  [sidl_ClassInfoI__convert_NUM])))

#define sidl_ClassInfoI__convert_python_array \
  (*((sidl_ClassInfoI__convert_python_array_RETURN (*) \
  sidl_ClassInfoI__convert_python_array_PROTO) \
  (sidl_ClassInfoI__API \
  [sidl_ClassInfoI__convert_python_array_NUM])))

#define sidl_ClassInfoI__convert_sidl_array \
  (*((sidl_ClassInfoI__convert_sidl_array_RETURN (*) \
  sidl_ClassInfoI__convert_sidl_array_PROTO) \
  (sidl_ClassInfoI__API \
  [sidl_ClassInfoI__convert_sidl_array_NUM])))

#define sidl_ClassInfoI__weakRef \
  (*((sidl_ClassInfoI__weakRef_RETURN (*) \
  sidl_ClassInfoI__weakRef_PROTO) \
  (sidl_ClassInfoI__API \
  [sidl_ClassInfoI__weakRef_NUM])))

#define sidl_ClassInfoI_deref \
  (*((sidl_ClassInfoI_deref_RETURN (*) \
  sidl_ClassInfoI_deref_PROTO) \
  (sidl_ClassInfoI__API \
  [sidl_ClassInfoI_deref_NUM])))

#define sidl_ClassInfoI__newRef \
  (*((sidl_ClassInfoI__newRef_RETURN (*) \
  sidl_ClassInfoI__newRef_PROTO) \
  (sidl_ClassInfoI__API \
  [sidl_ClassInfoI__newRef_NUM])))

#define sidl_ClassInfoI__addRef \
  (*((sidl_ClassInfoI__addRef_RETURN (*) \
  sidl_ClassInfoI__addRef_PROTO) \
  (sidl_ClassInfoI__API \
  [sidl_ClassInfoI__addRef_NUM])))

#define sidl_ClassInfoI_PyType \
  (*((sidl_ClassInfoI_PyType_RETURN (*) \
  sidl_ClassInfoI_PyType_PROTO) \
  (sidl_ClassInfoI__API \
  [sidl_ClassInfoI_PyType_NUM])))

#define sidl_ClassInfoI__connectI \
  (*((sidl_ClassInfoI__connectI_RETURN (*) \
  sidl_ClassInfoI__connectI_PROTO) \
  (sidl_ClassInfoI__API \
  [sidl_ClassInfoI__connectI_NUM])))

#define sidl_ClassInfoI__rmicast \
  (*((sidl_ClassInfoI__rmicast_RETURN (*) \
  sidl_ClassInfoI__rmicast_PROTO) \
  (sidl_ClassInfoI__API \
  [sidl_ClassInfoI__rmicast_NUM])))

#ifdef HAVE_PTHREAD
#define sidl_ClassInfoI__import() \
{ \
  pthread_mutex_t __sidl_pyapi_mutex = PTHREAD_MUTEX_INITIALIZER; \
  pthread_mutex_lock(&__sidl_pyapi_mutex); \
  if (!sidl_ClassInfoI__API) { \
    PyObject *module = PyImport_ImportModule("sidl.ClassInfoI"); \
    if (module != NULL) { \
      PyObject *module_dict = PyModule_GetDict(module); \
      PyObject *c_api_object = \
        PyDict_GetItemString(module_dict, "_C_API"); \
      if (c_api_object && PyCObject_Check(c_api_object)) { \
        sidl_ClassInfoI__API = \
          (void **)PyCObject_AsVoidPtr(c_api_object); \
      } \
      else { fprintf(stderr, "babel: sidl_ClassInfoI__import failed to lookup _C_API (%p %p %s).\n", c_api_object, c_api_object ? c_api_object->ob_type : NULL, c_api_object ? c_api_object->ob_type->tp_name : ""); }\
      Py_DECREF(module); \
    } else { fprintf(stderr, "babel: sidl_ClassInfoI__import failed to import its module.\n"); }\
  }\
  pthread_mutex_unlock(&__sidl_pyapi_mutex); \
  pthread_mutex_destroy(&__sidl_pyapi_mutex); \
}
#else /* !HAVE_PTHREAD */
#define sidl_ClassInfoI__import() \
if (!sidl_ClassInfoI__API) { \
  PyObject *module = PyImport_ImportModule("sidl.ClassInfoI"); \
  if (module != NULL) { \
    PyObject *module_dict = PyModule_GetDict(module); \
    PyObject *c_api_object = \
      PyDict_GetItemString(module_dict, "_C_API"); \
    if (c_api_object && PyCObject_Check(c_api_object)) { \
      sidl_ClassInfoI__API = \
        (void **)PyCObject_AsVoidPtr(c_api_object); \
    } \
    else { fprintf(stderr, "babel: sidl_ClassInfoI__import failed to lookup _C_API (%p %p %s).\n", c_api_object, c_api_object ? c_api_object->ob_type : NULL, c_api_object ? c_api_object->ob_type->tp_name : ""); }\
    Py_DECREF(module); \
  } else { fprintf(stderr, "babel: sidl_ClassInfoI__import failed to import its module.\n"); }\
}
#endif /* HAVE_PTHREAD */

#endif

#ifdef __cplusplus
}
#endif

#endif
