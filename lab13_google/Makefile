google: google.o 
	g++ -Wall -pedantic -g -o google google.o

google.o: google.cpp location.h
	g++ -Wall -pedantic -g -std=c++11 -c google.cpp

clean:
	rm -f google google.exe google.o
