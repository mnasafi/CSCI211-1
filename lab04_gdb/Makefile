all: p1 p2 p3 p4 

p1: p1.cpp
	g++ -Wall -g -std=c++11 -o p1 p1.cpp

p2: p2.cpp
	g++ -Wall -g -std=c++11 -o p2 p2.cpp

p3: p3.cpp
	g++ -Wall -g -std=c++11 -o p3 p3.cpp

# this one does not have the -g on purpose
p4: p4.cpp
	g++ -Wall -std=c++11 -o p4 p4.cpp

clean:
	rm -f p1 p2 p3 p4 

