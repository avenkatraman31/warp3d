// 
// File:          sidl_rmi_ProtocolException.cxx
// Symbol:        sidl.rmi.ProtocolException-v0.9.15
// Symbol Type:   class
// Babel Version: 1.0.4
// Release:       $Name: V2-9-0b $
// Revision:      @(#) $Id: sidl_rmi_ProtocolException.cxx,v 1.4 2007/09/27 19:55:47 painter Exp $
// Description:   Client-side glue code for sidl.rmi.ProtocolException
// 
// Copyright (c) 2000-2002, The Regents of the University of California.
// Produced at the Lawrence Livermore National Laboratory.
// Written by the Components Team <components@llnl.gov>
// All rights reserved.
// 
// This file is part of Babel. For more information, see
// http://www.llnl.gov/CASC/components/. Please read the COPYRIGHT file
// for Our Notice and the LICENSE file for the GNU Lesser General Public
// License.
// 
// This program is free software; you can redistribute it and/or modify it
// under the terms of the GNU Lesser General Public License (as published by
// the Free Software Foundation) version 2.1 dated February 1999.
// 
// This program is distributed in the hope that it will be useful, but
// WITHOUT ANY WARRANTY; without even the IMPLIED WARRANTY OF
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the terms and
// conditions of the GNU Lesser General Public License for more details.
// 
// You should have recieved a copy of the GNU Lesser General Public License
// along with this program; if not, write to the Free Software Foundation,
// Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
// 
// WARNING: Automatically generated; changes will be lost
// 
// 

#ifndef included_sidl_rmi_ProtocolException_hxx
#include "sidl_rmi_ProtocolException.hxx"
#endif
#ifndef included_sidl_BaseInterface_hxx
#include "sidl_BaseInterface.hxx"
#endif
#ifndef included_sidl_BaseClass_hxx
#include "sidl_BaseClass.hxx"
#endif
#ifndef included_sidl_BaseException_hxx
#include "sidl_BaseException.hxx"
#endif
#ifndef included_sidl_LangSpecificException_hxx
#include "sidl_LangSpecificException.hxx"
#endif
#ifndef included_sidl_RuntimeException_hxx
#include "sidl_RuntimeException.hxx"
#endif
#ifndef included_sidl_rmi_Call_hxx
#include "sidl_rmi_Call.hxx"
#endif
#ifndef included_sidl_rmi_Return_hxx
#include "sidl_rmi_Return.hxx"
#endif
#ifndef included_sidl_rmi_Ticket_hxx
#include "sidl_rmi_Ticket.hxx"
#endif
#ifndef included_sidl_rmi_InstanceHandle_hxx
#include "sidl_rmi_InstanceHandle.hxx"
#endif
#include "sidl_String.h"
#include "sidl_rmi_ConnectRegistry.h"
// 
// Includes for all method dependencies.
// 
#ifndef included_sidl_BaseInterface_hxx
#include "sidl_BaseInterface.hxx"
#endif
#ifndef included_sidl_ClassInfo_hxx
#include "sidl_ClassInfo.hxx"
#endif
#ifndef included_sidl_io_Deserializer_hxx
#include "sidl_io_Deserializer.hxx"
#endif
#ifndef included_sidl_io_Serializer_hxx
#include "sidl_io_Serializer.hxx"
#endif

