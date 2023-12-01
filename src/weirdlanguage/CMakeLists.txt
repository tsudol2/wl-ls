cmake_minimum_required(VERSION 3.26)
project(weirdlanguage)

add_subdirectory(wlcommands)

set(WEIRDLANGUAGE_SOURCE_FILES
    WLLanguageSystem.cpp
    WLLanguageSystem.h
    WLInvoker.cpp
    WLInvoker.cpp
    WLReceiver.cpp
    WLReceiver.cpp
)

set(WEIRDLANGUAGE_HEADER_FILES
    WLLanguageSystem.h
    WLInvoker.h
    WLReceiver.h
)

add_library(${PROJECT_NAME} SHARED STATIC ${WEIRDLANGUAGE_SOURCE_FILES})
target_link_libraries(${PROJECT_NAME} linkedlist wlcommands)

install(TARGETS ${PROJECT_NAME} DESTINATION ${WLLS_INSTALL_LIB_DIR})
install(FILES ${WEIRDLANGUAGE_HEADER_FILES} DESTINATION ${WLLS_INSTALL_INCLUDE_DIR})