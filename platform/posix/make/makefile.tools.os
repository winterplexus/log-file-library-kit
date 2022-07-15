################################################################################
#                                                                              #
# makefile.tools.os                                                            #
#                                                                              #
# log-file library test application                                            #
#                                                                              #
# version 2.0.0 release 1                                                      #
#                                                                              #
# copyright (c) 2014-2022 Code Construct Systems (CCS) [CONFIDENTIAL]          #
#                                                                              #
################################################################################

# Open Systems OS/OE port

#
# log-file library test application name
#
TARGET = logfile-test

#
# Include flags
#
INCLUDE = -I. -I../inc

#
# Library flags
#
LIB = -L../lib

#
# C++ compiler and options
#
CC = g++
CDEBUG = -g
COPTIMIZE = -O3
CDEFS =
CFLAGS = -c $(CDEBUG) $(COPTIMIZE) $(CDEFS)

#
# List of object files
#
OBJECTS = \
	logfile-test.o

#
# List of library files
#
LIBS = \
	-llogfile

all: $(TARGET)

#
# Rule for creating the log file library test application
#
$(TARGET): $(OBJECTS)
	@echo "building $@"
	@$(CC) $(OBJECTS) -lstdc++ $(LIB) $(LIBS) -o $@

#
# Rule for building log file library test object
#
logfile-test.o: logfile-test.cpp
	@echo "building $@"
	@$(CC) $(CFLAGS) $(INCLUDE) -o $@ $<

#
# Rule for cleaning out generated files
#
clean:
	@rm -f *.o
	@rm -f $(TARGET)
