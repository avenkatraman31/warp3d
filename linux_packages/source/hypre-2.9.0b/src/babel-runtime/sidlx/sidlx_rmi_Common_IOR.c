/*
 * File:          sidlx_rmi_Common_IOR.c
 * Symbol:        sidlx.rmi.Common-v0.1
 * Symbol Type:   class
 * Babel Version: 1.0.4
 * Description:   Intermediate Object Representation for sidlx.rmi.Common
 * 
 * WARNING: Automatically generated; changes will be lost
 * 
 */

/*
 * Begin: RMI includes
 */

#include "sidl_rmi_InstanceHandle.h"
#include "sidl_rmi_InstanceRegistry.h"
#include "sidl_rmi_ServerRegistry.h"
#include "sidl_rmi_Call.h"
#include "sidl_rmi_Return.h"
#include "sidl_Exception.h"
#include "sidl_exec_err.h"
#include "sidl_PreViolation.h"
#include <stdio.h>
/*
 * End: RMI includes
 */

#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include "sidlx_rmi_Common_IOR.h"
#ifndef included_sidl_BaseClass_Impl_h
#include "sidl_BaseClass_Impl.h"
#endif
#ifndef included_sidl_BaseClass_h
#include "sidl_BaseClass.h"
#endif
#ifndef included_sidl_ClassInfo_h
#include "sidl_ClassInfo.h"
#endif
#ifndef included_sidl_ClassInfoI_h
#include "sidl_ClassInfoI.h"
#endif

#ifndef NULL
#define NULL 0
#endif

#include "sidl_thread.h"
#ifdef HAVE_PTHREAD
static struct sidl_recursive_mutex_t sidlx_rmi_Common__mutex= SIDL_RECURSIVE_MUTEX_INITIALIZER;
#define LOCK_STATIC_GLOBALS sidl_recursive_mutex_lock( &sidlx_rmi_Common__mutex )
#define UNLOCK_STATIC_GLOBALS sidl_recursive_mutex_unlock( &sidlx_rmi_Common__mutex )
/* #define HAVE_LOCKED_STATIC_GLOBALS (sidl_recursive_mutex_trylock( &sidlx_rmi_Common__mutex )==EDEADLOCK) */
#else
#define LOCK_STATIC_GLOBALS
#define UNLOCK_STATIC_GLOBALS
/* #define HAVE_LOCKED_STATIC_GLOBALS (1) */
#endif

/*
 * Static variables to hold version of IOR
 */

static const int32_t s_IOR_MAJOR_VERSION = 1;
static const int32_t s_IOR_MINOR_VERSION = 0;

/*
 * Static variable to hold shared ClassInfo interface.
 */

static sidl_ClassInfo s_classInfo = NULL;

/*
 * Static variable to make sure _load called no more than once
 */

static int s_load_called = 0;
/*
 * Static variables for managing EPV initialization.
 */

static int s_method_initialized = 0;
static int s_static_initialized = 0;

static struct sidlx_rmi_Common__epv  s_new_epv__sidlx_rmi_common;
static struct sidlx_rmi_Common__sepv s_stc_epv__sidlx_rmi_common;

static struct sidlx_rmi_Common__epv  s_new_epv_hooks__sidlx_rmi_common;
static struct sidlx_rmi_Common__sepv s_stc_epv_hooks__sidlx_rmi_common;

static struct sidl_BaseClass__epv  s_new_epv__sidl_baseclass;
static struct sidl_BaseClass__epv  s_new_epv_hooks__sidl_baseclass;
static struct sidl_BaseClass__epv* s_old_epv__sidl_baseclass;
static struct sidl_BaseClass__epv* s_old_epv_hooks__sidl_baseclass;

static struct sidl_BaseInterface__epv  s_new_epv__sidl_baseinterface;
static struct sidl_BaseInterface__epv  s_new_epv_hooks__sidl_baseinterface;
static struct sidl_BaseInterface__epv* s_old_epv__sidl_baseinterface;
static struct sidl_BaseInterface__epv* s_old_epv_hooks__sidl_baseinterface;

/*
 * Declare EPV routines defined in the skeleton file.
 */

#ifdef __cplusplus
extern "C" {
#endif

extern void sidlx_rmi_Common__set_epv(
  struct sidlx_rmi_Common__epv* epv);
extern void sidlx_rmi_Common__set_sepv(
  struct sidlx_rmi_Common__sepv* sepv);
extern void sidlx_rmi_Common__call_load(void);
#ifdef __cplusplus
}
#endif

