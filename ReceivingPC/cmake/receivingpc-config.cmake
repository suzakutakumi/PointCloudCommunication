# ReceivingPC CMake config file
#
# This file sets the following variables:
# ReceivingPC_FOUND - Always TRUE.
# ReceivingPC_INCLUDE_DIRS - Directories containing the ReceivingPC include files.
# ReceivingPC_IDL_DIRS - Directories containing the ReceivingPC IDL files.
# ReceivingPC_LIBRARIES - Libraries needed to use ReceivingPC.
# ReceivingPC_DEFINITIONS - Compiler flags for ReceivingPC.
# ReceivingPC_VERSION - The version of ReceivingPC found.
# ReceivingPC_VERSION_MAJOR - The major version of ReceivingPC found.
# ReceivingPC_VERSION_MINOR - The minor version of ReceivingPC found.
# ReceivingPC_VERSION_REVISION - The revision version of ReceivingPC found.
# ReceivingPC_VERSION_CANDIDATE - The candidate version of ReceivingPC found.

message(STATUS "Found ReceivingPC-")
set(ReceivingPC_FOUND TRUE)

find_package(<dependency> REQUIRED)

#set(ReceivingPC_INCLUDE_DIRS
#    "/usr/local/include/receivingpc-"
#    ${<dependency>_INCLUDE_DIRS}
#    )
#
#set(ReceivingPC_IDL_DIRS
#    "/usr/local/include/receivingpc-/idl")
set(ReceivingPC_INCLUDE_DIRS
    "/usr/local/include/"
    ${<dependency>_INCLUDE_DIRS}
    )
set(ReceivingPC_IDL_DIRS
    "/usr/local/include//idl")


if(WIN32)
    set(ReceivingPC_LIBRARIES
        "/usr/local//libreceivingpc.a"
        ${<dependency>_LIBRARIES}
        )
else(WIN32)
    set(ReceivingPC_LIBRARIES
        "/usr/local//libreceivingpc.so"
        ${<dependency>_LIBRARIES}
        )
endif(WIN32)

set(ReceivingPC_DEFINITIONS ${<dependency>_DEFINITIONS})

set(ReceivingPC_VERSION )
set(ReceivingPC_VERSION_MAJOR )
set(ReceivingPC_VERSION_MINOR )
set(ReceivingPC_VERSION_REVISION )
set(ReceivingPC_VERSION_CANDIDATE )

