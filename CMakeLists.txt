cmake_minimum_required(VERSION 3.17)
project(spotify-gtk)

set(CMAKE_CXX_STANDARD 11)

# gtkmm
find_package(PkgConfig REQUIRED)
pkg_check_modules(GTKMM gtkmm-3.0)
link_directories(${GTKMM_LIBRARY_DIRS})
include_directories(${GTKMM_INCLUDE_DIRS})

# Add source files
file(GLOB MAIN_SRC "src/*.[hc]pp")
file(GLOB SUB_SRC "src/*/*.[hc]pp")
add_executable(spotify-gtk ${MAIN_SRC} ${SUB_SRC})

# Link libraries
target_link_libraries(spotify-gtk ${GTKMM_LIBRARIES})