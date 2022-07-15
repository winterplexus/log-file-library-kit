################################################################################
#                                                                              #
# makefile.os                                                                  #
#                                                                              #
# log-file library                                                             #
#                                                                              #
# version 2.0.0 release 1                                                      #
#                                                                              #
# copyright (c) 2014-2022 Code Construct Systems (CCS) [CONFIDENTIAL]          #
#                                                                              #
################################################################################

# Open systems OS/OE port

#
# log file library name
#
TARGET = liblogfile.a

#
# Include path
#
INCPATH = ../inc

#
# Library path
#
LIBPATH = ../lib

#
# C++ compiler definitions and flags
#
CC = g++
CDEBUG = -g
COPTIMIZE = -O3
CDEFS = -D_POSIX_ENVIRONMENT
CFLAGS = -c $(CDEBUG) $(COPTIMIZE) $(CDEFS)

#
# Archiver and flags
#
AR = ar
ARFLAGS = crvs

#
# Include flags
#
INCLUDE = -I.

#
# List of include files
#
INCLUDES = \
	logfile.h

#
# List of object files
#
OBJECTS = \
	logfile.o \
	port.o \
	version.o

all: $(TARGET)

#
# Rule for creating the log file library
#
$(TARGET): $(OBJECTS)
	@echo "building $@"
	@$(AR) $(ARFLAGS) $@ $(OBJECTS)
	mv $(TARGET) $(LIBPATH)
	cp $(INCLUDES) $(INCPATH)

#
# Rule for building log file class object
#
logfile.o: logfile.cpp
	@echo "building $@"
	@$(CC) $(CFLAGS) $(INCLUDE) -o $@ $<

#
# Rule for building port functions object
#
port.o: port.cpp
	@echo "building $@"
	@$(CC) $(CFLAGS) $(INCLUDE) -o $@ $<

#
# Rule for building version object
#
version.o: version.cpp
	@echo "building $@"
	@$(CC) $(CFLAGS) $(INCLUDE) -o $@ $<

#
# Rule for cleaning out generated files
#
clean:
	rm -f *.o
