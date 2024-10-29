cmake_minimum_required(VERSION ${CMAKE_VERSION})

project(CERBERUS)

include_directories(
	src
)

include_directories(
	contrib/cl-windows-x86_64/lib
)

add_library(rend
  src/rend/Animation.cpp
  src/rend/Buffer.cpp
  src/rend/Debug.cpp
  src/rend/Font.cpp
  src/rend/Mesh.cpp
  src/rend/Model.cpp
  src/rend/ModelShader.cpp
  src/rend/RenderTexture.cpp
  src/rend/Shader.cpp
  src/rend/TextShader.cpp
  src/rend/Texture.cpp
  src/rend/rendmath.cpp
  src/rend/utils.cpp
)
target_link_libraries(rend glew32 SDL2 opengl32)


add_library(Cerberus
	src/Cerberus/Cerberus.h
	src/Cerberus/Core.cpp
	src/Cerberus/Core.h
	src/Cerberus/Entity.h
	src/Cerberus/Component.h
	src/Cerberus/Entity.cpp
	src/Cerberus/Component.cpp
	src/Cerberus/window.h
)

target_link_libraries(Cerberus rend)

add_executable(demo
	src/demo/main.cpp
	src/demo/Employee.cpp
	src/demo/Employee.h
	
)

target_link_libraries(demo Cerberus)
