// Generated by gencpp from file navigation/PlannerRequest.msg
// DO NOT EDIT!


#ifndef NAVIGATION_MESSAGE_PLANNERREQUEST_H
#define NAVIGATION_MESSAGE_PLANNERREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Float32.h>
#include <std_msgs/Float32.h>

namespace navigation
{
template <class ContainerAllocator>
struct PlannerRequest_
{
  typedef PlannerRequest_<ContainerAllocator> Type;

  PlannerRequest_()
    : start()
    , goal()  {
    }
  PlannerRequest_(const ContainerAllocator& _alloc)
    : start(_alloc)
    , goal(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector< ::std_msgs::Float32_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::std_msgs::Float32_<ContainerAllocator> >::other >  _start_type;
  _start_type start;

   typedef std::vector< ::std_msgs::Float32_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::std_msgs::Float32_<ContainerAllocator> >::other >  _goal_type;
  _goal_type goal;





  typedef boost::shared_ptr< ::navigation::PlannerRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::navigation::PlannerRequest_<ContainerAllocator> const> ConstPtr;

}; // struct PlannerRequest_

typedef ::navigation::PlannerRequest_<std::allocator<void> > PlannerRequest;

typedef boost::shared_ptr< ::navigation::PlannerRequest > PlannerRequestPtr;
typedef boost::shared_ptr< ::navigation::PlannerRequest const> PlannerRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::navigation::PlannerRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::navigation::PlannerRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace navigation

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'navigation': ['/home/tyjo/catkin_ws_o/test_codes/Trotbot/trotbot_ws/src/navigation/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::navigation::PlannerRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::navigation::PlannerRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::navigation::PlannerRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::navigation::PlannerRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::navigation::PlannerRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::navigation::PlannerRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::navigation::PlannerRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dd1a8738d5147232a034239634382b47";
  }

  static const char* value(const ::navigation::PlannerRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xdd1a8738d5147232ULL;
  static const uint64_t static_value2 = 0xa034239634382b47ULL;
};

template<class ContainerAllocator>
struct DataType< ::navigation::PlannerRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "navigation/PlannerRequest";
  }

  static const char* value(const ::navigation::PlannerRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::navigation::PlannerRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Float32[] start\n\
std_msgs/Float32[] goal\n\
\n\
================================================================================\n\
MSG: std_msgs/Float32\n\
float32 data\n\
";
  }

  static const char* value(const ::navigation::PlannerRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::navigation::PlannerRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.start);
      stream.next(m.goal);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PlannerRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::navigation::PlannerRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::navigation::PlannerRequest_<ContainerAllocator>& v)
  {
    s << indent << "start[]" << std::endl;
    for (size_t i = 0; i < v.start.size(); ++i)
    {
      s << indent << "  start[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::std_msgs::Float32_<ContainerAllocator> >::stream(s, indent + "    ", v.start[i]);
    }
    s << indent << "goal[]" << std::endl;
    for (size_t i = 0; i < v.goal.size(); ++i)
    {
      s << indent << "  goal[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::std_msgs::Float32_<ContainerAllocator> >::stream(s, indent + "    ", v.goal[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // NAVIGATION_MESSAGE_PLANNERREQUEST_H