static void
sidlx_rmi_Common_addRef__exec(
        struct sidlx_rmi_Common__object* self,
        struct sidl_rmi_Call__object* inArgs,
        struct sidl_rmi_Return__object* outArgs,
        struct sidl_BaseInterface__object ** _ex) {
  /* stack space for arguments */
  sidl_BaseInterface _ex3   = NULL;
  sidl_BaseException _SIDLex = NULL;
  /* unpack in and inout argments */

  /* make the call */
  (self->d_epv->f_addRef)(
    self,
    _ex);  SIDL_CHECK(*_ex);

  /* pack return value */
  /* pack out and inout argments */
  /* clean-up dangling references */
  return;

  EXIT:
  _SIDLex = sidl_BaseException__cast(*_ex,&_ex3); EXEC_CHECK(_ex3);
  sidl_rmi_Return_throwException(outArgs, _SIDLex, &_ex3); EXEC_CHECK(_ex3);
  sidl_BaseException_deleteRef(_SIDLex, &_ex3); EXEC_CHECK(_ex3);
  sidl_BaseInterface_deleteRef(*_ex, &_ex3); EXEC_CHECK(_ex3);
  *_ex = NULL;
  return;
  EXEC_ERR:
  {
    sidl_BaseInterface _throwaway = NULL;
    sidl_BaseInterface_deleteRef(_ex3, &_throwaway);
    return;
  }
}

static void
sidlx_rmi_Common_deleteRef__exec(
        struct sidlx_rmi_Common__object* self,
        struct sidl_rmi_Call__object* inArgs,
        struct sidl_rmi_Return__object* outArgs,
        struct sidl_BaseInterface__object ** _ex) {
  /* stack space for arguments */
  sidl_BaseInterface _ex3   = NULL;
  sidl_BaseException _SIDLex = NULL;
  /* unpack in and inout argments */

  /* make the call */
  (self->d_epv->f_deleteRef)(
    self,
    _ex);  SIDL_CHECK(*_ex);

  /* pack return value */
  /* pack out and inout argments */
  /* clean-up dangling references */
  return;

  EXIT:
  _SIDLex = sidl_BaseException__cast(*_ex,&_ex3); EXEC_CHECK(_ex3);
  sidl_rmi_Return_throwException(outArgs, _SIDLex, &_ex3); EXEC_CHECK(_ex3);
  sidl_BaseException_deleteRef(_SIDLex, &_ex3); EXEC_CHECK(_ex3);
  sidl_BaseInterface_deleteRef(*_ex, &_ex3); EXEC_CHECK(_ex3);
  *_ex = NULL;
  return;
  EXEC_ERR:
  {
    sidl_BaseInterface _throwaway = NULL;
    sidl_BaseInterface_deleteRef(_ex3, &_throwaway);
    return;
  }
}

static void
sidlx_rmi_Common_isSame__exec(
        struct sidlx_rmi_Common__object* self,
        struct sidl_rmi_Call__object* inArgs,
        struct sidl_rmi_Return__object* outArgs,
        struct sidl_BaseInterface__object ** _ex) {
  /* stack space for arguments */
  char* iobj_str = NULL;
  struct sidl_BaseInterface__object* iobj = NULL;
  sidl_bool _retval = FALSE;
  sidl_BaseInterface _ex3   = NULL;
  sidl_BaseException _SIDLex = NULL;
  /* unpack in and inout argments */
  sidl_rmi_Call_unpackString( inArgs, "iobj", &iobj_str, _ex);SIDL_CHECK(*_ex);
  iobj = skel_sidlx_rmi_Common_fconnect_sidl_BaseInterface(iobj_str, TRUE, 
    _ex);SIDL_CHECK(*_ex);

  /* make the call */
  _retval = (self->d_epv->f_isSame)(
    self,
    iobj,
    _ex);  SIDL_CHECK(*_ex);

  /* pack return value */
  sidl_rmi_Return_packBool( outArgs, "_retval", _retval, _ex);SIDL_CHECK(*_ex);
  /* pack out and inout argments */
  /* clean-up dangling references */
  if(iobj) {
    sidl_BaseInterface_deleteRef((sidl_BaseInterface)iobj, _ex); SIDL_CHECK(
      *_ex);
    if(iobj_str) {free(iobj_str);}
  }
  return;

  EXIT:
  _SIDLex = sidl_BaseException__cast(*_ex,&_ex3); EXEC_CHECK(_ex3);
  sidl_rmi_Return_throwException(outArgs, _SIDLex, &_ex3); EXEC_CHECK(_ex3);
  sidl_BaseException_deleteRef(_SIDLex, &_ex3); EXEC_CHECK(_ex3);
  sidl_BaseInterface_deleteRef(*_ex, &_ex3); EXEC_CHECK(_ex3);
  *_ex = NULL;
  return;
  EXEC_ERR:
  {
    sidl_BaseInterface _throwaway = NULL;
    sidl_BaseInterface_deleteRef(_ex3, &_throwaway);
    return;
  }
}

