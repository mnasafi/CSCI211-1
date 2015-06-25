# Makefile for 211 assignment
# 
# If this file is in the directory with your program, you can compile your
# program using the following command:
#
#   $ make
#
# When you are done with this assignment, delete all the files generated
# by the compiler (you can always recreate them if you need them)
#
#   $ make clean
#
# It is a good idea to understand how make works
#
# Commands all have the following format:
#    file_to_be_created: list_of_files_the_file_to_left_is_create_from
#    <tab>the command that generates this file
#
# Compiler options
#    the arguments after g++ specify specific options for the compiler
#    -Wall        ==> print all warnings
#    -pedantic    ==> print warnings when non-standard C++ is used
#    -g           ==> keep additional information to aid in debugging
#    -o           ==> specify the output filename
#    -c           ==> compile only (create a .o file)
#    -std=c++11   ==> use the C++11 standard

shapes: main.o shape.o grid.o triangle.o square.o circle.o point.o
	g++ -Wall -pedantic -g -std=c++11 -o shapes main.o shape.o grid.o triangle.o square.o circle.o point.o

grid_test: grid_test.o grid.o
	g++ -Wall -pedantic -g -std=c++11 -o grid_test grid_test.o grid.o

grid_test.o: grid_test.cpp grid.h 
	g++ -Wall -pedantic -g -std=c++11 -c grid_test.cpp

main.o: main.cpp shape.h grid.h triangle.h square.h circle.h point.h
	g++ -Wall -pedantic -g -std=c++11 -c main.cpp

shape.o: shape.cpp shape.h grid.h
	g++ -Wall -pedantic -g -std=c++11 -c shape.cpp

grid.o: grid.cpp grid.h
	g++ -Wall -pedantic -g -std=c++11 -c grid.cpp

triangle.o: triangle.cpp triangle.h shape.h grid.h
	g++ -Wall -pedantic -g -std=c++11 -c triangle.cpp

square.o: square.cpp square.h shape.h grid.h
	g++ -Wall -pedantic -g -std=c++11 -c square.cpp

circle.o: circle.cpp circle.h shape.h grid.h
	g++ -Wall -pedantic -g -std=c++11 -c circle.cpp

point.o: point.cpp point.h shape.h grid.h
	g++ -Wall -pedantic -g -std=c++11 -c point.cpp

clean:
	rm -f shapes shapes.exe main.o shape.o grid.o triangle.o square.o circle.o point.o
