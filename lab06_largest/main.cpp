// Read integers until end of input
// insert integers into the list

#include <iostream>
using namespace std;
#include "list.h"

int main()
{
    List list;
    int value;

    // read values and insert them into list
    while (cin >> value)
    {
      list.insert(value);
    }

    int largest;
    bool result = list.largest_value(largest);

    if (result == false)
    {
        cout << "empty list" << endl;
        return 1;
    }
    else
    {
        cout << "The largest value you entered is:  " <<  largest << endl;
    }
}

