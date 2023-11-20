cmake_minimum_required(VERSION 3.27.6)
project(linkedlist)

add_subdirectory(linkedlistnode)

set(LINKEDLIST_SOURCE_FILES
    LinkedList.cpp
    LinkedList.h
)

add_library(${PROJECT_NAME} SHARED STATIC ${LINKEDLIST_SOURCE_FILES})
target_link_libraries(${PROJECT_NAME} linkedlistnode)

install(TARGETS ${PROJECT_NAME} DESTINATION ${WLLS_INSTALL_LIB_DIR})
install(FILES LinkedList.h DESTINATION ${WLLS_INSTALL_INCLUDE_DIR})