static void
sidlx_rmi_Common_isType__exec(
        struct sidlx_rmi_Common__object* self,
        struct sidl_rmi_Call__object* inArgs,
        struct sidl_rmi_Return__object* outArgs,
        struct sidl_BaseInterface__object ** _ex) {
  /* stack space for arguments */
  char* name= NULL;
  sidl_bool _retval = FALSE;
  sidl_BaseInterface _ex3   = NULL;
  sidl_BaseException _SIDLex = NULL;
  /* unpack in and inout argments */
  sidl_rmi_Call_unpackString( inArgs, "name", &name, _ex);SIDL_CHECK(*_ex);

  /* make the call */
  _retval = (self->d_epv->f_isType)(
    self,
    name,
    _ex);  SIDL_CHECK(*_ex);

  /* pack return value */
  sidl_rmi_Return_packBool( outArgs, "_retval", _retval, _ex);SIDL_CHECK(*_ex);
  /* pack out and inout argments */
  /* clean-up dangling references */
  if(name) {free(name);}
  return;

  EXIT:
  _SIDLex = sidl_BaseException__cast(*_ex,&_ex3); EXEC_CHECK(_ex3);
  sidl_rmi_Return_throwException(outArgs, _SIDLex, &_ex3); EXEC_CHECK(_ex3);
  sidl_BaseException_deleteRef(_SIDLex, &_ex3); EXEC_CHECK(_ex3);
  sidl_BaseInterface_deleteRef(*_ex, &_ex3); EXEC_CHECK(_ex3);
  *_ex = NULL;
  return;
  EXEC_ERR:
  {
    sidl_BaseInterface _throwaway = NULL;
    sidl_BaseInterface_deleteRef(_ex3, &_throwaway);
    return;
  }
}

static void
sidlx_rmi_Common_getClassInfo__exec(
        struct sidlx_rmi_Common__object* self,
        struct sidl_rmi_Call__object* inArgs,
        struct sidl_rmi_Return__object* outArgs,
        struct sidl_BaseInterface__object ** _ex) {
  /* stack space for arguments */
  struct sidl_ClassInfo__object* _retval = NULL;
  sidl_BaseInterface _ex3   = NULL;
  sidl_BaseException _SIDLex = NULL;
  /* unpack in and inout argments */

  /* make the call */
  _retval = (self->d_epv->f_getClassInfo)(
    self,
    _ex);  SIDL_CHECK(*_ex);

  /* pack return value */
  if(_retval){
    char* _url = sidl_BaseInterface__getURL((sidl_BaseInterface)_retval, 
      _ex);SIDL_CHECK(*_ex);
    sidl_rmi_Return_packString( outArgs, "_retval", _url, _ex);SIDL_CHECK(*_ex);
    free((void*)_url);
  } else {
    sidl_rmi_Return_packString( outArgs, "_retval", NULL, _ex);SIDL_CHECK(*_ex);
  }
  /* pack out and inout argments */
  /* clean-up dangling references */
  if(_retval && sidl_BaseInterface__isRemote((sidl_BaseInterface)_retval, _ex)) 
    {
    (*((sidl_BaseInterface)_retval)->d_epv->f__raddRef)(((
      sidl_BaseInterface)_retval)->d_object, _ex); SIDL_CHECK(*_ex);
    sidl_BaseInterface_deleteRef((sidl_BaseInterface)_retval, _ex); SIDL_CHECK(
      *_ex);
  }
  return;

  EXIT:
  _SIDLex = sidl_BaseException__cast(*_ex,&_ex3); EXEC_CHECK(_ex3);
  sidl_rmi_Return_throwException(outArgs, _SIDLex, &_ex3); EXEC_CHECK(_ex3);
  sidl_BaseException_deleteRef(_SIDLex, &_ex3); EXEC_CHECK(_ex3);
  sidl_BaseInterface_deleteRef(*_ex, &_ex3); EXEC_CHECK(_ex3);
  *_ex = NULL;
  return;
  EXEC_ERR:
  {
    sidl_BaseInterface _throwaway = NULL;
    sidl_BaseInterface_deleteRef(_ex3, &_throwaway);
    return;
  }
}

