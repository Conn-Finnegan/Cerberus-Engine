cmake_minimum_required(VERSION ${CMAKE_VERSION})

project(CERBERUS)

include_directories(
	src
)


add_library(Cerberus
	src/Cerberus/Cerberus.h
	src/Cerberus/Core.cpp
	src/Cerberus/Core.h
	src/Cerberus/Entity.h
	src/Cerberus/Component.h
)

add_executable(demo
	src/demo/main.cpp
	src/demo/Employee.cpp
	src/demo/Employee.h
	
)

target_link_libraries(demo Cerberus)
