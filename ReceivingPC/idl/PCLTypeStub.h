// -*- C++ -*-
/*!
 *
 * THIS FILE IS GENERATED AUTOMATICALLY!! DO NOT EDIT!!
 *
 * @file PCLTypeStub.h 
 * @brief PCLType client stub header wrapper code
 * @date Thu Feb  9 15:09:17 2023 
 *
 */

#ifndef PCLTYPESTUB_H
#define PCLTYPESTUB_H


#include <rtm/config_rtc.h>
#undef PACKAGE_BUGREPORT
#undef PACKAGE_NAME
#undef PACKAGE_STRING
#undef PACKAGE_TARNAME
#undef PACKAGE_VERSION

#if   defined ORB_IS_TAO
#  include "PCLTypeC.h"
#elif defined ORB_IS_OMNIORB
#  if defined(WIN32) || defined(_WIN32) || defined(__WIN32__) || defined(__NT__)
#    ifdef USE_stub_in_nt_dll
#        undef USE_stub_in_nt_dll
#    endif
#    ifdef OpenRTM_IMPORT_SYMBOL
#        define USE_stub_in_nt_dll
#    endif
#  endif
#  include "PCLType.hh"
#elif defined ORB_IS_MICO
#  include "PCLType.h"
#elif defined ORB_IS_ORBIT2
#  include "PCLType-cpp-stubs.h"
#elif defined ORB_IS_RTORB
#  include "PCLType.h"
#elif defined ORB_IS_ORBEXPRESS
#  include "PCLType_c.h"
#else
#  error "NO ORB defined"
#endif

#endif // PCLTYPESTUB_H
