//
//  @(#)port.h
//
//  liblog - portable functions
//  ---------------------------
//
//  copyright 2010-2019 Code Construct Systems (CCS)
//
#ifndef __PORT_H
#define __PORT_H

#include <time.h>

namespace Portable {
    int StringFormat(char *, size_t, const char *, ...);
    int Time(time_t *);
    int LocalTime(time_t *, struct tm *);
    int StringTime(char *, size_t, struct tm *);
    int FormatTime(char *, size_t, const char *, struct tm *);
};

#endif // __PORT_H */

