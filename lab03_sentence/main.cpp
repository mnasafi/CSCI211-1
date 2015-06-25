// main program to demonstrate the UNIX make utility
// This program uses class Sentence which is defined in file sentence.h

#include "sentence.h"  // include the class definition of class Sentence

int
main()
{
    
    // declare a new Sentence object and pass "What time is it?" to the 
    // constructor
    Sentence sentence("What time is it???");

    // Call class Sentence's member function print
    sentence.print();

    return 0; // everything executed ok
}
