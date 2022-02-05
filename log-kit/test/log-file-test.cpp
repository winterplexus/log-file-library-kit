//
//  @(#)log-file-test.cpp
//
//  log file kit - log file test
//  ----------------------------
//
//  copyright 2014-2022 Code Construct Systems (CCS)
//
#include <iostream>
#include <string>
#include "log-file.h"

int main(int argc, char **argv) {
    if (argc == 1) {
        std::cout << "usage: log-file-test.exe [log file path name]]" << std::endl;
        return (0);
    }

    LogFile *logfile = NULL;

    try {
        logfile = new LogFile(argv[1]);
        logfile->SetDateTimeFormat("%Y-%m-%d - %H:%M:%S");
        logfile->WriteTraceLog("trace message");
        logfile->WriteDebugLog("debug message");
        logfile->WriteInformationLog("information message");
        logfile->WriteWarningLog("warning message");
        logfile->WriteErrorLog("error message");
        logfile->WriteFatalLog("fatal message");
    }
    catch (std::exception &e) {
        std::cout << "error-> " << std::string(e.what()) << std::endl;
    }

    delete logfile;

    return (0);
}