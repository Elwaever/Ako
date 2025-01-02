

add_library(aEngine "main/Engine.cpp" "main/Engine.h")

# ### make this Library run cxx 20, we need some  futures from cxx 17+ 
if (CMAKE_VERSION VERSION_GREATER 3.12)
    set_property(TARGET aEngine PROPERTY CXX_STANDARD 23)
    set_property(TARGET aEngine PROPERTY CXX_STANDARD_REQUIRED ON)
endif()





include_directories("{CMAKE_CURRENT_SOURCE_DIR}/main")
