cmake_minimum_required(VERSION 3.26)
project(wl-ls)
set(CMAKE_CXX_STANDARD 11)

set(CMAKE_INSTALL_PREFIX ${PROJECT_SOURCE_DIR})

set(WLLS_INSTALL_INCLUDE_DIR ${PROJECT_SOURCE_DIR}/include)
set(WLLS_INSTALL_BIN_DIR ${PROJECT_SOURCE_DIR}/bin)
set(WLLS_INSTALL_LIB_DIR ${PROJECT_SOURCE_DIR}/lib)

set(WLLS_HEADERS_DIR ${PROJECT_SOURCE_DIR}/src/${PROJECT_NAME})

include_directories(${WLLS_INSTALL_INCLUDE_DIR})
include_directories(${WLLS_HEADERS_DIR})

add_subdirectory(src)
add_subdirectory(tests)