

add_executable(WinMerge
    Merge.cpp)

target_include_directories(WinMerge
    PUBLIC
        .
        Common
        CrashLogger
        diffutils
        diffutils/src
        ../include
        ../Externals/boost
        ../Externals/crystaledit/editlib
        ../Externals/poco/Foundation/include)