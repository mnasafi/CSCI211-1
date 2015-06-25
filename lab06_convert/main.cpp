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

    int size;
    int *values = list.convert_to_array(size);

    if (values == NULL)
    {
        cout << "empty list" << endl;
    }
    else
    {
        assert(size > 0);
        for (int i = 0; i < size; i++)
        {
            cout << values[i] << endl;
        }
    }
    return 0;
}