static void ior_sidlx_rmi_Common__ensure_load_called(void) {
  /*
   * assert( HAVE_LOCKED_STATIC_GLOBALS );
   */

  if (! s_load_called ) {
    sidlx_rmi_Common__call_load();
    s_load_called=1;
  }
}

/* CAST: dynamic type casting support. */
static void* ior_sidlx_rmi_Common__cast(
  struct sidlx_rmi_Common__object* self,
  const char* name, sidl_BaseInterface* _ex)
{
  int
    cmp0,
    cmp1;
  void* cast = NULL;
  *_ex = NULL; /* default to no exception */
  cmp0 = strcmp(name, "sidl.BaseInterface");
  if (!cmp0) {
    (*self->d_epv->f_addRef)(self, _ex); SIDL_CHECK(*_ex);
    cast = &((*self).d_sidl_baseclass.d_sidl_baseinterface);
    return cast;
  }
  else if (cmp0 < 0) {
    cmp1 = strcmp(name, "sidl.BaseClass");
    if (!cmp1) {
      (*self->d_epv->f_addRef)(self, _ex); SIDL_CHECK(*_ex);
      cast = ((struct sidl_BaseClass__object*)self);
      return cast;
    }
  }
  else if (cmp0 > 0) {
    cmp1 = strcmp(name, "sidlx.rmi.Common");
    if (!cmp1) {
      (*self->d_epv->f_addRef)(self, _ex); SIDL_CHECK(*_ex);
      cast = ((struct sidlx_rmi_Common__object*)self);
      return cast;
    }
  }
  return cast;
  EXIT:
  return NULL;
}

/*
 * HOOKS: set static hooks activation.
 */

static void ior_sidlx_rmi_Common__set_hooks_static(
  int on, struct sidl_BaseInterface__object **_ex ) { 
  *_ex = NULL;
  /*
   * Nothing else to do since hooks support not needed.
   */

}

/*
 * HOOKS: set hooks activation.
 */

static void ior_sidlx_rmi_Common__set_hooks(
  struct sidlx_rmi_Common__object* self,
  int on, struct sidl_BaseInterface__object **_ex ) { 
  *_ex = NULL;
  /*
   * Nothing else to do since hooks support not needed.
   */

}

/*
 * DELETE: call destructor and free object memory.
 */

static void ior_sidlx_rmi_Common__delete(
  struct sidlx_rmi_Common__object* self, struct sidl_BaseInterface__object 
    **_ex)
{
  *_ex = NULL; /* default to no exception */
  sidlx_rmi_Common__fini(self,_ex);
  memset((void*)self, 0, sizeof(struct sidlx_rmi_Common__object));
  free((void*) self);
}

static char*
ior_sidlx_rmi_Common__getURL(
    struct sidlx_rmi_Common__object* self,
    struct sidl_BaseInterface__object **_ex) {
  char* ret = NULL;
  char* objid = sidl_rmi_InstanceRegistry_getInstanceByClass((
    sidl_BaseClass)self, _ex); SIDL_CHECK(*_ex);
  if(!objid) {
    objid = sidl_rmi_InstanceRegistry_registerInstance((sidl_BaseClass)self, 
      _ex); SIDL_CHECK(*_ex);
  }
  ret = sidl_rmi_ServerRegistry_getServerURL(objid, _ex); SIDL_CHECK(*_ex);
  return ret;
  EXIT:
  return NULL;
}
static void
ior_sidlx_rmi_Common__raddRef(
    struct sidlx_rmi_Common__object* self, sidl_BaseInterface* _ex) {
  sidl_BaseInterface_addRef((sidl_BaseInterface)self, _ex);
}

static sidl_bool
ior_sidlx_rmi_Common__isRemote(
    struct sidlx_rmi_Common__object* self, sidl_BaseInterface* _ex) {
  *_ex = NULL; /* default to no exception */
  return FALSE;
}

