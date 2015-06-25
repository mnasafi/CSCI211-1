// Fill in the functions at the bottom of this file
// 
#include <iostream>
using namespace std;
#include "list.h"

// on some machines member variables are not automatically initialized to 0
List::List()
{
    m_head = NULL;
    m_length = 0;
}

// delete all Nodes in the list
// since they are dynamically allocated using new, they won't go away
// automatically when the list is deleted
// Rule of thumb: destructor deletes all memory created by member functions
List::~List()
{
    while (m_head)
    {
        Node *tmp = m_head;
        m_head = m_head->m_next;
        delete tmp;
    }
}

// always insert at the front of the list
// Note: this works even in the SPECIAL CASE that the list is empty
void List::insert(int value)
{
    if (!m_head || value < m_head->m_value)
    {
      m_head = new Node(value, m_head);
    }
    else
    {
      Node *ptr = m_head;
      while (ptr->m_next != NULL && value > ptr->m_next->m_value)
      {
        ptr = ptr->m_next;
      }
      ptr->m_next = new Node(value, ptr->m_next);
    }
    m_length++;
}

// iterate through all the Nodes in the list and print each Node
void List::print()
{
    for (Node *ptr = m_head; ptr; ptr = ptr->m_next)
    {
        cout << ptr->m_value << endl; 
    }
}

void List::remove_duplicates()
{
    // put your code here
}