#define LANG_SPECIFIC_INIT()
// 
// connect_loaded is a boolean value showing if the IHConnect for this object has been loaded into the connectRegistry
// 
static int connect_loaded = 0;
extern "C" {
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
static struct sidl_recursive_mutex_t sidl_rmi_ProtocolException__mutex= SIDL_RECURSIVE_MUTEX_INITIALIZER;
#define LOCK_STATIC_GLOBALS sidl_recursive_mutex_lock( &sidl_rmi_ProtocolException__mutex )
#define UNLOCK_STATIC_GLOBALS sidl_recursive_mutex_unlock( &sidl_rmi_ProtocolException__mutex )
/* #define HAVE_LOCKED_STATIC_GLOBALS (sidl_recursive_mutex_trylock( &sidl_rmi_ProtocolException__mutex )==EDEADLOCK) */
#else
#define LOCK_STATIC_GLOBALS
#define UNLOCK_STATIC_GLOBALS
/* #define HAVE_LOCKED_STATIC_GLOBALS (1) */
#endif

  // Static variables to hold version of IOR
  static const int32_t s_IOR_MAJOR_VERSION = 1;
  static const int32_t s_IOR_MINOR_VERSION = 0;

  // Static variables for managing EPV initialization.
  static int s_remote_initialized = 0;

  static struct sidl_rmi_ProtocolException__epv 
    s_rem_epv__sidl_rmi_protocolexception;

  static struct sidl_BaseClass__epv  s_rem_epv__sidl_baseclass;

  static struct sidl_BaseException__epv  s_rem_epv__sidl_baseexception;

  static struct sidl_BaseInterface__epv  s_rem_epv__sidl_baseinterface;

  static struct sidl_RuntimeException__epv  s_rem_epv__sidl_runtimeexception;

  static struct sidl_SIDLException__epv  s_rem_epv__sidl_sidlexception;

  static struct sidl_io_IOException__epv  s_rem_epv__sidl_io_ioexception;

  static struct sidl_io_Serializable__epv  s_rem_epv__sidl_io_serializable;

  static struct sidl_rmi_NetworkException__epv  
    s_rem_epv__sidl_rmi_networkexception;


  // REMOTE CAST: dynamic type casting for remote objects.
  static void* remote_sidl_rmi_ProtocolException__cast(
    struct sidl_rmi_ProtocolException__object* self,
    const char* name, sidl_BaseInterface* _ex)
  {
    int
      cmp0,
      cmp1,
      cmp2,
      cmp3;
    void* cast = NULL;
    *_ex = NULL; /* default to no exception */
    cmp0 = strcmp(name, "sidl.SIDLException");
    if (!cmp0) {
      (*self->d_epv->f_addRef)(self, _ex); SIDL_CHECK(*_ex);
      cast = ((struct sidl_SIDLException__object*)self);
      return cast;
    }
    else if (cmp0 < 0) {
      cmp1 = strcmp(name, "sidl.BaseInterface");
      if (!cmp1) {
        (*self->d_epv->f_addRef)(self, _ex); SIDL_CHECK(*_ex);
        cast = &((
          *self).d_sidl_rmi_networkexception.d_sidl_io_ioexception.d_sidl_sidlexception.d_sidl_baseclass.d_sidl_baseinterface);
        return cast;
      }
      else if (cmp1 < 0) {
        cmp2 = strcmp(name, "sidl.BaseException");
        if (!cmp2) {
          (*self->d_epv->f_addRef)(self, _ex); SIDL_CHECK(*_ex);
          cast = &((
            *self).d_sidl_rmi_networkexception.d_sidl_io_ioexception.d_sidl_sidlexception.d_sidl_baseexception);
          return cast;
        }
        else if (cmp2 < 0) {
          cmp3 = strcmp(name, "sidl.BaseClass");
          if (!cmp3) {
            (*self->d_epv->f_addRef)(self, _ex); SIDL_CHECK(*_ex);
            cast = ((struct sidl_BaseClass__object*)self);
            return cast;
          }
        }
      }
      else if (cmp1 > 0) {
        cmp2 = strcmp(name, "sidl.RuntimeException");
        if (!cmp2) {
          (*self->d_epv->f_addRef)(self, _ex); SIDL_CHECK(*_ex);
          cast = &((
            *self).d_sidl_rmi_networkexception.d_sidl_io_ioexception.d_sidl_runtimeexception);
          return cast;
        }
      }
    }
    else if (cmp0 > 0) {
      cmp1 = strcmp(name, "sidl.rmi.NetworkException");
      if (!cmp1) {
        (*self->d_epv->f_addRef)(self, _ex); SIDL_CHECK(*_ex);
        cast = ((struct sidl_rmi_NetworkException__object*)self);
        return cast;
      }
      else if (cmp1 < 0) {
        cmp2 = strcmp(name, "sidl.io.Serializable");
        if (!cmp2) {
          (*self->d_epv->f_addRef)(self, _ex); SIDL_CHECK(*_ex);
          cast = &((
            *self).d_sidl_rmi_networkexception.d_sidl_io_ioexception.d_sidl_sidlexception.d_sidl_io_serializable);
          return cast;
        }
        else if (cmp2 < 0) {
          cmp3 = strcmp(name, "sidl.io.IOException");
          if (!cmp3) {
            (*self->d_epv->f_addRef)(self, _ex); SIDL_CHECK(*_ex);
            cast = ((struct sidl_io_IOException__object*)self);
            return cast;
          }
        }
      }
      else if (cmp1 > 0) {
        cmp2 = strcmp(name, "sidl.rmi.ProtocolException");
        if (!cmp2) {
          (*self->d_epv->f_addRef)(self, _ex); SIDL_CHECK(*_ex);
          cast = ((struct sidl_rmi_ProtocolException__object*)self);
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
        sidl_rmi_ProtocolException__remote*)self->d_data)->d_ih, _ex);
    }

    return cast;
    EXIT:
    return NULL;
  }

  // REMOTE DELETE: call the remote destructor for the object.
  static void remote_sidl_rmi_ProtocolException__delete(
    struct sidl_rmi_ProtocolException__object* self,
    sidl_BaseInterface* _ex)
  {
    *_ex = NULL;
    free((void*) self);
  }

  // REMOTE GETURL: call the getURL function for the object.
  static char* remote_sidl_rmi_ProtocolException__getURL(
    struct sidl_rmi_ProtocolException__object* self, sidl_BaseInterface* _ex)
  {
    struct sidl_rmi_InstanceHandle__object *conn = ((struct 
      sidl_rmi_ProtocolException__remote*)self->d_data)->d_ih;
    *_ex = NULL;
    if(conn != NULL) {
      return sidl_rmi_InstanceHandle_getObjectURL(conn, _ex);
    }
    return NULL;
  }

  // REMOTE ADDREF: For internal babel use only! Remote addRef.
  static void remote_sidl_rmi_ProtocolException__raddRef(
    struct sidl_rmi_ProtocolException__object* self,sidl_BaseInterface* _ex)
  {
    sidl_BaseException netex = NULL;
    // initialize a new invocation
    sidl_BaseInterface _throwaway = NULL;
    struct sidl_rmi_InstanceHandle__object *_conn = ((struct 
      sidl_rmi_ProtocolException__remote*)self->d_data)->d_ih;
    sidl_rmi_Response _rsvp = NULL;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "addRef", _ex ); SIDL_CHECK(*_ex);
    // send actual RMI request
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv,_ex);SIDL_CHECK(*_ex);
    // Check for exceptions
    netex = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);
    if(netex != NULL) {
      sidl_BaseInterface throwaway_exception = NULL;
      *_ex = (sidl_BaseInterface) sidl_BaseInterface__rmicast(netex,
        &throwaway_exception);
      return;
    }

    // cleanup and return
    EXIT:
    if(_inv) { sidl_rmi_Invocation_deleteRef(_inv,&_throwaway); }
    if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp,&_throwaway); }
    return;
  }

  // REMOTE ISREMOTE: returns true if this object is Remote (it is).
  static sidl_bool
  remote_sidl_rmi_ProtocolException__isRemote(
      struct sidl_rmi_ProtocolException__object* self, 
      sidl_BaseInterface *_ex) {
    *_ex = NULL;
    return TRUE;
  }

  // REMOTE METHOD STUB:_set_hooks
  static void
  remote_sidl_rmi_ProtocolException__set_hooks(
    /* in */ struct sidl_rmi_ProtocolException__object* self ,
    /* in */ sidl_bool on,
    /* out */ struct sidl_BaseInterface__object* *_ex)
  {
    LANG_SPECIFIC_INIT();
    *_ex = NULL;
    {
      // initialize a new invocation
      sidl_BaseInterface _throwaway = NULL;
      sidl_BaseException _be = NULL;
      sidl_rmi_Response _rsvp = NULL;
      struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
        sidl_rmi_ProtocolException__remote*)self->d_data)->d_ih;
      sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( 
        _conn, "_set_hooks", _ex ); SIDL_CHECK(*_ex);

      // pack in and inout arguments
      sidl_rmi_Invocation_packBool( _inv, "on", on, _ex);SIDL_CHECK(*_ex);

      // send actual RMI request
      _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

      _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
      if(_be != NULL) {
        sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from sidl.rmi.ProtocolException._set_hooks.", &throwaway_exception);
        *_ex = (sidl_BaseInterface) sidl_BaseInterface__rmicast(_be,
          &throwaway_exception);
        goto EXIT;
      }

      // unpack out and inout arguments

      // cleanup and return
      EXIT:
      if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
      if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
      return;
    }
  }

  // REMOTE EXEC: call the exec function for the object.
  static void remote_sidl_rmi_ProtocolException__exec(
    struct sidl_rmi_ProtocolException__object* self,const char* methodName,
    sidl_rmi_Call inArgs,
    sidl_rmi_Return outArgs,
    sidl_BaseInterface* _ex)
  {
    *_ex = NULL;
  }

  // REMOTE METHOD STUB:addRef
  static void
  remote_sidl_rmi_ProtocolException_addRef(
    /* in */ struct sidl_rmi_ProtocolException__object* self ,
    /* out */ struct sidl_BaseInterface__object* *_ex)
  {
    LANG_SPECIFIC_INIT();
    *_ex = NULL;
    {
      struct sidl_rmi_ProtocolException__remote* r_obj = (struct 
        sidl_rmi_ProtocolException__remote*)self->d_data;
      LOCK_STATIC_GLOBALS;
      r_obj->d_refcount++;
      UNLOCK_STATIC_GLOBALS;
    }
  }

  // REMOTE METHOD STUB:deleteRef
  static void
  remote_sidl_rmi_ProtocolException_deleteRef(
    /* in */ struct sidl_rmi_ProtocolException__object* self ,
    /* out */ struct sidl_BaseInterface__object* *_ex)
  {
    LANG_SPECIFIC_INIT();
    *_ex = NULL;
    {
      struct sidl_rmi_ProtocolException__remote* r_obj = (struct 
        sidl_rmi_ProtocolException__remote*)self->d_data;
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

  // REMOTE METHOD STUB:isSame
  static sidl_bool
  remote_sidl_rmi_ProtocolException_isSame(
    /* in */ struct sidl_rmi_ProtocolException__object* self ,
    /* in */ struct sidl_BaseInterface__object* iobj,
    /* out */ struct sidl_BaseInterface__object* *_ex)
  {
    LANG_SPECIFIC_INIT();
    *_ex = NULL;
    {
      // initialize a new invocation
      sidl_BaseInterface _throwaway = NULL;
      sidl_BaseException _be = NULL;
      sidl_rmi_Response _rsvp = NULL;
      sidl_bool _retval = FALSE;
      struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
        sidl_rmi_ProtocolException__remote*)self->d_data)->d_ih;
      sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( 
        _conn, "isSame", _ex ); SIDL_CHECK(*_ex);

      // pack in and inout arguments
      if(iobj){
        char* _url = sidl_BaseInterface__getURL((sidl_BaseInterface)iobj, 
          _ex);SIDL_CHECK(*_ex);
        sidl_rmi_Invocation_packString( _inv, "iobj", _url, _ex);SIDL_CHECK(
          *_ex);
        free((void*)_url);
      } else {
        sidl_rmi_Invocation_packString( _inv, "iobj", NULL, _ex);SIDL_CHECK(
          *_ex);
      }

      // send actual RMI request
      _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

      _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
      if(_be != NULL) {
        sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from sidl.rmi.ProtocolException.isSame.", &throwaway_exception);
        *_ex = (sidl_BaseInterface) sidl_BaseInterface__rmicast(_be,
          &throwaway_exception);
        goto EXIT;
      }

      // extract return value
      sidl_rmi_Response_unpackBool( _rsvp, "_retval", &_retval, _ex);SIDL_CHECK(
        *_ex);

      // unpack out and inout arguments

      // cleanup and return
      EXIT:
      if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
      if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
      return _retval;
    }
  }

  // REMOTE METHOD STUB:isType
  static sidl_bool
  remote_sidl_rmi_ProtocolException_isType(
    /* in */ struct sidl_rmi_ProtocolException__object* self ,
    /* in */ const char* name,
    /* out */ struct sidl_BaseInterface__object* *_ex)
  {
    LANG_SPECIFIC_INIT();
    *_ex = NULL;
    {
      // initialize a new invocation
      sidl_BaseInterface _throwaway = NULL;
      sidl_BaseException _be = NULL;
      sidl_rmi_Response _rsvp = NULL;
      sidl_bool _retval = FALSE;
      struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
        sidl_rmi_ProtocolException__remote*)self->d_data)->d_ih;
      sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( 
        _conn, "isType", _ex ); SIDL_CHECK(*_ex);

      // pack in and inout arguments
      sidl_rmi_Invocation_packString( _inv, "name", name, _ex);SIDL_CHECK(*_ex);

      // send actual RMI request
      _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

      _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
      if(_be != NULL) {
        sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from sidl.rmi.ProtocolException.isType.", &throwaway_exception);
        *_ex = (sidl_BaseInterface) sidl_BaseInterface__rmicast(_be,
          &throwaway_exception);
        goto EXIT;
      }

      // extract return value
      sidl_rmi_Response_unpackBool( _rsvp, "_retval", &_retval, _ex);SIDL_CHECK(
        *_ex);

      // unpack out and inout arguments

      // cleanup and return
      EXIT:
      if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
      if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
      return _retval;
    }
  }

  // REMOTE METHOD STUB:getClassInfo
  static struct sidl_ClassInfo__object*
  remote_sidl_rmi_ProtocolException_getClassInfo(
    /* in */ struct sidl_rmi_ProtocolException__object* self ,
    /* out */ struct sidl_BaseInterface__object* *_ex)
  {
    LANG_SPECIFIC_INIT();
    *_ex = NULL;
    {
      // initialize a new invocation
      sidl_BaseInterface _throwaway = NULL;
      sidl_BaseException _be = NULL;
      sidl_rmi_Response _rsvp = NULL;
      char*_retval_str = NULL;
      struct sidl_ClassInfo__object* _retval = 0;
      struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
        sidl_rmi_ProtocolException__remote*)self->d_data)->d_ih;
      sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( 
        _conn, "getClassInfo", _ex ); SIDL_CHECK(*_ex);

      // pack in and inout arguments

      // send actual RMI request
      _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

      _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
      if(_be != NULL) {
        sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from sidl.rmi.ProtocolException.getClassInfo.", &throwaway_exception);
        *_ex = (sidl_BaseInterface) sidl_BaseInterface__rmicast(_be,
          &throwaway_exception);
        goto EXIT;
      }

      // extract return value
      sidl_rmi_Response_unpackString( _rsvp, "_retval", &_retval_str, 
        _ex);SIDL_CHECK(*_ex);
      _retval = sidl_ClassInfo__connectI(_retval_str, FALSE, _ex);SIDL_CHECK(
        *_ex);

      // unpack out and inout arguments

      // cleanup and return
      EXIT:
      if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
      if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
      return _retval;
    }
  }

  // REMOTE METHOD STUB:getNote
  static char*
  remote_sidl_rmi_ProtocolException_getNote(
    /* in */ struct sidl_rmi_ProtocolException__object* self ,
    /* out */ struct sidl_BaseInterface__object* *_ex)
  {
    LANG_SPECIFIC_INIT();
    *_ex = NULL;
    {
      // initialize a new invocation
      sidl_BaseInterface _throwaway = NULL;
      sidl_BaseException _be = NULL;
      sidl_rmi_Response _rsvp = NULL;
      char* _retval = 0;
      struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
        sidl_rmi_ProtocolException__remote*)self->d_data)->d_ih;
      sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( 
        _conn, "getNote", _ex ); SIDL_CHECK(*_ex);

      // pack in and inout arguments

      // send actual RMI request
      _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

      _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
      if(_be != NULL) {
        sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from sidl.rmi.ProtocolException.getNote.", &throwaway_exception);
        *_ex = (sidl_BaseInterface) sidl_BaseInterface__rmicast(_be,
          &throwaway_exception);
        goto EXIT;
      }

      // extract return value
      sidl_rmi_Response_unpackString( _rsvp, "_retval", &_retval, 
        _ex);SIDL_CHECK(*_ex);

      // unpack out and inout arguments

      // cleanup and return
      EXIT:
      if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
      if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
      return _retval;
    }
  }

  // REMOTE METHOD STUB:setNote
  static void
  remote_sidl_rmi_ProtocolException_setNote(
    /* in */ struct sidl_rmi_ProtocolException__object* self ,
    /* in */ const char* message,
    /* out */ struct sidl_BaseInterface__object* *_ex)
  {
    LANG_SPECIFIC_INIT();
    *_ex = NULL;
    {
      // initialize a new invocation
      sidl_BaseInterface _throwaway = NULL;
      sidl_BaseException _be = NULL;
      sidl_rmi_Response _rsvp = NULL;
      struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
        sidl_rmi_ProtocolException__remote*)self->d_data)->d_ih;
      sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( 
        _conn, "setNote", _ex ); SIDL_CHECK(*_ex);

      // pack in and inout arguments
      sidl_rmi_Invocation_packString( _inv, "message", message, _ex);SIDL_CHECK(
        *_ex);

      // send actual RMI request
      _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

      _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
      if(_be != NULL) {
        sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from sidl.rmi.ProtocolException.setNote.", &throwaway_exception);
        *_ex = (sidl_BaseInterface) sidl_BaseInterface__rmicast(_be,
          &throwaway_exception);
        goto EXIT;
      }

      // unpack out and inout arguments

      // cleanup and return
      EXIT:
      if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
      if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
      return;
    }
  }

  // REMOTE METHOD STUB:getTrace
  static char*
  remote_sidl_rmi_ProtocolException_getTrace(
    /* in */ struct sidl_rmi_ProtocolException__object* self ,
    /* out */ struct sidl_BaseInterface__object* *_ex)
  {
    LANG_SPECIFIC_INIT();
    *_ex = NULL;
    {
      // initialize a new invocation
      sidl_BaseInterface _throwaway = NULL;
      sidl_BaseException _be = NULL;
      sidl_rmi_Response _rsvp = NULL;
      char* _retval = 0;
      struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
        sidl_rmi_ProtocolException__remote*)self->d_data)->d_ih;
      sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( 
        _conn, "getTrace", _ex ); SIDL_CHECK(*_ex);

      // pack in and inout arguments

      // send actual RMI request
      _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

      _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
      if(_be != NULL) {
        sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from sidl.rmi.ProtocolException.getTrace.", &throwaway_exception);
        *_ex = (sidl_BaseInterface) sidl_BaseInterface__rmicast(_be,
          &throwaway_exception);
        goto EXIT;
      }

      // extract return value
      sidl_rmi_Response_unpackString( _rsvp, "_retval", &_retval, 
        _ex);SIDL_CHECK(*_ex);

      // unpack out and inout arguments

      // cleanup and return
      EXIT:
      if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
      if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
      return _retval;
    }
  }

  // REMOTE METHOD STUB:addLine
  static void
  remote_sidl_rmi_ProtocolException_addLine(
    /* in */ struct sidl_rmi_ProtocolException__object* self ,
    /* in */ const char* traceline,
    /* out */ struct sidl_BaseInterface__object* *_ex)
  {
    LANG_SPECIFIC_INIT();
    *_ex = NULL;
    {
      // initialize a new invocation
      sidl_BaseInterface _throwaway = NULL;
      sidl_BaseException _be = NULL;
      sidl_rmi_Response _rsvp = NULL;
      struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
        sidl_rmi_ProtocolException__remote*)self->d_data)->d_ih;
      sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( 
        _conn, "addLine", _ex ); SIDL_CHECK(*_ex);

      // pack in and inout arguments
      sidl_rmi_Invocation_packString( _inv, "traceline", traceline, 
        _ex);SIDL_CHECK(*_ex);

      // send actual RMI request
      _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

      _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
      if(_be != NULL) {
        sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from sidl.rmi.ProtocolException.addLine.", &throwaway_exception);
        *_ex = (sidl_BaseInterface) sidl_BaseInterface__rmicast(_be,
          &throwaway_exception);
        goto EXIT;
      }

      // unpack out and inout arguments

      // cleanup and return
      EXIT:
      if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
      if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
      return;
    }
  }

  // REMOTE METHOD STUB:add
  static void
  remote_sidl_rmi_ProtocolException_add(
    /* in */ struct sidl_rmi_ProtocolException__object* self ,
    /* in */ const char* filename,
    /* in */ int32_t lineno,
    /* in */ const char* methodname,
    /* out */ struct sidl_BaseInterface__object* *_ex)
  {
    LANG_SPECIFIC_INIT();
    *_ex = NULL;
    {
      // initialize a new invocation
      sidl_BaseInterface _throwaway = NULL;
      sidl_BaseException _be = NULL;
      sidl_rmi_Response _rsvp = NULL;
      struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
        sidl_rmi_ProtocolException__remote*)self->d_data)->d_ih;
      sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( 
        _conn, "add", _ex ); SIDL_CHECK(*_ex);

      // pack in and inout arguments
      sidl_rmi_Invocation_packString( _inv, "filename", filename, 
        _ex);SIDL_CHECK(*_ex);
      sidl_rmi_Invocation_packInt( _inv, "lineno", lineno, _ex);SIDL_CHECK(
        *_ex);
      sidl_rmi_Invocation_packString( _inv, "methodname", methodname, 
        _ex);SIDL_CHECK(*_ex);

      // send actual RMI request
      _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

      _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
      if(_be != NULL) {
        sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from sidl.rmi.ProtocolException.add.", &throwaway_exception);
        *_ex = (sidl_BaseInterface) sidl_BaseInterface__rmicast(_be,
          &throwaway_exception);
        goto EXIT;
      }

      // unpack out and inout arguments

      // cleanup and return
      EXIT:
      if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
      if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
      return;
    }
  }

  // REMOTE METHOD STUB:getHopCount
  static int32_t
  remote_sidl_rmi_ProtocolException_getHopCount(
    /* in */ struct sidl_rmi_ProtocolException__object* self ,
    /* out */ struct sidl_BaseInterface__object* *_ex)
  {
    LANG_SPECIFIC_INIT();
    *_ex = NULL;
    {
      // initialize a new invocation
      sidl_BaseInterface _throwaway = NULL;
      sidl_BaseException _be = NULL;
      sidl_rmi_Response _rsvp = NULL;
      int32_t _retval = 0;
      struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
        sidl_rmi_ProtocolException__remote*)self->d_data)->d_ih;
      sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( 
        _conn, "getHopCount", _ex ); SIDL_CHECK(*_ex);

      // pack in and inout arguments

      // send actual RMI request
      _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

      _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
      if(_be != NULL) {
        sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from sidl.rmi.ProtocolException.getHopCount.", &throwaway_exception);
        *_ex = (sidl_BaseInterface) sidl_BaseInterface__rmicast(_be,
          &throwaway_exception);
        goto EXIT;
      }

      // extract return value
      sidl_rmi_Response_unpackInt( _rsvp, "_retval", &_retval, _ex);SIDL_CHECK(
        *_ex);

      // unpack out and inout arguments

      // cleanup and return
      EXIT:
      if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
      if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
      return _retval;
    }
  }

  // REMOTE METHOD STUB:packObj
  static void
  remote_sidl_rmi_ProtocolException_packObj(
    /* in */ struct sidl_rmi_ProtocolException__object* self ,
    /* in */ struct sidl_io_Serializer__object* ser,
    /* out */ struct sidl_BaseInterface__object* *_ex)
  {
    LANG_SPECIFIC_INIT();
    *_ex = NULL;
    {
      // initialize a new invocation
      sidl_BaseInterface _throwaway = NULL;
      sidl_BaseException _be = NULL;
      sidl_rmi_Response _rsvp = NULL;
      struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
        sidl_rmi_ProtocolException__remote*)self->d_data)->d_ih;
      sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( 
        _conn, "packObj", _ex ); SIDL_CHECK(*_ex);

      // pack in and inout arguments
      if(ser){
        char* _url = sidl_BaseInterface__getURL((sidl_BaseInterface)ser, 
          _ex);SIDL_CHECK(*_ex);
        sidl_rmi_Invocation_packString( _inv, "ser", _url, _ex);SIDL_CHECK(
          *_ex);
        free((void*)_url);
      } else {
        sidl_rmi_Invocation_packString( _inv, "ser", NULL, _ex);SIDL_CHECK(
          *_ex);
      }

      // send actual RMI request
      _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

      _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
      if(_be != NULL) {
        sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from sidl.rmi.ProtocolException.packObj.", &throwaway_exception);
        *_ex = (sidl_BaseInterface) sidl_BaseInterface__rmicast(_be,
          &throwaway_exception);
        goto EXIT;
      }

      // unpack out and inout arguments

      // cleanup and return
      EXIT:
      if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
      if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
      return;
    }
  }

  // REMOTE METHOD STUB:unpackObj
  static void
  remote_sidl_rmi_ProtocolException_unpackObj(
    /* in */ struct sidl_rmi_ProtocolException__object* self ,
    /* in */ struct sidl_io_Deserializer__object* des,
    /* out */ struct sidl_BaseInterface__object* *_ex)
  {
    LANG_SPECIFIC_INIT();
    *_ex = NULL;
    {
      // initialize a new invocation
      sidl_BaseInterface _throwaway = NULL;
      sidl_BaseException _be = NULL;
      sidl_rmi_Response _rsvp = NULL;
      struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
        sidl_rmi_ProtocolException__remote*)self->d_data)->d_ih;
      sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( 
        _conn, "unpackObj", _ex ); SIDL_CHECK(*_ex);

      // pack in and inout arguments
      if(des){
        char* _url = sidl_BaseInterface__getURL((sidl_BaseInterface)des, 
          _ex);SIDL_CHECK(*_ex);
        sidl_rmi_Invocation_packString( _inv, "des", _url, _ex);SIDL_CHECK(
          *_ex);
        free((void*)_url);
      } else {
        sidl_rmi_Invocation_packString( _inv, "des", NULL, _ex);SIDL_CHECK(
          *_ex);
      }

      // send actual RMI request
      _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

      _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
      if(_be != NULL) {
        sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from sidl.rmi.ProtocolException.unpackObj.", &throwaway_exception);
        *_ex = (sidl_BaseInterface) sidl_BaseInterface__rmicast(_be,
          &throwaway_exception);
        goto EXIT;
      }

      // unpack out and inout arguments

      // cleanup and return
      EXIT:
      if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
      if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
      return;
    }
  }

  // REMOTE EPV: create remote entry point vectors (EPVs).
  static void sidl_rmi_ProtocolException__init_remote_epv(void)
  {
    // assert( HAVE_LOCKED_STATIC_GLOBALS );
    struct sidl_rmi_ProtocolException__epv* epv = 
      &s_rem_epv__sidl_rmi_protocolexception;
    struct sidl_BaseClass__epv*             e0  = &s_rem_epv__sidl_baseclass;
    struct sidl_BaseException__epv*         e1  = 
      &s_rem_epv__sidl_baseexception;
    struct sidl_BaseInterface__epv*         e2  = 
      &s_rem_epv__sidl_baseinterface;
    struct sidl_RuntimeException__epv*      e3  = 
      &s_rem_epv__sidl_runtimeexception;
    struct sidl_SIDLException__epv*         e4  = 
      &s_rem_epv__sidl_sidlexception;
    struct sidl_io_IOException__epv*        e5  = 
      &s_rem_epv__sidl_io_ioexception;
    struct sidl_io_Serializable__epv*       e6  = 
      &s_rem_epv__sidl_io_serializable;
    struct sidl_rmi_NetworkException__epv*  e7  = 
      &s_rem_epv__sidl_rmi_networkexception;

    epv->f__cast             = remote_sidl_rmi_ProtocolException__cast;
    epv->f__delete           = remote_sidl_rmi_ProtocolException__delete;
    epv->f__exec             = remote_sidl_rmi_ProtocolException__exec;
    epv->f__getURL           = remote_sidl_rmi_ProtocolException__getURL;
    epv->f__raddRef          = remote_sidl_rmi_ProtocolException__raddRef;
    epv->f__isRemote         = remote_sidl_rmi_ProtocolException__isRemote;
    epv->f__set_hooks        = remote_sidl_rmi_ProtocolException__set_hooks;
    epv->f__ctor             = NULL;
    epv->f__ctor2            = NULL;
    epv->f__dtor             = NULL;
    epv->f_addRef            = remote_sidl_rmi_ProtocolException_addRef;
    epv->f_deleteRef         = remote_sidl_rmi_ProtocolException_deleteRef;
    epv->f_isSame            = remote_sidl_rmi_ProtocolException_isSame;
    epv->f_isType            = remote_sidl_rmi_ProtocolException_isType;
    epv->f_getClassInfo      = remote_sidl_rmi_ProtocolException_getClassInfo;
    epv->f_getNote           = remote_sidl_rmi_ProtocolException_getNote;
    epv->f_setNote           = remote_sidl_rmi_ProtocolException_setNote;
    epv->f_getTrace          = remote_sidl_rmi_ProtocolException_getTrace;
    epv->f_addLine           = remote_sidl_rmi_ProtocolException_addLine;
    epv->f_add               = remote_sidl_rmi_ProtocolException_add;
    epv->f_getHopCount       = remote_sidl_rmi_ProtocolException_getHopCount;
    epv->f_packObj           = remote_sidl_rmi_ProtocolException_packObj;
    epv->f_unpackObj         = remote_sidl_rmi_ProtocolException_unpackObj;

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
    e1->f_isSame       = (sidl_bool (*)(void*,struct 
      sidl_BaseInterface__object*,struct sidl_BaseInterface__object **)) 
      epv->f_isSame;
    e1->f_isType       = (sidl_bool (*)(void*,const char*,struct 
      sidl_BaseInterface__object **)) epv->f_isType;
    e1->f_getClassInfo = (struct sidl_ClassInfo__object* (*)(void*,struct 
      sidl_BaseInterface__object **)) epv->f_getClassInfo;
    e1->f_packObj      = (void (*)(void*,struct sidl_io_Serializer__object*,
      struct sidl_BaseInterface__object **)) epv->f_packObj;
    e1->f_unpackObj    = (void (*)(void*,struct sidl_io_Deserializer__object*,
      struct sidl_BaseInterface__object **)) epv->f_unpackObj;
    e1->f_getNote      = (char* (*)(void*,struct sidl_BaseInterface__object 
      **)) epv->f_getNote;
    e1->f_setNote      = (void (*)(void*,const char*,struct 
      sidl_BaseInterface__object **)) epv->f_setNote;
    e1->f_getTrace     = (char* (*)(void*,struct sidl_BaseInterface__object 
      **)) epv->f_getTrace;
    e1->f_addLine      = (void (*)(void*,const char*,struct 
      sidl_BaseInterface__object **)) epv->f_addLine;
    e1->f_add          = (void (*)(void*,const char*,int32_t,const char*,struct 
      sidl_BaseInterface__object **)) epv->f_add;

    e2->f__cast        = (void* (*)(void*,const char*,sidl_BaseInterface*)) 
      epv->f__cast;
    e2->f__delete      = (void (*)(void*,sidl_BaseInterface*)) epv->f__delete;
    e2->f__getURL      = (char* (*)(void*,sidl_BaseInterface*)) epv->f__getURL;
    e2->f__raddRef     = (void (*)(void*,sidl_BaseInterface*)) epv->f__raddRef;
    e2->f__isRemote    = (sidl_bool (*)(void*,sidl_BaseInterface*)) 
      epv->f__isRemote;
    e2->f__set_hooks   = (void (*)(void*,int32_t, sidl_BaseInterface*)) 
      epv->f__set_hooks;
    e2->f__exec        = (void (*)(void*,const char*,struct 
      sidl_rmi_Call__object*,struct sidl_rmi_Return__object*,struct 
      sidl_BaseInterface__object **)) epv->f__exec;
    e2->f_addRef       = (void (*)(void*,struct sidl_BaseInterface__object **)) 
      epv->f_addRef;
    e2->f_deleteRef    = (void (*)(void*,struct sidl_BaseInterface__object **)) 
      epv->f_deleteRef;
    e2->f_isSame       = (sidl_bool (*)(void*,struct 
      sidl_BaseInterface__object*,struct sidl_BaseInterface__object **)) 
      epv->f_isSame;
    e2->f_isType       = (sidl_bool (*)(void*,const char*,struct 
      sidl_BaseInterface__object **)) epv->f_isType;
    e2->f_getClassInfo = (struct sidl_ClassInfo__object* (*)(void*,struct 
      sidl_BaseInterface__object **)) epv->f_getClassInfo;

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
    e3->f_isSame       = (sidl_bool (*)(void*,struct 
      sidl_BaseInterface__object*,struct sidl_BaseInterface__object **)) 
      epv->f_isSame;
    e3->f_isType       = (sidl_bool (*)(void*,const char*,struct 
      sidl_BaseInterface__object **)) epv->f_isType;
    e3->f_getClassInfo = (struct sidl_ClassInfo__object* (*)(void*,struct 
      sidl_BaseInterface__object **)) epv->f_getClassInfo;
    e3->f_packObj      = (void (*)(void*,struct sidl_io_Serializer__object*,
      struct sidl_BaseInterface__object **)) epv->f_packObj;
    e3->f_unpackObj    = (void (*)(void*,struct sidl_io_Deserializer__object*,
      struct sidl_BaseInterface__object **)) epv->f_unpackObj;
    e3->f_getNote      = (char* (*)(void*,struct sidl_BaseInterface__object 
      **)) epv->f_getNote;
    e3->f_setNote      = (void (*)(void*,const char*,struct 
      sidl_BaseInterface__object **)) epv->f_setNote;
    e3->f_getTrace     = (char* (*)(void*,struct sidl_BaseInterface__object 
      **)) epv->f_getTrace;
    e3->f_addLine      = (void (*)(void*,const char*,struct 
      sidl_BaseInterface__object **)) epv->f_addLine;
    e3->f_add          = (void (*)(void*,const char*,int32_t,const char*,struct 
      sidl_BaseInterface__object **)) epv->f_add;

    e4->f__cast        = (void* (*)(struct sidl_SIDLException__object*,const 
      char*,sidl_BaseInterface*)) epv->f__cast;
    e4->f__delete      = (void (*)(struct sidl_SIDLException__object*,
      sidl_BaseInterface*)) epv->f__delete;
    e4->f__getURL      = (char* (*)(struct sidl_SIDLException__object*,
      sidl_BaseInterface*)) epv->f__getURL;
    e4->f__raddRef     = (void (*)(struct sidl_SIDLException__object*,
      sidl_BaseInterface*)) epv->f__raddRef;
    e4->f__isRemote    = (sidl_bool (*)(struct sidl_SIDLException__object*,
      sidl_BaseInterface*)) epv->f__isRemote;
    e4->f__set_hooks   = (void (*)(struct sidl_SIDLException__object*,int32_t, 
      sidl_BaseInterface*)) epv->f__set_hooks;
    e4->f__exec        = (void (*)(struct sidl_SIDLException__object*,const 
      char*,struct sidl_rmi_Call__object*,struct sidl_rmi_Return__object*,
      struct sidl_BaseInterface__object **)) epv->f__exec;
    e4->f_addRef       = (void (*)(struct sidl_SIDLException__object*,struct 
      sidl_BaseInterface__object **)) epv->f_addRef;
    e4->f_deleteRef    = (void (*)(struct sidl_SIDLException__object*,struct 
      sidl_BaseInterface__object **)) epv->f_deleteRef;
    e4->f_isSame       = (sidl_bool (*)(struct sidl_SIDLException__object*,
      struct sidl_BaseInterface__object*,struct sidl_BaseInterface__object **)) 
      epv->f_isSame;
    e4->f_isType       = (sidl_bool (*)(struct sidl_SIDLException__object*,
      const char*,struct sidl_BaseInterface__object **)) epv->f_isType;
    e4->f_getClassInfo = (struct sidl_ClassInfo__object* (*)(struct 
      sidl_SIDLException__object*,struct sidl_BaseInterface__object **)) 
      epv->f_getClassInfo;
    e4->f_getNote      = (char* (*)(struct sidl_SIDLException__object*,struct 
      sidl_BaseInterface__object **)) epv->f_getNote;
    e4->f_setNote      = (void (*)(struct sidl_SIDLException__object*,const 
      char*,struct sidl_BaseInterface__object **)) epv->f_setNote;
    e4->f_getTrace     = (char* (*)(struct sidl_SIDLException__object*,struct 
      sidl_BaseInterface__object **)) epv->f_getTrace;
    e4->f_addLine      = (void (*)(struct sidl_SIDLException__object*,const 
      char*,struct sidl_BaseInterface__object **)) epv->f_addLine;
    e4->f_add          = (void (*)(struct sidl_SIDLException__object*,const 
      char*,int32_t,const char*,struct sidl_BaseInterface__object **)) 
      epv->f_add;
    e4->f_packObj      = (void (*)(struct sidl_SIDLException__object*,struct 
      sidl_io_Serializer__object*,struct sidl_BaseInterface__object **)) 
      epv->f_packObj;
    e4->f_unpackObj    = (void (*)(struct sidl_SIDLException__object*,struct 
      sidl_io_Deserializer__object*,struct sidl_BaseInterface__object **)) 
      epv->f_unpackObj;

    e5->f__cast        = (void* (*)(struct sidl_io_IOException__object*,const 
      char*,sidl_BaseInterface*)) epv->f__cast;
    e5->f__delete      = (void (*)(struct sidl_io_IOException__object*,
      sidl_BaseInterface*)) epv->f__delete;
    e5->f__getURL      = (char* (*)(struct sidl_io_IOException__object*,
      sidl_BaseInterface*)) epv->f__getURL;
    e5->f__raddRef     = (void (*)(struct sidl_io_IOException__object*,
      sidl_BaseInterface*)) epv->f__raddRef;
    e5->f__isRemote    = (sidl_bool (*)(struct sidl_io_IOException__object*,
      sidl_BaseInterface*)) epv->f__isRemote;
    e5->f__set_hooks   = (void (*)(struct sidl_io_IOException__object*,int32_t, 
      sidl_BaseInterface*)) epv->f__set_hooks;
    e5->f__exec        = (void (*)(struct sidl_io_IOException__object*,const 
      char*,struct sidl_rmi_Call__object*,struct sidl_rmi_Return__object*,
      struct sidl_BaseInterface__object **)) epv->f__exec;
    e5->f_addRef       = (void (*)(struct sidl_io_IOException__object*,struct 
      sidl_BaseInterface__object **)) epv->f_addRef;
    e5->f_deleteRef    = (void (*)(struct sidl_io_IOException__object*,struct 
      sidl_BaseInterface__object **)) epv->f_deleteRef;
    e5->f_isSame       = (sidl_bool (*)(struct sidl_io_IOException__object*,
      struct sidl_BaseInterface__object*,struct sidl_BaseInterface__object **)) 
      epv->f_isSame;
    e5->f_isType       = (sidl_bool (*)(struct sidl_io_IOException__object*,
      const char*,struct sidl_BaseInterface__object **)) epv->f_isType;
    e5->f_getClassInfo = (struct sidl_ClassInfo__object* (*)(struct 
      sidl_io_IOException__object*,struct sidl_BaseInterface__object **)) 
      epv->f_getClassInfo;
    e5->f_getNote      = (char* (*)(struct sidl_io_IOException__object*,struct 
      sidl_BaseInterface__object **)) epv->f_getNote;
    e5->f_setNote      = (void (*)(struct sidl_io_IOException__object*,const 
      char*,struct sidl_BaseInterface__object **)) epv->f_setNote;
    e5->f_getTrace     = (char* (*)(struct sidl_io_IOException__object*,struct 
      sidl_BaseInterface__object **)) epv->f_getTrace;
    e5->f_addLine      = (void (*)(struct sidl_io_IOException__object*,const 
      char*,struct sidl_BaseInterface__object **)) epv->f_addLine;
    e5->f_add          = (void (*)(struct sidl_io_IOException__object*,const 
      char*,int32_t,const char*,struct sidl_BaseInterface__object **)) 
      epv->f_add;
    e5->f_packObj      = (void (*)(struct sidl_io_IOException__object*,struct 
      sidl_io_Serializer__object*,struct sidl_BaseInterface__object **)) 
      epv->f_packObj;
    e5->f_unpackObj    = (void (*)(struct sidl_io_IOException__object*,struct 
      sidl_io_Deserializer__object*,struct sidl_BaseInterface__object **)) 
      epv->f_unpackObj;

    e6->f__cast        = (void* (*)(void*,const char*,sidl_BaseInterface*)) 
      epv->f__cast;
    e6->f__delete      = (void (*)(void*,sidl_BaseInterface*)) epv->f__delete;
    e6->f__getURL      = (char* (*)(void*,sidl_BaseInterface*)) epv->f__getURL;
    e6->f__raddRef     = (void (*)(void*,sidl_BaseInterface*)) epv->f__raddRef;
    e6->f__isRemote    = (sidl_bool (*)(void*,sidl_BaseInterface*)) 
      epv->f__isRemote;
    e6->f__set_hooks   = (void (*)(void*,int32_t, sidl_BaseInterface*)) 
      epv->f__set_hooks;
    e6->f__exec        = (void (*)(void*,const char*,struct 
      sidl_rmi_Call__object*,struct sidl_rmi_Return__object*,struct 
      sidl_BaseInterface__object **)) epv->f__exec;
    e6->f_addRef       = (void (*)(void*,struct sidl_BaseInterface__object **)) 
      epv->f_addRef;
    e6->f_deleteRef    = (void (*)(void*,struct sidl_BaseInterface__object **)) 
      epv->f_deleteRef;
    e6->f_isSame       = (sidl_bool (*)(void*,struct 
      sidl_BaseInterface__object*,struct sidl_BaseInterface__object **)) 
      epv->f_isSame;
    e6->f_isType       = (sidl_bool (*)(void*,const char*,struct 
      sidl_BaseInterface__object **)) epv->f_isType;
    e6->f_getClassInfo = (struct sidl_ClassInfo__object* (*)(void*,struct 
      sidl_BaseInterface__object **)) epv->f_getClassInfo;
    e6->f_packObj      = (void (*)(void*,struct sidl_io_Serializer__object*,
      struct sidl_BaseInterface__object **)) epv->f_packObj;
    e6->f_unpackObj    = (void (*)(void*,struct sidl_io_Deserializer__object*,
      struct sidl_BaseInterface__object **)) epv->f_unpackObj;

    e7->f__cast        = (void* (*)(struct sidl_rmi_NetworkException__object*,
      const char*,sidl_BaseInterface*)) epv->f__cast;
    e7->f__delete      = (void (*)(struct sidl_rmi_NetworkException__object*,
      sidl_BaseInterface*)) epv->f__delete;
    e7->f__getURL      = (char* (*)(struct sidl_rmi_NetworkException__object*,
      sidl_BaseInterface*)) epv->f__getURL;
    e7->f__raddRef     = (void (*)(struct sidl_rmi_NetworkException__object*,
      sidl_BaseInterface*)) epv->f__raddRef;
    e7->f__isRemote    = (sidl_bool (*)(struct 
      sidl_rmi_NetworkException__object*,sidl_BaseInterface*)) epv->f__isRemote;
    e7->f__set_hooks   = (void (*)(struct sidl_rmi_NetworkException__object*,
      int32_t, sidl_BaseInterface*)) epv->f__set_hooks;
    e7->f__exec        = (void (*)(struct sidl_rmi_NetworkException__object*,
      const char*,struct sidl_rmi_Call__object*,struct sidl_rmi_Return__object*,
      struct sidl_BaseInterface__object **)) epv->f__exec;
    e7->f_addRef       = (void (*)(struct sidl_rmi_NetworkException__object*,
      struct sidl_BaseInterface__object **)) epv->f_addRef;
    e7->f_deleteRef    = (void (*)(struct sidl_rmi_NetworkException__object*,
      struct sidl_BaseInterface__object **)) epv->f_deleteRef;
    e7->f_isSame       = (sidl_bool (*)(struct 
      sidl_rmi_NetworkException__object*,struct sidl_BaseInterface__object*,
      struct sidl_BaseInterface__object **)) epv->f_isSame;
    e7->f_isType       = (sidl_bool (*)(struct 
      sidl_rmi_NetworkException__object*,const char*,struct 
      sidl_BaseInterface__object **)) epv->f_isType;
    e7->f_getClassInfo = (struct sidl_ClassInfo__object* (*)(struct 
      sidl_rmi_NetworkException__object*,struct sidl_BaseInterface__object **)) 
      epv->f_getClassInfo;
    e7->f_getNote      = (char* (*)(struct sidl_rmi_NetworkException__object*,
      struct sidl_BaseInterface__object **)) epv->f_getNote;
    e7->f_setNote      = (void (*)(struct sidl_rmi_NetworkException__object*,
      const char*,struct sidl_BaseInterface__object **)) epv->f_setNote;
    e7->f_getTrace     = (char* (*)(struct sidl_rmi_NetworkException__object*,
      struct sidl_BaseInterface__object **)) epv->f_getTrace;
    e7->f_addLine      = (void (*)(struct sidl_rmi_NetworkException__object*,
      const char*,struct sidl_BaseInterface__object **)) epv->f_addLine;
    e7->f_add          = (void (*)(struct sidl_rmi_NetworkException__object*,
      const char*,int32_t,const char*,struct sidl_BaseInterface__object **)) 
      epv->f_add;
    e7->f_getHopCount  = (int32_t (*)(struct sidl_rmi_NetworkException__object*,
      struct sidl_BaseInterface__object **)) epv->f_getHopCount;
    e7->f_packObj      = (void (*)(struct sidl_rmi_NetworkException__object*,
      struct sidl_io_Serializer__object*,struct sidl_BaseInterface__object **)) 
      epv->f_packObj;
    e7->f_unpackObj    = (void (*)(struct sidl_rmi_NetworkException__object*,
      struct sidl_io_Deserializer__object*,struct sidl_BaseInterface__object 
      **)) epv->f_unpackObj;

    s_remote_initialized = 1;
  }

  // Create an instance that connects to an existing remote object.
  static struct sidl_rmi_ProtocolException__object*
  sidl_rmi_ProtocolException__remoteConnect(const char *url, sidl_bool ar, 
    sidl_BaseInterface *_ex)
  {
    struct sidl_rmi_ProtocolException__object* self;

    struct sidl_rmi_ProtocolException__object* s0;
    struct sidl_rmi_NetworkException__object* s1;
    struct sidl_io_IOException__object* s2;
    struct sidl_SIDLException__object* s3;
    struct sidl_BaseClass__object* s4;

    struct sidl_rmi_ProtocolException__remote* r_obj;
    sidl_rmi_InstanceHandle instance = NULL;
    char* objectID = NULL;
    objectID = NULL;
    *_ex = NULL;
    if(url == NULL) {return NULL;}
    objectID = sidl_rmi_ServerRegistry_isLocalObject(url, _ex);
    if(objectID) {
      sidl_BaseInterface bi = (
        sidl_BaseInterface)sidl_rmi_InstanceRegistry_getInstanceByString(
        objectID, _ex); SIDL_CHECK(*_ex);
      return sidl_rmi_ProtocolException__rmicast(bi,_ex);SIDL_CHECK(*_ex);
    }
    instance = sidl_rmi_ProtocolFactory_connectInstance(url, ar, _ex ); 
      SIDL_CHECK(*_ex);
    if ( instance == NULL) { return NULL; }
    self =
      (struct sidl_rmi_ProtocolException__object*) malloc(
        sizeof(struct sidl_rmi_ProtocolException__object));

    r_obj =
      (struct sidl_rmi_ProtocolException__remote*) malloc(
        sizeof(struct sidl_rmi_ProtocolException__remote));

    r_obj->d_refcount = 1;
    r_obj->d_ih = instance;
    s0 =                                      self;
    s1 =                                      &s0->d_sidl_rmi_networkexception;
    s2 =                                      &s1->d_sidl_io_ioexception;
    s3 =                                      &s2->d_sidl_sidlexception;
    s4 =                                      &s3->d_sidl_baseclass;

    LOCK_STATIC_GLOBALS;
    if (!s_remote_initialized) {
      sidl_rmi_ProtocolException__init_remote_epv();
    }
    UNLOCK_STATIC_GLOBALS;

    s4->d_sidl_baseinterface.d_epv    = &s_rem_epv__sidl_baseinterface;
    s4->d_sidl_baseinterface.d_object = (void*) self;

    s4->d_data = (void*) r_obj;
    s4->d_epv  = &s_rem_epv__sidl_baseclass;

    s3->d_sidl_baseexception.d_epv    = &s_rem_epv__sidl_baseexception;
    s3->d_sidl_baseexception.d_object = (void*) self;

    s3->d_sidl_io_serializable.d_epv    = &s_rem_epv__sidl_io_serializable;
    s3->d_sidl_io_serializable.d_object = (void*) self;

    s3->d_data = (void*) r_obj;
    s3->d_epv  = &s_rem_epv__sidl_sidlexception;

    s2->d_sidl_runtimeexception.d_epv    = &s_rem_epv__sidl_runtimeexception;
    s2->d_sidl_runtimeexception.d_object = (void*) self;

    s2->d_data = (void*) r_obj;
    s2->d_epv  = &s_rem_epv__sidl_io_ioexception;

    s1->d_data = (void*) r_obj;
    s1->d_epv  = &s_rem_epv__sidl_rmi_networkexception;

    s0->d_data = (void*) r_obj;
    s0->d_epv  = &s_rem_epv__sidl_rmi_protocolexception;

    self->d_data = (void*) r_obj;

    return self;
    EXIT:
    return NULL;
  }
  // Create an instance that uses an already existing 
  // InstanceHandle to connect to an existing remote object.
  static struct sidl_rmi_ProtocolException__object*
  sidl_rmi_ProtocolException__IHConnect(sidl_rmi_InstanceHandle instance, 
    sidl_BaseInterface *_ex)
  {
    struct sidl_rmi_ProtocolException__object* self;

    struct sidl_rmi_ProtocolException__object* s0;
    struct sidl_rmi_NetworkException__object* s1;
    struct sidl_io_IOException__object* s2;
    struct sidl_SIDLException__object* s3;
    struct sidl_BaseClass__object* s4;

    struct sidl_rmi_ProtocolException__remote* r_obj;
    self =
      (struct sidl_rmi_ProtocolException__object*) malloc(
        sizeof(struct sidl_rmi_ProtocolException__object));

    r_obj =
      (struct sidl_rmi_ProtocolException__remote*) malloc(
        sizeof(struct sidl_rmi_ProtocolException__remote));

    r_obj->d_refcount = 1;
    r_obj->d_ih = instance;
    s0 =                                      self;
    s1 =                                      &s0->d_sidl_rmi_networkexception;
    s2 =                                      &s1->d_sidl_io_ioexception;
    s3 =                                      &s2->d_sidl_sidlexception;
    s4 =                                      &s3->d_sidl_baseclass;

    LOCK_STATIC_GLOBALS;
    if (!s_remote_initialized) {
      sidl_rmi_ProtocolException__init_remote_epv();
    }
    UNLOCK_STATIC_GLOBALS;

    s4->d_sidl_baseinterface.d_epv    = &s_rem_epv__sidl_baseinterface;
    s4->d_sidl_baseinterface.d_object = (void*) self;

    s4->d_data = (void*) r_obj;
    s4->d_epv  = &s_rem_epv__sidl_baseclass;

    s3->d_sidl_baseexception.d_epv    = &s_rem_epv__sidl_baseexception;
    s3->d_sidl_baseexception.d_object = (void*) self;

    s3->d_sidl_io_serializable.d_epv    = &s_rem_epv__sidl_io_serializable;
    s3->d_sidl_io_serializable.d_object = (void*) self;

    s3->d_data = (void*) r_obj;
    s3->d_epv  = &s_rem_epv__sidl_sidlexception;

    s2->d_sidl_runtimeexception.d_epv    = &s_rem_epv__sidl_runtimeexception;
    s2->d_sidl_runtimeexception.d_object = (void*) self;

    s2->d_data = (void*) r_obj;
    s2->d_epv  = &s_rem_epv__sidl_io_ioexception;

    s1->d_data = (void*) r_obj;
    s1->d_epv  = &s_rem_epv__sidl_rmi_networkexception;

    s0->d_data = (void*) r_obj;
    s0->d_epv  = &s_rem_epv__sidl_rmi_protocolexception;

    self->d_data = (void*) r_obj;

    sidl_rmi_InstanceHandle_addRef(instance,_ex);SIDL_CHECK(*_ex);
    return self;
    EXIT:
    return NULL;
  }
  // REMOTE: generate remote instance given URL string.
  static struct sidl_rmi_ProtocolException__object*
  sidl_rmi_ProtocolException__remoteCreate(const char *url, sidl_BaseInterface 
    *_ex)
  {
    sidl_BaseInterface _throwaway_exception = NULL;
    struct sidl_rmi_ProtocolException__object* self;

    struct sidl_rmi_ProtocolException__object* s0;
    struct sidl_rmi_NetworkException__object* s1;
    struct sidl_io_IOException__object* s2;
    struct sidl_SIDLException__object* s3;
    struct sidl_BaseClass__object* s4;

    struct sidl_rmi_ProtocolException__remote* r_obj;
    sidl_rmi_InstanceHandle instance = sidl_rmi_ProtocolFactory_createInstance(
      url, "sidl.rmi.ProtocolException", _ex ); SIDL_CHECK(*_ex);
    if ( instance == NULL) { return NULL; }
    self =
      (struct sidl_rmi_ProtocolException__object*) malloc(
        sizeof(struct sidl_rmi_ProtocolException__object));

    r_obj =
      (struct sidl_rmi_ProtocolException__remote*) malloc(
        sizeof(struct sidl_rmi_ProtocolException__remote));

    r_obj->d_refcount = 1;
    r_obj->d_ih = instance;
    s0 =                                      self;
    s1 =                                      &s0->d_sidl_rmi_networkexception;
    s2 =                                      &s1->d_sidl_io_ioexception;
    s3 =                                      &s2->d_sidl_sidlexception;
    s4 =                                      &s3->d_sidl_baseclass;

    LOCK_STATIC_GLOBALS;
    if (!s_remote_initialized) {
      sidl_rmi_ProtocolException__init_remote_epv();
    }
    UNLOCK_STATIC_GLOBALS;

    s4->d_sidl_baseinterface.d_epv    = &s_rem_epv__sidl_baseinterface;
    s4->d_sidl_baseinterface.d_object = (void*) self;

    s4->d_data = (void*) r_obj;
    s4->d_epv  = &s_rem_epv__sidl_baseclass;

    s3->d_sidl_baseexception.d_epv    = &s_rem_epv__sidl_baseexception;
    s3->d_sidl_baseexception.d_object = (void*) self;

    s3->d_sidl_io_serializable.d_epv    = &s_rem_epv__sidl_io_serializable;
    s3->d_sidl_io_serializable.d_object = (void*) self;

    s3->d_data = (void*) r_obj;
    s3->d_epv  = &s_rem_epv__sidl_sidlexception;

    s2->d_sidl_runtimeexception.d_epv    = &s_rem_epv__sidl_runtimeexception;
    s2->d_sidl_runtimeexception.d_object = (void*) self;

    s2->d_data = (void*) r_obj;
    s2->d_epv  = &s_rem_epv__sidl_io_ioexception;

    s1->d_data = (void*) r_obj;
    s1->d_epv  = &s_rem_epv__sidl_rmi_networkexception;

    s0->d_data = (void*) r_obj;
    s0->d_epv  = &s_rem_epv__sidl_rmi_protocolexception;

    self->d_data = (void*) r_obj;

    return self;
    EXIT:
    if(instance) { sidl_rmi_InstanceHandle_deleteRef(instance, 
      &_throwaway_exception); }
    return NULL;
  }
  // 
  // Cast method for interface and class type conversions.
  // 
  struct sidl_rmi_ProtocolException__object*
  sidl_rmi_ProtocolException__rmicast(
    void* obj,
    sidl_BaseInterface* _ex)
  {
    struct sidl_rmi_ProtocolException__object* cast = NULL;

    *_ex = NULL;
    if(!connect_loaded) {
      sidl_rmi_ConnectRegistry_registerConnect("sidl.rmi.ProtocolException", (
        void*)sidl_rmi_ProtocolException__IHConnect, _ex);
      connect_loaded = 1;
    }
    if (obj != NULL) {
      struct sidl_BaseInterface__object* base = (struct 
        sidl_BaseInterface__object*) obj;
      cast = (struct sidl_rmi_ProtocolException__object*) (
        *base->d_epv->f__cast)(
        base->d_object,
        "sidl.rmi.ProtocolException", _ex); SIDL_CHECK(*_ex);
    }

    return cast;
    EXIT:
    return NULL;
  }

  // 
  // RMI connector function for the class.
  // 
  struct sidl_rmi_ProtocolException__object*
  sidl_rmi_ProtocolException__connectI(const char* url, sidl_bool ar, struct 
    sidl_BaseInterface__object **_ex)
  {
    return sidl_rmi_ProtocolException__remoteConnect(url, ar, _ex);
  }

}

