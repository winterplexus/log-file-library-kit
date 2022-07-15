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
#include "logfile.h"

static void ProcessLogFile(const char *);
static void DisplayOptionsUsage(void);

int main(int argc, char **argv) {
    if (argc == 1) {
        DisplayOptionsUsage();
    }
    else {
        ProcessLogFile(argv[1]);
    }
    return (EXIT_SUCCESS);
}

static void ProcessLogFile(const char *log_file_path_name) {
    LogFile *logfile = NULL;

    try {
        logfile = new LogFile(std::string(log_file_path_name));
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
}

static void DisplayOptionsUsage(void) {
    std::cout << "usage: log-file-text.exe [log file path name]" << std::endl << std::endl;
}