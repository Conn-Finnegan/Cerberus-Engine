cmake_minimum_required(VERSION ${CMAKE_VERSION})

project(CERBERUS)

include_directories(
	src
)


add_library(Cerberus
	src/Cerberus/Core.cpp
	src/Cerberus/Core.h
)

add_executable(demo
	src/demo/main.cpp
	src/demo/Employee.cpp
	src/demo/Employee.h
	
)

target_link_libraries(demo Cerberus)