struct sidlx_rmi_Common__method {
  const char *d_name;
  void (*d_func)(struct sidlx_rmi_Common__object*,
    struct sidl_rmi_Call__object *,
    struct sidl_rmi_Return__object *,
    struct sidl_BaseInterface__object **);
};

static void
ior_sidlx_rmi_Common__exec(
    struct sidlx_rmi_Common__object* self,
    const char* methodName,
    struct sidl_rmi_Call__object* inArgs,
    struct sidl_rmi_Return__object* outArgs,
    struct sidl_BaseInterface__object **_ex ) { 
  static const struct sidlx_rmi_Common__method  s_methods[] = {
    { "addRef", sidlx_rmi_Common_addRef__exec },
    { "deleteRef", sidlx_rmi_Common_deleteRef__exec },
    { "getClassInfo", sidlx_rmi_Common_getClassInfo__exec },
    { "isSame", sidlx_rmi_Common_isSame__exec },
    { "isType", sidlx_rmi_Common_isType__exec }
  };
  int i, cmp, l = 0;
  int u = sizeof(s_methods)/sizeof(struct sidlx_rmi_Common__method);
  *_ex = NULL; /* default to no exception */
  if (methodName) {
    /* Use binary search to locate method */
    while (l < u) {
      i = (l + u) >> 1;
      if (!(cmp=strcmp(methodName, s_methods[i].d_name))) {
        (s_methods[i].d_func)(self, inArgs, outArgs, _ex); SIDL_CHECK(*_ex);
        return;
      }
      else if (cmp < 0) u = i;
      else l = i + 1;
    }
  }
  /* TODO: add code for method not found */
  SIDL_THROW(*_ex,sidl_PreViolation,"method name not found");
  EXIT:
  return;
}
/*
 * EPV: create method entry point vector (EPV) structure.
 */

