// -*- C++ -*-
/*!
 *
 * THIS FILE IS GENERATED AUTOMATICALLY!! DO NOT EDIT!!
 *
 * @file PCLTypeSkel.h 
 * @brief PCLType server skeleton header wrapper code
 * @date Thu Feb  9 15:09:17 2023 
 *
 */

#ifndef PCLTYPESKEL_H
#define PCLTYPESKEL_H


#include <rtm/config_rtc.h>
#undef PACKAGE_BUGREPORT
#undef PACKAGE_NAME
#undef PACKAGE_STRING
#undef PACKAGE_TARNAME
#undef PACKAGE_VERSION

#if   defined ORB_IS_TAO
#  include "PCLTypeC.h"
#  include "PCLTypeS.h"
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
//#  include "PCLTypeUtil.h"
#elif defined ORB_IS_MICO
#  include "PCLType.h"
#elif defined ORB_IS_ORBIT2
#  include "/PCLType-cpp-stubs.h"
#  include "/PCLType-cpp-skels.h"
#elif defined ORB_IS_RTORB
#  include "PCLType.h"
#elif defined ORB_IS_ORBEXPRESS
#  include "PCLType.h"
#else
#  error "NO ORB defined"
#endif

#endif // PCLTYPESKEL_H
