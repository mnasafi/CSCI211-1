# makefile for 211 lab3 schedule exercise

schedule: schedule.o course.o
	g++ -Wall -pedantic -std=c++11 -o schedule schedule.o course.o

schedule.o: schedule.cpp course.h
	g++ -Wall -pedantic -std=c++11 -c schedule.cpp

course.o: course.cpp course.h
	g++ -Wall -pedantic -std=c++11 -c course.cpp

clean:
	rm -f schedule schedule.o course.o
