// -*- C++ -*-
// <rtc-template block="description">
/*!
 * @file  ReceivingPC.cpp
 * @brief ModuleDescription
 *
 */
// </rtc-template>

#include "ReceivingPC.h"

// Module specification
// <rtc-template block="module_spec">
#if RTM_MAJOR_VERSION >= 2
static const char* const receivingpc_spec[] =
#else
static const char* receivingpc_spec[] =
#endif
  {
    "implementation_id", "ReceivingPC",
    "type_name",         "ReceivingPC",
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
ReceivingPC::ReceivingPC(RTC::Manager* manager)
    // <rtc-template block="initializer">
  : RTC::DataFlowComponentBase(manager),
    m_PCIn("PC", m_PC)
    // </rtc-template>
{
}

/*!
 * @brief destructor
 */
ReceivingPC::~ReceivingPC()
{
}



RTC::ReturnCode_t ReceivingPC::onInitialize()
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
RTC::ReturnCode_t ReceivingPC::onFinalize()
{
  return RTC::RTC_OK;
}
*/


//RTC::ReturnCode_t ReceivingPC::onStartup(RTC::UniqueId /*ec_id*/)
//{
//  return RTC::RTC_OK;
//}


//RTC::ReturnCode_t ReceivingPC::onShutdown(RTC::UniqueId /*ec_id*/)
//{
//  return RTC::RTC_OK;
//}


RTC::ReturnCode_t ReceivingPC::onActivated(RTC::UniqueId /*ec_id*/)
{
 return RTC::RTC_OK;
}


//RTC::ReturnCode_t ReceivingPC::onDeactivated(RTC::UniqueId /*ec_id*/)
//{
//  return RTC::RTC_OK;
//}


RTC::ReturnCode_t ReceivingPC::onExecute(RTC::UniqueId /*ec_id*/)
{
  if(m_PCIn.isNew()){
    m_PCIn.read();
    std::cout<<"  "
      <<m_PC.height<<","
      <<m_PC.width<<","
      <<m_PC.is_dense<<std::endl;
    for(int i=0;i<m_PC.pc.length();i++){
      std::cout
      <<m_PC.pc[i].point.x<<","
      <<m_PC.pc[i].point.y<<","
      <<m_PC.pc[i].point.z<<std::endl;
      std::cout
      <<m_PC.pc[i].colour.r<<","
      <<m_PC.pc[i].colour.g<<","
      <<m_PC.pc[i].colour.b<<std::endl;
    }
  }
 return RTC::RTC_OK;
}


//RTC::ReturnCode_t ReceivingPC::onAborting(RTC::UniqueId /*ec_id*/)
//{
//  return RTC::RTC_OK;
//}


//RTC::ReturnCode_t ReceivingPC::onError(RTC::UniqueId /*ec_id*/)
//{
//  return RTC::RTC_OK;
//}


//RTC::ReturnCode_t ReceivingPC::onReset(RTC::UniqueId /*ec_id*/)
//{
//  return RTC::RTC_OK;
//}


//RTC::ReturnCode_t ReceivingPC::onStateUpdate(RTC::UniqueId /*ec_id*/)
//{
//  return RTC::RTC_OK;
//}


//RTC::ReturnCode_t ReceivingPC::onRateChanged(RTC::UniqueId /*ec_id*/)
//{
//  return RTC::RTC_OK;
//}



extern "C"
{
 
  void ReceivingPCInit(RTC::Manager* manager)
  {
    coil::Properties profile(receivingpc_spec);
    manager->registerFactory(profile,
                             RTC::Create<ReceivingPC>,
                             RTC::Delete<ReceivingPC>);
  }
  
}
