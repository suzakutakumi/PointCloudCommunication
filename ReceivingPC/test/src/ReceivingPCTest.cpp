// -*- C++ -*-
// <rtc-template block="description">
/*!
 * @file  ReceivingPCTest.cpp
 * @brief ModuleDescription (test code)
 *
 */
// </rtc-template>

#include "ReceivingPCTest.h"

// Module specification
// <rtc-template block="module_spec">
#if RTM_MAJOR_VERSION >= 2
static const char* const receivingpc_spec[] =
#else
static const char* receivingpc_spec[] =
#endif
  {
    "implementation_id", "ReceivingPCTest",
    "type_name",         "ReceivingPCTest",
    "description",       "ModuleDescription",
    "version",           "1.0.0",
    "vendor",            "suzakutakumi",
    "category",          "Actuator",
    "activity_type",     "PERIODIC",
    "kind",              "DataFlowComponent",
    "max_instance",      "1",
    "language",          "C++",
    "lang_type",         "compile",
    ""
  };
// </rtc-template>

/*!
 * @brief constructor
 * @param manager Maneger Object
 */
ReceivingPCTest::ReceivingPCTest(RTC::Manager* manager)
    // <rtc-template block="initializer">
  : RTC::DataFlowComponentBase(manager),
    m_PCOut("PC", m_PC)

    // </rtc-template>
{
}

/*!
 * @brief destructor
 */
ReceivingPCTest::~ReceivingPCTest()
{
}



RTC::ReturnCode_t ReceivingPCTest::onInitialize()
{
  // Registration: InPort/OutPort/Service
  // <rtc-template block="registration">
  // Set InPort buffers
  
  // Set OutPort buffer
  addOutPort("PC", m_PCOut);
  
  // Set service provider to Ports
  
  // Set service consumers to Ports
  
  // Set CORBA Service Ports
  
  // </rtc-template>

  // <rtc-template block="bind_config">
  // </rtc-template>
  
  return RTC::RTC_OK;
}

/*
RTC::ReturnCode_t ReceivingPCTest::onFinalize()
{
  return RTC::RTC_OK;
}
*/


//RTC::ReturnCode_t ReceivingPCTest::onStartup(RTC::UniqueId /*ec_id*/)
//{
//  return RTC::RTC_OK;
//}


//RTC::ReturnCode_t ReceivingPCTest::onShutdown(RTC::UniqueId /*ec_id*/)
//{
//  return RTC::RTC_OK;
//}


//RTC::ReturnCode_t ReceivingPCTest::onActivated(RTC::UniqueId /*ec_id*/)
//{
//  return RTC::RTC_OK;
//}


//RTC::ReturnCode_t ReceivingPCTest::onDeactivated(RTC::UniqueId /*ec_id*/)
//{
//  return RTC::RTC_OK;
//}


//RTC::ReturnCode_t ReceivingPCTest::onExecute(RTC::UniqueId /*ec_id*/)
//{
//  return RTC::RTC_OK;
//}


//RTC::ReturnCode_t ReceivingPCTest::onAborting(RTC::UniqueId /*ec_id*/)
//{
//  return RTC::RTC_OK;
//}


//RTC::ReturnCode_t ReceivingPCTest::onError(RTC::UniqueId /*ec_id*/)
//{
//  return RTC::RTC_OK;
//}


//RTC::ReturnCode_t ReceivingPCTest::onReset(RTC::UniqueId /*ec_id*/)
//{
//  return RTC::RTC_OK;
//}


//RTC::ReturnCode_t ReceivingPCTest::onStateUpdate(RTC::UniqueId /*ec_id*/)
//{
//  return RTC::RTC_OK;
//}


//RTC::ReturnCode_t ReceivingPCTest::onRateChanged(RTC::UniqueId /*ec_id*/)
//{
//  return RTC::RTC_OK;
//}


bool ReceivingPCTest::runTest()
{
    return true;
}


extern "C"
{
 
  void ReceivingPCTestInit(RTC::Manager* manager)
  {
    coil::Properties profile(receivingpc_spec);
    manager->registerFactory(profile,
                             RTC::Create<ReceivingPCTest>,
                             RTC::Delete<ReceivingPCTest>);
  }
  
}