//////////////////////////////////////////////////
// 
// Special methods for throwing exceptions
// 

void
sidl::rmi::ProtocolException::throwException0(
  struct sidl_BaseInterface__object *_exception
)
  // throws:
{
  void * _p = 0;
  struct sidl_BaseInterface__object *throwaway_exception;

  if ( (_p=(*(_exception->d_epv->f__cast))(_exception->d_object, 
    "sidl.RuntimeException", &throwaway_exception)) != 0 ) {
    struct sidl_RuntimeException__object * _realtype = reinterpret_cast< struct 
      sidl_RuntimeException__object*>(_p);
    (*_exception->d_epv->f_deleteRef)(_exception->d_object, 
      &throwaway_exception);
    // Note: alternate constructor does not increment refcount.
    ::sidl::RuntimeException _resolved_exception = ::sidl::RuntimeException( 
      _realtype, false );
    _resolved_exception.add(__FILE__,__LINE__, "C++ stub.");
    throw _resolved_exception;
  }
  // Any unresolved exception is treated as LangSpecificException
  ::sidl::LangSpecificException _unexpected = 
    ::sidl::LangSpecificException::_create();
  _unexpected.add(__FILE__,__LINE__, "Unknown method");
  _unexpected.setNote("Unexpected exception received by C++ stub.");
  throw _unexpected;
}

