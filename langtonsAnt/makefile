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
SRCS = ant.cpp antBoard.cpp antMenu.cpp utils.cpp main.cpp

 #HEADERS
HEADERS = ant.hpp antBoard.hpp antMenu.hpp utils.hpp

 #OBJECTS
OBJS = ant.o antBoard.o antMenu.o utils.o main.o

 #DOCUMENTATION
DOCS = Design_Reflection.pdf

 #PROGRAMS
PROGS = langtonAnt

 #COMPRESSED FILE
TAR = cs162_assignment1_mathewmcdade.tar.bz2

# #####################################################
# #BUILD and TAR
# #####################################################

matrixDeterminant: ${OBJS} ${HEADERS}
	${CXX} ${CXXFLAGS} ${OBJS} -o langtonAnt

${OBJS}: ${SRCS}
	${CXX} ${CXXFLAGS} -c $(@:.o=.cpp)

tar:
	tar cvjf ${TAR} ${SRCS} ${HEADERS} ${DOCS} makefile

##################
#CLEAN
##################

clean:
	rm -f ${PROGS} *.o *~
