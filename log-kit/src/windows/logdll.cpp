//
//  @(#)logdll.cpp
//
//  liblog - log file DLL entry point
//  ---------------------------------
//
//  copyright 2010-2019 Code Construct Systems (CCS)
//
#define WIN32_LEAN_AND_MEAN

#include <windows.h>

BOOL APIENTRY DllMain(HMODULE library_base_address, DWORD reason_code, LPVOID reserved) {
    switch (reason_code) {
        case DLL_PROCESS_ATTACH:
        case DLL_THREAD_ATTACH:
        case DLL_THREAD_DETACH:
        case DLL_PROCESS_DETACH:
             break;
    }

    return (TRUE);
}