//////////////////////////////////////////////////
// 
// User Defined Methods
// 


//////////////////////////////////////////////////
// 
// End User Defined Methods
// (everything else in this file is specific to
//  Babel's C++ bindings)
// 

// static constructor
::sidl::rmi::ProtocolException
sidl::rmi::ProtocolException::_create() {
  struct sidl_BaseInterface__object * _exception;
  ::sidl::rmi::ProtocolException self( (*_get_ext()->createObject)(NULL,
    &_exception), false );
  if (_exception) {
    throwException0(_exception);
  }
  return self;
}

// remote constructor
::sidl::rmi::ProtocolException
sidl::rmi::ProtocolException::_create(const std::string& url) {
  ior_t* ior_self;
  struct sidl_BaseInterface__object *_exception;
  ior_self = sidl_rmi_ProtocolException__remoteCreate( url.c_str(), &_exception 
    );
  if (_exception != 0 ) {
    throwException0(_exception);
  }
  return ::sidl::rmi::ProtocolException( ior_self, false );
}

// remote connector
::sidl::rmi::ProtocolException
sidl::rmi::ProtocolException::_connect(const std::string& url, const bool ar ) {
  ior_t* ior_self;
  struct sidl_BaseInterface__object *_exception;
  ior_self = sidl_rmi_ProtocolException__remoteConnect( url.c_str(), 
    ar?TRUE:FALSE, &_exception );
  if (_exception != 0 ) {
    throwException0(_exception);
  }
  return ::sidl::rmi::ProtocolException( ior_self, false );
}

