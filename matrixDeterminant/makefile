#####################################################
# Student: Mathew McDade
# # File: Makefile
# # Description: CS 162 Lab 1 makefile
# # Date: Thu Sep 29 16:01:26 PDT 2016
# #####################################################

 #CXX and FLAGS
CXX = g++
CXXFLAGS = -std=c++0x
CXXFLAGS += -Wall
CXXFLAGS += -pedantic-errors

 #SOURCES
SRCS = readMatrix.cpp determinant.cpp main.cpp

 #HEADERS
HEADERS = readMatrix.hpp determinant.hpp

 #OBJECTS
OBJS = readMatrix.o determinant.o main.o

 #DOCUMENTATION
DOC =

 #PROGRAMS
PROGS = matrixDeterminant

 #COMPRESSED FILE
TAR = cs162_lab1_mathewmcdade.tar.bz2

# #####################################################
# #BUILD and TAR
# #####################################################

matrixDeterminant: ${OBJS} ${HEADERS}
	${CXX} ${CXXFLAGS} ${SRCS} -o matrixDeterminant

${OBJS}: ${SRCS}
	${CXX} ${CXXFLAGS} -c $(@:.o=.cpp)

tar:
	tar cvjf ${TAR} ${SRCS} ${HEADERS} makefile

##################
#CLEAN
##################

clean:
	rm -f ${PROGS} *.o *~