static void sidlx_rmi_Common__init_epv(void)
{
/*
 * assert( HAVE_LOCKED_STATIC_GLOBALS );
 */

  struct sidlx_rmi_Common__epv*   epv  = &s_new_epv__sidlx_rmi_common;
  struct sidlx_rmi_Common__epv*   hepv = &s_new_epv_hooks__sidlx_rmi_common;
  struct sidl_BaseClass__epv*     e0   = &s_new_epv__sidl_baseclass;
  struct sidl_BaseClass__epv*     he0  = &s_new_epv_hooks__sidl_baseclass;
  struct sidl_BaseInterface__epv* e1   = &s_new_epv__sidl_baseinterface;
  struct sidl_BaseInterface__epv* he1  = &s_new_epv_hooks__sidl_baseinterface;

  struct sidl_BaseClass__epv*   s1 = NULL;
  struct sidl_BaseClass__epv*   h1 = NULL;

  sidl_BaseClass__getEPVs(
    &s_old_epv__sidl_baseinterface,
    &s_old_epv_hooks__sidl_baseinterface,
    &s_old_epv__sidl_baseclass,&s_old_epv_hooks__sidl_baseclass);
  /*
   * Here we alias the static epvs to some handy small names
   */

  s1  =  s_old_epv__sidl_baseclass;
  h1  =  s_old_epv_hooks__sidl_baseclass;

  epv->f__cast                    = ior_sidlx_rmi_Common__cast;
  epv->f__delete                  = ior_sidlx_rmi_Common__delete;
  epv->f__exec                    = ior_sidlx_rmi_Common__exec;
  epv->f__getURL                  = ior_sidlx_rmi_Common__getURL;
  epv->f__raddRef                 = ior_sidlx_rmi_Common__raddRef;
  epv->f__isRemote                = ior_sidlx_rmi_Common__isRemote;
  epv->f__set_hooks               = ior_sidlx_rmi_Common__set_hooks;
  epv->f__ctor                    = NULL;
  epv->f__ctor2                   = NULL;
  epv->f__dtor                    = NULL;
  epv->f_addRef                   = (void (*)(struct sidlx_rmi_Common__object*,
    struct sidl_BaseInterface__object **)) s1->f_addRef;
  epv->f_deleteRef                = (void (*)(struct sidlx_rmi_Common__object*,
    struct sidl_BaseInterface__object **)) s1->f_deleteRef;
  epv->f_isSame                   = (sidl_bool (*)(struct 
    sidlx_rmi_Common__object*,struct sidl_BaseInterface__object*,struct 
    sidl_BaseInterface__object **)) s1->f_isSame;
  epv->f_isType                   = (sidl_bool (*)(struct 
    sidlx_rmi_Common__object*,const char*,struct sidl_BaseInterface__object 
    **)) s1->f_isType;
  epv->f_getClassInfo             = (struct sidl_ClassInfo__object* (*)(struct 
    sidlx_rmi_Common__object*,struct sidl_BaseInterface__object **)) 
    s1->f_getClassInfo;

  sidlx_rmi_Common__set_epv(epv);

  memcpy((void*)hepv, epv, sizeof(struct sidlx_rmi_Common__epv));
  e0->f__cast               = (void* (*)(struct sidl_BaseClass__object*,const 
    char*, struct sidl_BaseInterface__object**)) epv->f__cast;
  e0->f__delete             = (void (*)(struct sidl_BaseClass__object*, struct 
    sidl_BaseInterface__object **)) epv->f__delete;
  e0->f__getURL             = (char* (*)(struct sidl_BaseClass__object*, struct 
    sidl_BaseInterface__object **)) epv->f__getURL;
  e0->f__raddRef            = (void (*)(struct sidl_BaseClass__object*, struct 
    sidl_BaseInterface__object **)) epv->f__raddRef;
  e0->f__isRemote           = (sidl_bool (*)(struct sidl_BaseClass__object*, 
    struct sidl_BaseInterface__object **)) epv->f__isRemote;
  e0->f__exec               = (void (*)(struct sidl_BaseClass__object*,const 
    char*,struct sidl_rmi_Call__object*,struct sidl_rmi_Return__object*,struct 
    sidl_BaseInterface__object **)) epv->f__exec;
  e0->f_addRef              = (void (*)(struct sidl_BaseClass__object*,struct 
    sidl_BaseInterface__object **)) epv->f_addRef;
  e0->f_deleteRef           = (void (*)(struct sidl_BaseClass__object*,struct 
    sidl_BaseInterface__object **)) epv->f_deleteRef;
  e0->f_isSame              = (sidl_bool (*)(struct sidl_BaseClass__object*,
    struct sidl_BaseInterface__object*,struct sidl_BaseInterface__object **)) 
    epv->f_isSame;
  e0->f_isType              = (sidl_bool (*)(struct sidl_BaseClass__object*,
    const char*,struct sidl_BaseInterface__object **)) epv->f_isType;
  e0->f_getClassInfo        = (struct sidl_ClassInfo__object* (*)(struct 
    sidl_BaseClass__object*,struct sidl_BaseInterface__object **)) 
    epv->f_getClassInfo;

  memcpy((void*) he0, e0, sizeof(struct sidl_BaseClass__epv));

  e1->f__cast               = (void* (*)(void*,const char*, struct 
    sidl_BaseInterface__object**)) epv->f__cast;
  e1->f__delete             = (void (*)(void*, struct 
    sidl_BaseInterface__object **)) epv->f__delete;
  e1->f__getURL             = (char* (*)(void*, struct 
    sidl_BaseInterface__object **)) epv->f__getURL;
  e1->f__raddRef            = (void (*)(void*, struct 
    sidl_BaseInterface__object **)) epv->f__raddRef;
  e1->f__isRemote           = (sidl_bool (*)(void*, struct 
    sidl_BaseInterface__object **)) epv->f__isRemote;
  e1->f__exec               = (void (*)(void*,const char*,struct 
    sidl_rmi_Call__object*,struct sidl_rmi_Return__object*,struct 
    sidl_BaseInterface__object **)) epv->f__exec;
  e1->f_addRef              = (void (*)(void*,struct sidl_BaseInterface__object 
    **)) epv->f_addRef;
  e1->f_deleteRef           = (void (*)(void*,struct sidl_BaseInterface__object 
    **)) epv->f_deleteRef;
  e1->f_isSame              = (sidl_bool (*)(void*,struct 
    sidl_BaseInterface__object*,struct sidl_BaseInterface__object **)) 
    epv->f_isSame;
  e1->f_isType              = (sidl_bool (*)(void*,const char*,struct 
    sidl_BaseInterface__object **)) epv->f_isType;
  e1->f_getClassInfo        = (struct sidl_ClassInfo__object* (*)(void*,struct 
    sidl_BaseInterface__object **)) epv->f_getClassInfo;

  memcpy((void*) he1, e1, sizeof(struct sidl_BaseInterface__epv));

  s_method_initialized = 1;
  ior_sidlx_rmi_Common__ensure_load_called();
}