// copy constructor
sidl::rmi::ProtocolException::ProtocolException ( const 
  ::sidl::rmi::ProtocolException& original ) {
  d_self = (struct sidl_rmi_ProtocolException__object*) 
    original.::sidl::rmi::ProtocolException::_get_ior();
  if(d_self) {

    sidl_RuntimeException_IORCache = &((*reinterpret_cast< ior_t*>(
      d_self)).d_sidl_rmi_networkexception.d_sidl_io_ioexception.d_sidl_runtimeexception);
    sidl_io_Serializable_IORCache = &((*reinterpret_cast< ior_t*>(
      d_self)).d_sidl_rmi_networkexception.d_sidl_io_ioexception.d_sidl_sidlexception.d_sidl_io_serializable);
    sidl_BaseException_IORCache = &((*reinterpret_cast< ior_t*>(
      d_self)).d_sidl_rmi_networkexception.d_sidl_io_ioexception.d_sidl_sidlexception.d_sidl_baseexception);

    addRef();
  }
  d_weak_reference = false;
}

// assignment operator
::sidl::rmi::ProtocolException&
sidl::rmi::ProtocolException::operator=( const ::sidl::rmi::ProtocolException& 
  rhs ) {
  if ( d_self != rhs.d_self ) {
    if ( d_self != 0 ) {
      deleteRef();
    }
    d_self = (struct sidl_rmi_ProtocolException__object*) 
      rhs.::sidl::rmi::ProtocolException::_get_ior();
    if(d_self) {

      sidl_RuntimeException_IORCache = &((*reinterpret_cast< ior_t*>(
        d_self)).d_sidl_rmi_networkexception.d_sidl_io_ioexception.d_sidl_runtimeexception);
      sidl_io_Serializable_IORCache = &((*reinterpret_cast< ior_t*>(
        d_self)).d_sidl_rmi_networkexception.d_sidl_io_ioexception.d_sidl_sidlexception.d_sidl_io_serializable);
      sidl_BaseException_IORCache = &((*reinterpret_cast< ior_t*>(
        d_self)).d_sidl_rmi_networkexception.d_sidl_io_ioexception.d_sidl_sidlexception.d_sidl_baseexception);

      addRef();
    }
    d_weak_reference = false;
  }
  return *this;
}

