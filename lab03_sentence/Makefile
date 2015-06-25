# simple makefile 

# This rule tells make how to "make" the executable sentence
main: main.o sentence.o
	g++ -Wall -pedantic -g -o main main.o sentence.o

# This rule tells make how to "make" the object file main.o 
main.o: main.cpp sentence.h
	g++ -Wall -pedantic -g -std=c++11 -c main.cpp

# This rule tells make how to "make" the object file sentence.o
sentence.o: sentence.cpp sentence.h
	g++ -Wall -pedantic -g -std=c++11 -c sentence.cpp


# This rule tells make what to delete when the user types "make clean"
# BE VERY CAREFUL to only put generated files here
clean:
	rm -f main main.o sentence.o
