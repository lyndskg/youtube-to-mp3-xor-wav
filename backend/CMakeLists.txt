cmake_minimum_required(VERSION 3.25)
project(ytconv3rt3r CXX)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add the 'src' subdirectory for your main project source files
add_subdirectory(backend/cpp/src)

# Add the 'test' subdirectory for unit tests
add_subdirectory(backend/cpp/tests)

# Add any additional subdirectories here (if needed)
# ...

# Define the source files for the main project
set(SRCS
        main.cpp
        backend/cpp/src/example.cpp
        backend/cpp/src/example.h
        )

# Set the path to the downloaded GoogleMock source
set(GMOCK_DIR "/path/to/googletest/googlemock" CACHE PATH "The path to the GoogleMock source directory")

# Add GoogleMock as an external dependency
add_subdirectory(${GMOCK_DIR} ${CMAKE_BINARY_DIR}/googlemock)

# Create object file names from source file names
set(OBJS)
foreach(src ${SRCS})
    get_filename_component(obj_name ${src} NAME_WE)
    list(APPEND OBJS ${CMAKE_BINARY_DIR}/${obj_name}.o)
endforeach()


# Compile rule for each .cpp file to produce .o files
foreach(src ${SRCS})
    get_filename_component(obj_name ${src} NAME_WE)
    add_compile_options("-arch" "arm64")
    add_executable(${obj_name} ${CMAKE_SOURCE_DIR}/${src})
endforeach()

# Link rule to produce the final executable 'bsm'
add_executable(convert ${OBJS})
target_link_options(convert PRIVATE "-arch" "arm64")

# Add include directories if needed
target_include_directories(convert PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include/customMake)

# Set additional compiler flags
target_compile_options(convert PRIVATE
        "-Wconversion"
        "-Wall"
        "-Werror"
        "-Wextra"
        "-pedantic"
        )

# Set the arm64 architecture as the target
set(CMAKE_OSX_ARCHITECTURES "arm64")

# Copy the contents of the data directory to the build directory
file(COPY data DESTINATION ${CMAKE_BINARY_DIR})

# Set the C++ standard library to libc++ (for macOS)
if (APPLE)
    target_link_options(convert PRIVATE -stdlib=libc++)
endif()


# Compile rule for each test .cpp file to produce .o files
foreach(src ${TESTSRCS})
    get_filename_component(obj_name ${src} NAME_WE)
    add_compile_options("-arch" "arm64")
    add_executable(${obj_name} ${CMAKE_SOURCE_DIR}/${src})
endforeach()

# Add a custom target for cleaning the build
add_custom_target(convert COMMAND ${CMAKE_COMMAND} -E remove_directory ${CMAKE_BINARY_DIR}
        COMMAND ${CMAKE_COMMAND} -E make_directory ${CMAKE_BINARY_DIR})



# Set the path to the Boost installation directory
set(BOOST_ROOT "/path/to/boost")

# Add the Boost include directory
include_directories(${BOOST_ROOT})

# Link against the Boost libraries you need, e.g., Boost.Log
target_link_libraries(ytconv3rt3r PRIVATE Boost::log)

