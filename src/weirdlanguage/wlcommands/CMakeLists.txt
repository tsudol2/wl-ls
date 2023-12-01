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
    CombineInstruction.cpp
    CombineInstruction.h
    GetInstruction.cpp
    GetInstruction.h
    SetInstruction.cpp
    SetInstruction.h
    CopyInstruction.cpp
    CopyInstruction.h
    ChsInstruction.cpp
    ChsInstruction.h
    AddInstruction.cpp
    AddInstruction.h
    GotoInstruction.cpp
    GotoInstruction.h
    IfInstruction.cpp
    IfInstruction.h
    HltInstruction.cpp
    HltInstruction.h
)

set(WLCOMMANDS_HEADER_FILES
    WLCommandFactory.h
    WLCommand.h
    VarIntInstruction.h
    VarListInstruction.h
    CombineInstruction.h
    GetInstruction.h
    SetInstruction.h
    CopyInstruction.h
    ChsInstruction.h
    AddInstruction.h
    GotoInstruction.h
    IfInstruction.h
)

add_library(${PROJECT_NAME} SHARED STATIC ${WLCOMMANDS_SOURCE_FILES})

install(TARGETS ${PROJECT_NAME} DESTINATION ${WLLS_INSTALL_LIB_DIR})
install(FILES ${WLCOMMANDS_HEADER_FILES} DESTINATION ${WLLS_INSTALL_INCLUDE_DIR})