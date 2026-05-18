#pragma once

#ifdef PE_PLATFORM_WINDOWS
    #ifdef PE_BUILD_DLL
        #define PROJECTENGINE_API __declspec(dllexport)
    #else
        #define PROJECTENGINE_API __declspec(dllimport)
    #endif
#else
    #error Project engine only supports windows
#endif