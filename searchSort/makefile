 #CXX and FLAGS
CXX = g++
CXXFLAGS = -std=c++0x
CXXFLAGS += -Wall
CXXFLAGS += -pedantic-errors
CXXFLAGS += -g

 #SOURCES
SRCS = *.cpp

 #HEADERS
HEADERS = *.hpp

 #OBJECTS
OBJS = *.o

 #DOCUMENTATION
DOCS = *.pdf *.txt

 #PROGRAMS
PROGS = searchSort

 #COMPRESSED FILE
TAR = cs162_Lab7_mathewmcdade.tar.bz2

# #####################################################
# #BUILD and TAR
# #####################################################

searchSort: ${OBJS} ${HEADERS}
	${CXX} ${CXXFLAGS} ${OBJS} -o searchSort

${OBJS}: ${SRCS}
	${CXX} ${CXXFLAGS} -c $(@:.o=.cpp)

tar:
	tar cvjf ${TAR} ${SRCS} ${HEADERS} ${DOCS} makefile

##################
#CLEAN
##################

clean:
	rm -f ${PROGS} ${DOCS} *.o *~