// conversion from ior to C++ class
sidl::rmi::ProtocolException::ProtocolException ( 
  ::sidl::rmi::ProtocolException::ior_t* ior ) 
   : StubBase(reinterpret_cast< void*>(ior)) { 
  if(d_self) {

    sidl_RuntimeException_IORCache = &((*reinterpret_cast< ior_t*>(
      d_self)).d_sidl_rmi_networkexception.d_sidl_io_ioexception.d_sidl_runtimeexception);
    sidl_io_Serializable_IORCache = &((*reinterpret_cast< ior_t*>(
      d_self)).d_sidl_rmi_networkexception.d_sidl_io_ioexception.d_sidl_sidlexception.d_sidl_io_serializable);
    sidl_BaseException_IORCache = &((*reinterpret_cast< ior_t*>(
      d_self)).d_sidl_rmi_networkexception.d_sidl_io_ioexception.d_sidl_sidlexception.d_sidl_baseexception);

  }
}

// Alternate constructor: does not call addRef()
// (sets d_weak_reference=isWeak)
// For internal use by Impls (fixes bug#275)
sidl::rmi::ProtocolException::ProtocolException ( 
  ::sidl::rmi::ProtocolException::ior_t* ior, bool isWeak ) : 
StubBase(reinterpret_cast< void*>(ior), isWeak){ 
  if(d_self) {

    sidl_RuntimeException_IORCache = &((*reinterpret_cast< ior_t*>(
      d_self)).d_sidl_rmi_networkexception.d_sidl_io_ioexception.d_sidl_runtimeexception);
    sidl_io_Serializable_IORCache = &((*reinterpret_cast< ior_t*>(
      d_self)).d_sidl_rmi_networkexception.d_sidl_io_ioexception.d_sidl_sidlexception.d_sidl_io_serializable);
    sidl_BaseException_IORCache = &((*reinterpret_cast< ior_t*>(
      d_self)).d_sidl_rmi_networkexception.d_sidl_io_ioexception.d_sidl_sidlexception.d_sidl_baseexception);

  }
}

