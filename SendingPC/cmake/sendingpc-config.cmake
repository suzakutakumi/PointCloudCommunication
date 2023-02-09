# SendingPC CMake config file
#
# This file sets the following variables:
# SendingPC_FOUND - Always TRUE.
# SendingPC_INCLUDE_DIRS - Directories containing the SendingPC include files.
# SendingPC_IDL_DIRS - Directories containing the SendingPC IDL files.
# SendingPC_LIBRARIES - Libraries needed to use SendingPC.
# SendingPC_DEFINITIONS - Compiler flags for SendingPC.
# SendingPC_VERSION - The version of SendingPC found.
# SendingPC_VERSION_MAJOR - The major version of SendingPC found.
# SendingPC_VERSION_MINOR - The minor version of SendingPC found.
# SendingPC_VERSION_REVISION - The revision version of SendingPC found.
# SendingPC_VERSION_CANDIDATE - The candidate version of SendingPC found.

message(STATUS "Found SendingPC-")
set(SendingPC_FOUND TRUE)

find_package(<dependency> REQUIRED)

#set(SendingPC_INCLUDE_DIRS
#    "/usr/local/include/sendingpc-"
#    ${<dependency>_INCLUDE_DIRS}
#    )
#
#set(SendingPC_IDL_DIRS
#    "/usr/local/include/sendingpc-/idl")
set(SendingPC_INCLUDE_DIRS
    "/usr/local/include/"
    ${<dependency>_INCLUDE_DIRS}
    )
set(SendingPC_IDL_DIRS
    "/usr/local/include//idl")


if(WIN32)
    set(SendingPC_LIBRARIES
        "/usr/local//libsendingpc.a"
        ${<dependency>_LIBRARIES}
        )
else(WIN32)
    set(SendingPC_LIBRARIES
        "/usr/local//libsendingpc.so"
        ${<dependency>_LIBRARIES}
        )
endif(WIN32)

set(SendingPC_DEFINITIONS ${<dependency>_DEFINITIONS})

set(SendingPC_VERSION )
set(SendingPC_VERSION_MAJOR )
set(SendingPC_VERSION_MINOR )
set(SendingPC_VERSION_REVISION )
set(SendingPC_VERSION_CANDIDATE )