/*
 * SEPV: create the static entry point vector (SEPV).
 */

static void sidlx_rmi_Common__init_sepv(void)
{
  /*
   * assert( HAVE_LOCKED_STATIC_GLOBALS );
   */

  struct sidl_BaseInterface__object *throwaway_exception = NULL;
  struct sidlx_rmi_Common__sepv*  s = &s_stc_epv__sidlx_rmi_common;
  struct sidlx_rmi_Common__sepv* hs = &s_stc_epv_hooks__sidlx_rmi_common;

  s->f__set_hooks_static             = ior_sidlx_rmi_Common__set_hooks_static;
  s->f_fork                     = NULL;
  s->f_getHostIP                = NULL;
  s->f_getCanonicalName         = NULL;

  sidlx_rmi_Common__set_sepv(s);

  memcpy((void*)hs, s, sizeof(struct sidlx_rmi_Common__sepv));

  ior_sidlx_rmi_Common__set_hooks_static(FALSE, &throwaway_exception);
  s_static_initialized = 1;
  ior_sidlx_rmi_Common__ensure_load_called();
}

void sidlx_rmi_Common__getEPVs(
  struct sidl_BaseInterface__epv **s_arg_epv__sidl_baseinterface,
  struct sidl_BaseInterface__epv **s_arg_epv_hooks__sidl_baseinterface,
  struct sidl_BaseClass__epv **s_arg_epv__sidl_baseclass,struct 
    sidl_BaseClass__epv **s_arg_epv_hooks__sidl_baseclass,
  struct sidlx_rmi_Common__epv **s_arg_epv__sidlx_rmi_common,struct 
    sidlx_rmi_Common__epv **s_arg_epv_hooks__sidlx_rmi_common)
{
  LOCK_STATIC_GLOBALS;
  if (!s_method_initialized) {
    sidlx_rmi_Common__init_epv();
  }
  UNLOCK_STATIC_GLOBALS;

  *s_arg_epv__sidl_baseinterface = &s_new_epv__sidl_baseinterface;
  *s_arg_epv_hooks__sidl_baseinterface = &s_new_epv_hooks__sidl_baseinterface;
  *s_arg_epv__sidl_baseclass = &s_new_epv__sidl_baseclass;
  *s_arg_epv_hooks__sidl_baseclass = &s_new_epv_hooks__sidl_baseclass;
  *s_arg_epv__sidlx_rmi_common = &s_new_epv__sidlx_rmi_common;
  *s_arg_epv_hooks__sidlx_rmi_common = &s_new_epv_hooks__sidlx_rmi_common;
}
/*
 * STATIC: return pointer to static EPV structure.
 */

struct sidlx_rmi_Common__sepv*
sidlx_rmi_Common__statics(void)
{
  LOCK_STATIC_GLOBALS;
  if (!s_static_initialized) {
    sidlx_rmi_Common__init_sepv();
  }
  UNLOCK_STATIC_GLOBALS;
  return &s_stc_epv__sidlx_rmi_common;
}

/*
 * SUPER: returns parent's non-overrided EPV
 */

static struct sidl_BaseClass__epv* sidlx_rmi_Common__super(void) {
  return s_old_epv__sidl_baseclass;
}

/*
 * initClassInfo: create a ClassInfo interface if necessary.
 */

static void
initClassInfo(sidl_ClassInfo *info, struct sidl_BaseInterface__object **_ex)
{
  LOCK_STATIC_GLOBALS;
  *_ex = NULL; /* default to no exception */
  if (!s_classInfo) {
    sidl_ClassInfoI impl;
    impl = sidl_ClassInfoI__create(_ex);
    s_classInfo = sidl_ClassInfo__cast(impl,_ex);
    if (impl) {
      sidl_ClassInfoI_setName(impl, "sidlx.rmi.Common",_ex);
      sidl_ClassInfoI_setIORVersion(impl, s_IOR_MAJOR_VERSION, 
        s_IOR_MINOR_VERSION,_ex);
      sidl_ClassInfoI_deleteRef(impl,_ex);
      sidl_atexit(sidl_deleteRef_atexit, &s_classInfo);
    }
  }
  UNLOCK_STATIC_GLOBALS;
  if (s_classInfo) {
    if (*info) {
      sidl_ClassInfo_deleteRef(*info,_ex);
    }
    *info = s_classInfo;
    sidl_ClassInfo_addRef(*info,_ex);
  }
}

