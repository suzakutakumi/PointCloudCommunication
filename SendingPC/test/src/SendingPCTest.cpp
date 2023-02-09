// -*- C++ -*-
// <rtc-template block="description">
/*!
 * @file  SendingPCTest.cpp
 * @brief ModuleDescription (test code)
 *
 */
// </rtc-template>

#include "SendingPCTest.h"

// Module specification
// <rtc-template block="module_spec">
#if RTM_MAJOR_VERSION >= 2
static const char* const sendingpc_spec[] =
#else
static const char* sendingpc_spec[] =
#endif
  {
    "implementation_id", "SendingPCTest",
    "type_name",         "SendingPCTest",
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
SendingPCTest::SendingPCTest(RTC::Manager* manager)
    // <rtc-template block="initializer">
  : RTC::DataFlowComponentBase(manager),
    m_PCIn("PC", m_PC)

    // </rtc-template>
{
}

/*!
 * @brief destructor
 */
SendingPCTest::~SendingPCTest()
{
}



RTC::ReturnCode_t SendingPCTest::onInitialize()
{
  // Registration: InPort/OutPort/Service
  // <rtc-template block="registration">
  // Set InPort buffers
  addInPort("PC", m_PCIn);
  
  // Set OutPort buffer
  
  // Set service provider to Ports
  
  // Set service consumers to Ports
  
  // Set CORBA Service Ports
  
  // </rtc-template>

  // <rtc-template block="bind_config">
  // </rtc-template>
  
  return RTC::RTC_OK;
}

/*
RTC::ReturnCode_t SendingPCTest::onFinalize()
{
  return RTC::RTC_OK;
}
*/


//RTC::ReturnCode_t SendingPCTest::onStartup(RTC::UniqueId /*ec_id*/)
//{
//  return RTC::RTC_OK;
//}


//RTC::ReturnCode_t SendingPCTest::onShutdown(RTC::UniqueId /*ec_id*/)
//{
//  return RTC::RTC_OK;
//}


//RTC::ReturnCode_t SendingPCTest::onActivated(RTC::UniqueId /*ec_id*/)
//{
//  return RTC::RTC_OK;
//}


//RTC::ReturnCode_t SendingPCTest::onDeactivated(RTC::UniqueId /*ec_id*/)
//{
//  return RTC::RTC_OK;
//}


//RTC::ReturnCode_t SendingPCTest::onExecute(RTC::UniqueId /*ec_id*/)
//{
//  return RTC::RTC_OK;
//}


//RTC::ReturnCode_t SendingPCTest::onAborting(RTC::UniqueId /*ec_id*/)
//{
//  return RTC::RTC_OK;
//}


//RTC::ReturnCode_t SendingPCTest::onError(RTC::UniqueId /*ec_id*/)
//{
//  return RTC::RTC_OK;
//}


//RTC::ReturnCode_t SendingPCTest::onReset(RTC::UniqueId /*ec_id*/)
//{
//  return RTC::RTC_OK;
//}


//RTC::ReturnCode_t SendingPCTest::onStateUpdate(RTC::UniqueId /*ec_id*/)
//{
//  return RTC::RTC_OK;
//}


//RTC::ReturnCode_t SendingPCTest::onRateChanged(RTC::UniqueId /*ec_id*/)
//{
//  return RTC::RTC_OK;
//}


bool SendingPCTest::runTest()
{
    return true;
}


extern "C"
{
 
  void SendingPCTestInit(RTC::Manager* manager)
  {
    coil::Properties profile(sendingpc_spec);
    manager->registerFactory(profile,
                             RTC::Create<SendingPCTest>,
                             RTC::Delete<SendingPCTest>);
  }
  
}
