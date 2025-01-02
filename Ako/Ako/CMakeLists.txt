# CMakeList.txt : CMake project for Ako, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (Ako "Ako.cpp" "Ako.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET Ako PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
add_subdirectory ("Engine")
target_link_libraries(Ako PUBLIC aEngine)
add_dependencies(Ako aEngine) # this command make sure aEngine compiles first...