/*
 * initMetadata: store IOR version & class in sidl.BaseClass's data
 */

static void
initMetadata(struct sidlx_rmi_Common__object* self, sidl_BaseInterface* _ex)
{
  *_ex = 0; /* default no exception */
  if (self) {
    struct sidl_BaseClass__data *data = (struct sidl_BaseClass__data*)((
      *self).d_sidl_baseclass.d_data);
    if (data) {
      data->d_IOR_major_version = s_IOR_MAJOR_VERSION;
      data->d_IOR_minor_version = s_IOR_MINOR_VERSION;
      initClassInfo(&(data->d_classinfo),_ex); SIDL_CHECK(*_ex);
    }
  }
EXIT:
return;
}

/*
 * NEW: allocate object and initialize it.
 */

struct sidlx_rmi_Common__object*
sidlx_rmi_Common__new(void* ddata, struct sidl_BaseInterface__object ** _ex)
{
  struct sidlx_rmi_Common__object* self =
    (struct sidlx_rmi_Common__object*) malloc(
      sizeof(struct sidlx_rmi_Common__object));
  *_ex = NULL; /* default to no exception */
  sidlx_rmi_Common__init(self, ddata, _ex); SIDL_CHECK(*_ex);
  initMetadata(self, _ex); SIDL_CHECK(*_ex);
  return self;
  EXIT:
  return NULL;
}

/*
 * INIT: initialize a new instance of the class object.
 */

void sidlx_rmi_Common__init(
  struct sidlx_rmi_Common__object* self,
   void* ddata,
  struct sidl_BaseInterface__object **_ex)
{
  struct sidlx_rmi_Common__object* s0 = self;
  struct sidl_BaseClass__object*   s1 = &s0->d_sidl_baseclass;

  *_ex = 0; /* default no exception */
  LOCK_STATIC_GLOBALS;
  if (!s_method_initialized) {
    sidlx_rmi_Common__init_epv();
  }
  UNLOCK_STATIC_GLOBALS;

  sidl_BaseClass__init(s1, NULL, _ex); SIDL_CHECK(*_ex);

  s1->d_sidl_baseinterface.d_epv = &s_new_epv__sidl_baseinterface;
  s1->d_epv                      = &s_new_epv__sidl_baseclass;

  s0->d_epv    = &s_new_epv__sidlx_rmi_common;

  s0->d_data = NULL;

  ior_sidlx_rmi_Common__set_hooks(s0, FALSE, _ex);

  if(ddata) {
    self->d_data = ddata;
    (*(self->d_epv->f__ctor2))(self,ddata,_ex); SIDL_CHECK(*_ex);
  } else { 
    (*(self->d_epv->f__ctor))(self,_ex); SIDL_CHECK(*_ex);
  }
  EXIT:
  return;
}

/*
 * FINI: deallocate a class instance (destructor).
 */

void sidlx_rmi_Common__fini(
  struct sidlx_rmi_Common__object* self,
  struct sidl_BaseInterface__object **_ex)
{
  struct sidlx_rmi_Common__object* s0 = self;
  struct sidl_BaseClass__object*   s1 = &s0->d_sidl_baseclass;

  *_ex = NULL; /* default to no exception */
  (*(s0->d_epv->f__dtor))(s0,_ex);
  SIDL_CHECK(*_ex);

  s1->d_sidl_baseinterface.d_epv = s_old_epv__sidl_baseinterface;
  s1->d_epv                      = s_old_epv__sidl_baseclass;

  sidl_BaseClass__fini(s1, _ex); SIDL_CHECK(*_ex);
  EXIT:
  return;
}

/*
 * VERSION: Return the version of the IOR used to generate this IOR.
 */

void
sidlx_rmi_Common__IOR_version(int32_t *major, int32_t *minor)
{
  *major = s_IOR_MAJOR_VERSION;
  *minor = s_IOR_MINOR_VERSION;
}

static const struct sidlx_rmi_Common__external
s_externalEntryPoints = {
  sidlx_rmi_Common__new,
  sidlx_rmi_Common__statics,
  sidlx_rmi_Common__super,
  1, 
  0
};

/*
 * This function returns a pointer to a static structure of
 * pointers to function entry points.  Its purpose is to provide
 * one-stop shopping for loading DLLs.
 */

const struct sidlx_rmi_Common__external*
sidlx_rmi_Common__externals(void)
{
  return &s_externalEntryPoints;
}

