cmake_minimum_required(VERSION 3.29)
project(stuff VERSION 0.1)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(${PROJECT_SOURCE_DIR}/engine/include)

#glfw stuff
include_directories(${PROJECT_SOURCE_DIR}/engine/vendor/includes)
#vulkan
include_directories(C:/VulkanSDK/1.3.283.0/Include)

file(GLOB_RECURSE SOURCES "${PROJECT_SOURCE_DIR}/engine/src/*.cpp")

add_executable(${PROJECT_NAME} ${PROJECT_SOURCE_DIR}/game/main.cpp ${SOURCES})

#glfw libs
set(GLFW_LIB_DIR ${PROJECT_SOURCE_DIR}/engine/vendor/libs)
target_link_libraries(${PROJECT_NAME} PRIVATE ${GLFW_LIB_DIR}/glfw3.lib)
#vulkan libs
set(VULKAN_LIB_DIR C:/VulkanSDK/1.3.283.0/Lib)
target_link_libraries(${PROJECT_NAME} PRIVATE ${VULKAN_LIB_DIR}/vulkan-1.lib)