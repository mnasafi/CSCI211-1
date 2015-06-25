// Read integers until end of input
// insert integers into the list

#include <iostream>
using namespace std;
#include "list.h"

int main()
{
    List list;
    int value;
    int target;

    // first number read is the target
    cin >> target;

    while (cin >> value)
    {
      list.insert(value);
    }

    // initialized to 100 to make sure List::compare() initializes them correctly
    int less_than = 100;
    int equal = 100;
    int greater_than = 100;
    list.compare(target, less_than, equal, greater_than);

    cout << "target = " << target << endl;
    cout << "less_than = " << less_than << endl;
    cout << "equal = " << equal << endl;
    cout << "greater_than = " << greater_than << endl;
}
