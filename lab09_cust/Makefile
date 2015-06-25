test_cust: test_cust.o cust.o
	g++ -Wall -pedantic -o test_cust test_cust.o cust.o

test_cust.o: test_cust.cpp cust.h
	g++ -Wall -pedantic -std=c++11 -c test_cust.cpp

cust.o: cust.cpp cust.h
	g++ -Wall -pedantic -std=c++11 -c cust.cpp

clean:
	rm -f test_cust test_cust.o cust.o
