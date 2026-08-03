option(DEBUG "Enable debug build." OFF)
option(LIB_BUILD_TESTING "Enable testing and build tests." OFF)
option(LIB_BUILD_EXAMPLE "Enable and build example." OFF)

if(DEBUG)
    add_compile_definitions(DEBUG)
    add_compile_options(-g -ggdb -O0)
endif()

if(LIB_BUILD_TESTING)
    enable_testing()
    add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/CTest)
endif()
