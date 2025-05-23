cmake_minimum_required(VERSION 3.30)

project(opengl_thing VERSION 1.0.0)

set(CMAKE_C_STANDARD 23)
set(CMAKE_C_STANDARD_REQUIRED True)
set(CMAKE_GENERATOR_PLATFORM x64)
set(CMAKE_C_FLAGS_RELEASE "-Os -s")

file(GLOB_RECURSE SOURCES
	"src/**.c"
	"include/**.c"
)

file(GLOB_RECURSE HEADERS
	"src/**.h"
)

include_directories("external/glfw-3.4/include")
link_directories("external/glfw-3.4/lib-mingw-w64")
include_directories("external/cglm-0.9.6/include")
include_directories("external/ode/include")
link_directories("external/ode")

include_directories("include")
include_directories("include/glad/include")

add_executable(${PROJECT_NAME} ${SOURCES})

set_target_properties(
	${PROJECT_NAME} PROPERTIES

	OUTPUT_NAME "opengl_thing"
	PREFIX ""
)

target_link_libraries(${PROJECT_NAME} glfw3 libode_double)

install(
	TARGETS ${PROJECT_NAME}
	RUNTIME DESTINATION bin
)
