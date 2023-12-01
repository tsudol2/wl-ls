cmake_minimum_required(VERSION 3.26)

add_subdirectory(linkedlist)
add_subdirectory(weirdlanguage)
set(WLLS_SOURCE_FILES main.cpp)

add_executable(${PROJECT_NAME} ${WLLS_SOURCE_FILES})
target_link_libraries(${PROJECT_NAME} linkedlist weirdlanguage)
install(TARGETS ${PROJECT_NAME} DESTINATION ${WLLS_INSTALL_BIN_DIR})