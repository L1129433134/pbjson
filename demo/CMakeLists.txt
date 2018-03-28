cmake_minimum_required(VERSION 2.8)
PROJECT(demo)

#IF (CMAKE_BUILD_TYPE)
#ELSE ()
    SET(CMAKE_BUILD_TYPE "Release")
#ENDIF ()

SET(CONAN_FILE_NAME "../conanfile.txt")
execute_process(COMMAND conan install  ${PROJECT_SOURCE_DIR}/${CONAN_FILE_NAME} --build=missing)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

SET(CMAKE_CXX_FLAGS_RELEASE " $ENV{CXXFLAGS}  -DNDEBUG -fPIC -O3 -w")
SET(CMAKE_CXX_FLAGS_DEBUG "   $ENV{CXXFLAGS}  -DDEBUG -fPIC -O3 -w")

ADD_DEFINITIONS(-fPIC)

FILE(GLOB_RECURSE SRC_LISTS ../src/*.cpp ../src/*.c ../src/*.cc ./src/*.cc main.cpp)

INCLUDE_DIRECTORIES(${CONAN_INCLUDE_DIRS} . ./src/cpp ../src ../src/rapidjson)

SET(PLATFORM ${CMAKE_SYSTEM_NAME}-${CMAKE_SYSTEM_PROCESSOR})
foreach (libdir ${CONAN_LIB_DIRS})
    LIST(APPEND LIBSDIR ${libdir}/${PLATFORM})
endforeach (libdir)
LINK_DIRECTORIES(${LIBSDIR} ${CONAN_LIB_DIRS})

add_executable(${PROJECT_NAME} ${SRC_LISTS})
TARGET_LINK_LIBRARIES(${PROJECT_NAME} ${CONAN_LIBS_PROTOBUF})

#INSTALL(TARGETS ${PROJECT_NAME} ARCHIVE DESTINATION ${PROJECT_SOURCE_DIR})
