#include "pqueue.h"
#include "cust.h"
#include <iostream>
using namespace std;

int main()
{
  Pqueue q;

  // the integer after new Cust(...) is the priority for this customer
  q.enqueue(new Cust("One", true, 1, 1),1);
  q.enqueue(new Cust("Two", false, 2, 2),2);
  q.enqueue(new Cust("Three", true, 3, 3),3);
  q.enqueue(new Cust("Four", false, 4, 4),4);

  cout << "removing and printing all elements on the priority queue" << endl;
  cout << "should be ordered One, Two, Three, Four" << endl;
  while (q.empty() == false)
  {
    Cust *cust = q.dequeue();
    cust->print(cout);
  }

  q.enqueue(new Cust("Three", true, 3, 3),3);
  q.enqueue(new Cust("One", true, 1, 1),1);
  q.enqueue(new Cust("Four", false, 4, 4),4);
  q.enqueue(new Cust("Two", false, 2, 2),2);

  cout << endl;
  cout << "removing and printing all elements on the priority queue" << endl;
  cout << "should be ordered One, Two, Three, Four" << endl;
  while (q.empty() == false)
  {
    Cust *cust = q.dequeue();
    cust->print(cout);
  }

  q.enqueue(new Cust("Four", false, 4, 4),4);
  q.enqueue(new Cust("Three", true, 3, 3),3);
  q.enqueue(new Cust("Two", false, 2, 2),2);
  q.enqueue(new Cust("One", true, 1, 1),1);


  cout << endl;
  cout << "removing and printing all elements on the priority queue" << endl;
  cout << "should be ordered One, Two, Three, Four" << endl;
  while (q.empty() == false)
  {
    Cust *cust = q.dequeue();
    cust->print(cout);
  }

  q.enqueue(new Cust("One", true, 1, 1),42);
  q.enqueue(new Cust("Two", false, 2, 2),42);
  q.enqueue(new Cust("Three", true, 3, 3),42);
  q.enqueue(new Cust("Four", false, 4, 4),42);

  cout << endl;
  cout << "removing and printing all elements on the priority queue" << endl;
  cout << "should be ordered One, Two, Three, Four" << endl;
  while (q.empty() == false)
  {
    Cust *cust = q.dequeue();
    cust->print(cout);
  }

  return 0;
}