// exec has special argument passing to avoid #include circularities
void ::sidl::rmi::ProtocolException::_exec( const std::string& methodName, 
                        sidl::rmi::Call& inArgs,
                        sidl::rmi::Return& outArgs) { 
  ::sidl::rmi::ProtocolException::ior_t* const loc_self = _get_ior();
  struct sidl_BaseInterface__object *throwaway_exception;
  (*loc_self->d_epv->f__exec)(loc_self,
                                methodName.c_str(),
                                inArgs._get_ior(),
                                outArgs._get_ior(),
                                &throwaway_exception);
}


/**
 * Get the URL of the Implementation of this object (for RMI)
 */
::std::string
sidl::rmi::ProtocolException::_getURL(  )
// throws:
//       ::sidl::RuntimeException

{
  ::std::string _result;
  ior_t* const loc_self = (struct sidl_rmi_ProtocolException__object*) 
    ::sidl::rmi::ProtocolException::_get_ior();
  char * _local_result;
  sidl_BaseInterface__object * _exception;
  /*pack args to dispatch to ior*/
  _local_result = (*(loc_self->d_epv->f__getURL))(loc_self, &_exception );
  /*dispatch to ior*/
  if (_exception != 0 ) {

    throwException0(_exception);
  }
  if (_local_result) {
    _result = _local_result;
    ::sidl_String_free( _local_result );
  }
  /*unpack results and cleanup*/
  return _result;
}


