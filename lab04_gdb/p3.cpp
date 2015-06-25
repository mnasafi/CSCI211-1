#include <iostream>
using namespace std;

// Normally the class declaration (class Linked_list) is put into a 
// separtate file (.h) from the class implementation (the functions)
// Everything is in one file so it is easier to learn about gdb/ddd

class Linked_list
{
    public:
        void insert(int i);
        void print();
        Linked_list() {m_head = (Node *) 1;}
    private:
        class Node
        {
            public:
                Node(int value, Node *next) {m_value = value; m_next = next;}
                int m_value;
                Node *m_next;
        };
        Node *m_head;
};


void
Linked_list::insert(int i)
{
    m_head = new Node(i, m_head);
}

void
Linked_list::print()
{
    for (Node *cur = m_head; cur != 0; cur = cur->m_next)
    {
        cout << cur->m_value << endl;
    }
}

int 
main()
{
    Linked_list list;

    list.insert(1);
    list.insert(2);
    list.insert(3);

    list.print();

    return 0;
}
