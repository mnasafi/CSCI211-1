#include <iostream>
using namespace std;
#include "list.h"

int main()
{
    // instantiate a List class (the constructor takes NO arguments)
    List list;

    // NOTE:
    // List list();  is incorrect, when there are no arguments don't use ()

    // insert numbers into the list
    list.print();
    list.insert(1);
    list.print();
    list.insert(2);
    list.print();
    list.insert(3);
    list.print();

    return 0;
}
