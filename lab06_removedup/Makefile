list: main.o list.o
	g++ -Wall -pedantic -g -o list main.o list.o

main.o: main.cpp list.h
	g++ -Wall -pedantic -g -std=c++11 -c main.cpp

list.o: list.cpp list.h
	g++ -Wall -pedantic -g -std=c++11 -c list.cpp

clean:
	rm -rf main.o list.o list list.exe
