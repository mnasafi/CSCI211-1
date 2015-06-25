// Linked-List of Integers

#ifndef LIST_H
#define LIST_H

class List
{
    public:
        List();
        ~List();
        void insert(int value); // insert at beginning of list
        void print(); // print all values in the list
        bool largest_value(int &largest);

    private:
        class Node
        {
            public:
                Node(int value, Node *next)
                {m_value = value; m_next = next;}
                int m_value;
                Node *m_next;
        };
        Node *m_head;
};

#endif
