OPTS = -Wall

all:dow

dow: dayOfWeek.cpp
	g++ ${OPTS} -o dow dayOfWeek.cpp
