// -*- C++ -*-
// <rtc-template block="description">
/*!
 * @file  SendingPC.cpp
 * @brief ModuleDescription
 *
 */
// </rtc-template>

#include <pcl/io/pcd_io.h>
#include <pcl/point_types.h>
#include <pcl/filters/passthrough.h>
#include <pcl/common/common_headers.h>
// #include <pcl/features/normal_3d.h>
// #include <pcl/visualization/pcl_visualizer.h>
#include <pcl/console/parse.h>
// #include <boost/thread/thread.hpp>
#include <pcl/io/io.h>
#include <pcl/filters/statistical_outlier_removal.h>

#include "SendingPC.h"

// Module specification
// <rtc-template block="module_spec">
#if RTM_MAJOR_VERSION >= 2
static const char *const sendingpc_spec[] =
#else
static const char *sendingpc_spec[] =
#endif
    {
        "implementation_id", "SendingPC",
        "type_name", "SendingPC",
        "description", "ModuleDescription",
        "version", "1.0.0",
        "vendor", "suzakutakumi",
        "category", "Actuator",
        "activity_type", "PERIODIC",
        "kind", "DataFlowComponent",
        "max_instance", "1",
        "language", "C++",
        "lang_type", "compile",
        ""};
// </rtc-template>

/*!
 * @brief constructor
 * @param manager Maneger Object
 */
SendingPC::SendingPC(RTC::Manager *manager)
    // <rtc-template block="initializer">
    : RTC::DataFlowComponentBase(manager),
      m_PCOut("PC", m_PC)
// </rtc-template>
{
}

/*!
 * @brief destructor
 */
SendingPC::~SendingPC()
{
}

RTC::ReturnCode_t SendingPC::onInitialize()
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
RTC::ReturnCode_t SendingPC::onFinalize()
{
  return RTC::RTC_OK;
}
*/

// RTC::ReturnCode_t SendingPC::onStartup(RTC::UniqueId /*ec_id*/)
//{
//   return RTC::RTC_OK;
// }

// RTC::ReturnCode_t SendingPC::onShutdown(RTC::UniqueId /*ec_id*/)
//{
//   return RTC::RTC_OK;
// }

RTC::ReturnCode_t SendingPC::onActivated(RTC::UniqueId /*ec_id*/)
{
  return RTC::RTC_OK;
}

// RTC::ReturnCode_t SendingPC::onDeactivated(RTC::UniqueId /*ec_id*/)
//{
//   return RTC::RTC_OK;
// }

RTC::ReturnCode_t SendingPC::onExecute(RTC::UniqueId /*ec_id*/)
{
  pcl::PointCloud<pcl::PointXYZRGB>::Ptr cloud(new pcl::PointCloud<pcl::PointXYZRGB>);
  pcl::io::loadPCDFile<pcl::PointXYZRGB>("merged.pcd", *cloud);
  // m_PC.height = cloud->height;
  // m_PC.width = cloud->width;
  // m_PC.is_dense = false;

  // m_PC.pc.length(cloud->points.size());
  // for (int i = 0; i < m_PC.pc.length(); i++)
  // {
  //   m_PC.pc[i].point.x=cloud->points[i].x;
  //   m_PC.pc[i].point.y=cloud->points[i].y;
  //   m_PC.pc[i].point.z=cloud->points[i].z;

  //   m_PC.pc[i].colour.r=cloud->points[i].r;
  //   m_PC.pc[i].colour.g=cloud->points[i].g;
  //   m_PC.pc[i].colour.b=cloud->points[i].b;
  // }

  m_PC.height = 0;
  m_PC.width = 0;
  m_PC.is_dense = false;

  m_PC.pc.length(0);

  m_PCOut.write();
  return RTC::RTC_OK;
}

// RTC::ReturnCode_t SendingPC::onAborting(RTC::UniqueId /*ec_id*/)
//{
//   return RTC::RTC_OK;
// }

// RTC::ReturnCode_t SendingPC::onError(RTC::UniqueId /*ec_id*/)
//{
//   return RTC::RTC_OK;
// }

// RTC::ReturnCode_t SendingPC::onReset(RTC::UniqueId /*ec_id*/)
//{
//   return RTC::RTC_OK;
// }

// RTC::ReturnCode_t SendingPC::onStateUpdate(RTC::UniqueId /*ec_id*/)
//{
//   return RTC::RTC_OK;
// }

// RTC::ReturnCode_t SendingPC::onRateChanged(RTC::UniqueId /*ec_id*/)
//{
//   return RTC::RTC_OK;
// }

extern "C"
{

  void SendingPCInit(RTC::Manager *manager)
  {
    coil::Properties profile(sendingpc_spec);
    manager->registerFactory(profile,
                             RTC::Create<SendingPC>,
                             RTC::Delete<SendingPC>);
  }
}
