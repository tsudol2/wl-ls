cmake_minimum_required(VERSION 3.27.6)

add_subdirectory(linkedlist)
set(WLLS_SOURCE_FILES main.cpp)

add_executable(${PROJECT_NAME} ${WLLS_SOURCE_FILES})
target_link_libraries(${PROJECT_NAME} linkedlist)
install(TARGETS ${PROJECT_NAME} DESTINATION ${WLLS_INSTALL_BIN_DIR})