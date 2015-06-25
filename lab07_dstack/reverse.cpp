#include <iostream>
using namespace std;
#include "dstack.h"

int main()
{
    double value;
    Dstack stack;

    // as long as there is input
    while (cin >> value)
      stack.push(value);
      
    cout << "There are " << stack.size() << " numbers in the stack." << endl;
    // as long as the stack is not empty, pop numbers and print them
    // pop return false if the pop failed
    while (stack.pop(value))
      cout << value << endl;
    cout << "There are " << stack.size() << " numbers in the stack." << endl;

    return 0;
}
