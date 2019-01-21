cmake_minimum_required(VERSION 2.8.3)
project(ros_cpp_template_package)

## Find catkin macros and libraries
## if COMPONENTS list like find_package(catkin REQUIRED COMPONENTS xyz)
## is used, also find other catkin packages
find_package(catkin REQUIRED COMPONENTS
  roscpp
  std_msgs
  ## sensor_msgs
  ## geometry_msgs
  ## nav_msgs  
  ## tf
)

catkin_package(
   INCLUDE_DIRS include
   LIBRARIES ## Add dependencies of other libraries
   CATKIN_DEPENDS roscpp std_msgs ## sensor_msgs geometry_msgs nav_msgs tf 
   DEPENDS 
)

include_directories(
  include
  ${catkin_INCLUDE_DIRS}
)

## Definition of libraries
## RosCppTemplate 
add_library(RosCppTemplate
  src/RosCppTemplate.cpp
)
target_link_libraries(RosCppTemplate
  ${catkin_LIBRARIES}
)
add_dependencies(RosCppTemplate
  ${catkin_EXPORTED_TARGETS}
)

## Definition of executables
## ros_cpp_template
add_executable(ros_cpp_template
  src/ros_cpp_template.cpp
)
target_link_libraries(ros_cpp_template
  RosCppTemplate
  ${catkin_LIBRARIES}
)

install(TARGETS ros_cpp_template
   		RosCppTemplate

   ARCHIVE DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
   LIBRARY DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
   RUNTIME DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION}
)

install(FILES
  DESTINATION ${CATKIN_PACKAGE_SHARE_DESTINATION}
)

