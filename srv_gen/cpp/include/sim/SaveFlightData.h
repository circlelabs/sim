/* Auto-generated by genmsg_cpp for file /home/david/ros_workspace/sim/srv/SaveFlightData.srv */
#ifndef SIM_SERVICE_SAVEFLIGHTDATA_H
#define SIM_SERVICE_SAVEFLIGHTDATA_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"

#include "ros/service_traits.h"




namespace sim
{
template <class ContainerAllocator>
struct SaveFlightDataRequest_ {
  typedef SaveFlightDataRequest_<ContainerAllocator> Type;

  SaveFlightDataRequest_()
  : filename()
  {
  }

  SaveFlightDataRequest_(const ContainerAllocator& _alloc)
  : filename(_alloc)
  {
  }

  typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _filename_type;
  std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  filename;


  typedef boost::shared_ptr< ::sim::SaveFlightDataRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::sim::SaveFlightDataRequest_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct SaveFlightDataRequest
typedef  ::sim::SaveFlightDataRequest_<std::allocator<void> > SaveFlightDataRequest;

typedef boost::shared_ptr< ::sim::SaveFlightDataRequest> SaveFlightDataRequestPtr;
typedef boost::shared_ptr< ::sim::SaveFlightDataRequest const> SaveFlightDataRequestConstPtr;


template <class ContainerAllocator>
struct SaveFlightDataResponse_ {
  typedef SaveFlightDataResponse_<ContainerAllocator> Type;

  SaveFlightDataResponse_()
  : error()
  {
  }

  SaveFlightDataResponse_(const ContainerAllocator& _alloc)
  : error(_alloc)
  {
  }

  typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _error_type;
  std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  error;


  typedef boost::shared_ptr< ::sim::SaveFlightDataResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::sim::SaveFlightDataResponse_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct SaveFlightDataResponse
typedef  ::sim::SaveFlightDataResponse_<std::allocator<void> > SaveFlightDataResponse;

typedef boost::shared_ptr< ::sim::SaveFlightDataResponse> SaveFlightDataResponsePtr;
typedef boost::shared_ptr< ::sim::SaveFlightDataResponse const> SaveFlightDataResponseConstPtr;

struct SaveFlightData
{

typedef SaveFlightDataRequest Request;
typedef SaveFlightDataResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct SaveFlightData
} // namespace sim

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::sim::SaveFlightDataRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::sim::SaveFlightDataRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::sim::SaveFlightDataRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "030824f52a0628ead956fb9d67e66ae9";
  }

  static const char* value(const  ::sim::SaveFlightDataRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x030824f52a0628eaULL;
  static const uint64_t static_value2 = 0xd956fb9d67e66ae9ULL;
};

template<class ContainerAllocator>
struct DataType< ::sim::SaveFlightDataRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "sim/SaveFlightDataRequest";
  }

  static const char* value(const  ::sim::SaveFlightDataRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::sim::SaveFlightDataRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "string filename\n\
\n\
";
  }

  static const char* value(const  ::sim::SaveFlightDataRequest_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::sim::SaveFlightDataResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::sim::SaveFlightDataResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::sim::SaveFlightDataResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "eca8b96616c32aacf1be8bbf14c70eba";
  }

  static const char* value(const  ::sim::SaveFlightDataResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xeca8b96616c32aacULL;
  static const uint64_t static_value2 = 0xf1be8bbf14c70ebaULL;
};

template<class ContainerAllocator>
struct DataType< ::sim::SaveFlightDataResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "sim/SaveFlightDataResponse";
  }

  static const char* value(const  ::sim::SaveFlightDataResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::sim::SaveFlightDataResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "string error\n\
\n\
\n\
";
  }

  static const char* value(const  ::sim::SaveFlightDataResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::sim::SaveFlightDataRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.filename);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct SaveFlightDataRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::sim::SaveFlightDataResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.error);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct SaveFlightDataResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<sim::SaveFlightData> {
  static const char* value() 
  {
    return "fe8131f61ada79495e0d839037fe5bd9";
  }

  static const char* value(const sim::SaveFlightData&) { return value(); } 
};

template<>
struct DataType<sim::SaveFlightData> {
  static const char* value() 
  {
    return "sim/SaveFlightData";
  }

  static const char* value(const sim::SaveFlightData&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<sim::SaveFlightDataRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "fe8131f61ada79495e0d839037fe5bd9";
  }

  static const char* value(const sim::SaveFlightDataRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<sim::SaveFlightDataRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "sim/SaveFlightData";
  }

  static const char* value(const sim::SaveFlightDataRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<sim::SaveFlightDataResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "fe8131f61ada79495e0d839037fe5bd9";
  }

  static const char* value(const sim::SaveFlightDataResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<sim::SaveFlightDataResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "sim/SaveFlightData";
  }

  static const char* value(const sim::SaveFlightDataResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // SIM_SERVICE_SAVEFLIGHTDATA_H

