// Generated by gencpp from file adhoc_communication/SendQuaternionRequest.msg
// DO NOT EDIT!


#ifndef ADHOC_COMMUNICATION_MESSAGE_SENDQUATERNIONREQUEST_H
#define ADHOC_COMMUNICATION_MESSAGE_SENDQUATERNIONREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Quaternion.h>

namespace adhoc_communication
{
template <class ContainerAllocator>
struct SendQuaternionRequest_
{
  typedef SendQuaternionRequest_<ContainerAllocator> Type;

  SendQuaternionRequest_()
    : dst_robot()
    , topic()
    , quaternion()  {
    }
  SendQuaternionRequest_(const ContainerAllocator& _alloc)
    : dst_robot(_alloc)
    , topic(_alloc)
    , quaternion(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _dst_robot_type;
  _dst_robot_type dst_robot;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _topic_type;
  _topic_type topic;

   typedef  ::geometry_msgs::Quaternion_<ContainerAllocator>  _quaternion_type;
  _quaternion_type quaternion;




  typedef boost::shared_ptr< ::adhoc_communication::SendQuaternionRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::adhoc_communication::SendQuaternionRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SendQuaternionRequest_

typedef ::adhoc_communication::SendQuaternionRequest_<std::allocator<void> > SendQuaternionRequest;

typedef boost::shared_ptr< ::adhoc_communication::SendQuaternionRequest > SendQuaternionRequestPtr;
typedef boost::shared_ptr< ::adhoc_communication::SendQuaternionRequest const> SendQuaternionRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::adhoc_communication::SendQuaternionRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::adhoc_communication::SendQuaternionRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace adhoc_communication

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'nav_msgs': ['/opt/ros/indigo/share/nav_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/indigo/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'adhoc_communication': ['/home/administrator/catkin_ws/src/aau_multi_robot/adhoc_communication/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::adhoc_communication::SendQuaternionRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::adhoc_communication::SendQuaternionRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::adhoc_communication::SendQuaternionRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::adhoc_communication::SendQuaternionRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::adhoc_communication::SendQuaternionRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::adhoc_communication::SendQuaternionRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::adhoc_communication::SendQuaternionRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a2fa07dd3b43cd3d82b5ce25b15661c2";
  }

  static const char* value(const ::adhoc_communication::SendQuaternionRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa2fa07dd3b43cd3dULL;
  static const uint64_t static_value2 = 0x82b5ce25b15661c2ULL;
};

template<class ContainerAllocator>
struct DataType< ::adhoc_communication::SendQuaternionRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "adhoc_communication/SendQuaternionRequest";
  }

  static const char* value(const ::adhoc_communication::SendQuaternionRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::adhoc_communication::SendQuaternionRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string dst_robot\n\
string topic\n\
geometry_msgs/Quaternion quaternion\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
";
  }

  static const char* value(const ::adhoc_communication::SendQuaternionRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::adhoc_communication::SendQuaternionRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.dst_robot);
      stream.next(m.topic);
      stream.next(m.quaternion);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SendQuaternionRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::adhoc_communication::SendQuaternionRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::adhoc_communication::SendQuaternionRequest_<ContainerAllocator>& v)
  {
    s << indent << "dst_robot: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.dst_robot);
    s << indent << "topic: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.topic);
    s << indent << "quaternion: ";
    s << std::endl;
    Printer< ::geometry_msgs::Quaternion_<ContainerAllocator> >::stream(s, indent + "  ", v.quaternion);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ADHOC_COMMUNICATION_MESSAGE_SENDQUATERNIONREQUEST_H