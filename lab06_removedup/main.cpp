// Read integers until end of input
// insert integers into the list

#include <assert.h>
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


    cout << "printing original list: \n";
    list.print();

    list.remove_duplicates();
    cout << "printing list after removing duplicates: \n";
    list.print();
}