/**
 * Method to set whether or not method hooks should be invoked.
 */
void
sidl::rmi::ProtocolException::_set_hooks( /* in */bool on )
// throws:
//       ::sidl::RuntimeException

{

  ior_t* const loc_self = (struct sidl_rmi_ProtocolException__object*) 
    ::sidl::rmi::ProtocolException::_get_ior();
  sidl_bool _local_on = on;
  sidl_BaseInterface__object * _exception;
  /*pack args to dispatch to ior*/
  (*(loc_self->d_epv->f__set_hooks))(loc_self, /* in */ _local_on, &_exception 
    );
  /*dispatch to ior*/
  if (_exception != 0 ) {

    throwException0(_exception);
  }
  /*unpack results and cleanup*/
}

// protected method that implements casting
struct sidl_rmi_ProtocolException__object* sidl::rmi::ProtocolException::_cast(
  const void* src)
{
  ior_t* cast = NULL;

  if(!connect_loaded) {
    struct sidl_BaseInterface__object *throwaway_exception;
    sidl_rmi_ConnectRegistry_registerConnect("sidl.rmi.ProtocolException", (
      void*)sidl_rmi_ProtocolException__IHConnect, &throwaway_exception);
    connect_loaded = 1;
  }
  if ( src != 0 ) {
    // Actually, this thing is still const
    void* tmp = const_cast<void*>(src);
    struct sidl_BaseInterface__object *throwaway_exception;
    struct sidl_BaseInterface__object * base = reinterpret_cast< struct 
      sidl_BaseInterface__object *>(tmp);
    cast = reinterpret_cast< ior_t*>((*base->d_epv->f__cast)(base->d_object, 
      "sidl.rmi.ProtocolException", &throwaway_exception));
  }
  return cast;
}

// Static data type
const ::sidl::rmi::ProtocolException::ext_t * 
  sidl::rmi::ProtocolException::s_ext = 0;

// private static method to get static data type
const ::sidl::rmi::ProtocolException::ext_t *
sidl::rmi::ProtocolException::_get_ext()
  throw ( ::sidl::NullIORException)
{
  if (! s_ext ) {
    s_ext = sidl_rmi_ProtocolException__externals();
  }
  return s_ext;
}

