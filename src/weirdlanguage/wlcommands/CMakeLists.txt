cmake_minimum_required(VERSION 3.26)
project(wlcommands)

set(WLCOMMANDS_SOURCE_FILES
    WLCommandFactory.cpp
    WLCommandFactory.h
    WLCommand.cpp
    WLCommand.h
    VarIntInstruction.cpp
    VarIntInstruction.h
        VarListInstruction.cpp
        VarListInstruction.h
)

set(WLCOMMANDS_HEADER_FILES
    WLCommandFactory.h
    WLCommand.h
    VarIntInstruction.h
    VarListInstruction.h
)

add_library(${PROJECT_NAME} SHARED STATIC ${WLCOMMANDS_SOURCE_FILES})

install(TARGETS ${PROJECT_NAME} DESTINATION ${WLLS_INSTALL_LIB_DIR})
install(FILES ${WLCOMMANDS_HEADER_FILES} DESTINATION ${WLLS_INSTALL_INCLUDE_DIR})