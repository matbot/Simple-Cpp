#######################################################
# Student: Mathew McDade
# # File: Makefile
# # Description: CS 162 Assignment 1 makefile
# # Date: Sun Oct  9 12:05:48 PDT 2016
# #####################################################

 #CXX and FLAGS
CXX = g++
CXXFLAGS = -std=c++0x
CXXFLAGS += -Wall
CXXFLAGS += -pedantic-errors

 #SOURCES
SRCS = *.cpp

 #HEADERS
HEADERS = *.hpp

 #OBJECTS
OBJS = *.o

 #DOCUMENTATION
DOCS = *.pdf

 #PROGRAMS
PROGS = prog

 #COMPRESSED FILE
TAR = prog.tar.bz2

# #####################################################
# #BUILD and TAR
# #####################################################

prog: ${OBJS} ${HEADERS}
	${CXX} ${CXXFLAGS} ${OBJS} -o ${PROGS}

${OBJS}: ${SRCS}
	${CXX} ${CXXFLAGS} -c $(@:.o=.cpp)

tar:
	tar cvjf ${TAR} ${SRCS} ${HEADERS} ${DOCS} makefile

##################
#CLEAN
##################

clean:
	rm -f ${PROGS} *.o *~
