cmake_minimum_required(VERSION 3.26)
project(wl-gtest)

add_subdirectory(lib)


include_directories(${WLLS_HEADERS_DIR})
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(${PROJECT_NAME} src/tests.cpp)

target_link_libraries(${PROJECT_NAME} linkedlist gtest gtest_main)
install(TARGETS ${PROJECT_NAME} DESTINATION bin)