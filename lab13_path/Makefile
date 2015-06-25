path: path.o 
	g++ -Wall -pedantic -g -o path path.o

path.o: path.cpp location.h
	g++ -Wall -pedantic -g -std=c++11 -c path.cpp

clean:
	rm -f path path.exe path.o
