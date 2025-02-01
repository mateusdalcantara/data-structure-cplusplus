#include <iostream>
#include "queue.h"

using namespace std;

queue::queue() // constructor
{
  first = 0;
  last = 0;
  structure = new TypeItem[max_itens];
}
queue::~queue() // destructor
{
  delete[] structure;
}
bool queue::isEmpty() // check if the queue is empty
{
  return (first == last);
}
bool queue::isFull() // check if the queue is full
{
  return ((last + 1) % max_itens == first);
}
void queue::insert(TypeItem item) // push //enqueue
{
  if (isFull())
  {
    cout << "The queue is full.\n";
    cout << "The element can't be insert.\n";
  }
  else
  {
    structure[last % max_itens] = item;
    last++;
  }
}
TypeItem queue::remove() // pop dequeue
{
  if (isEmpty())
  {
    cout << "The queue is empty!\n";
    cout << "No element removed.\n";
    return 0;
  }
  else
  {
    first++;
    return structure[(first - 1) % max_itens];
  }
}
void queue::showMe() //
{
  cout << "Queue: [ ";
  for (int i = first; i < last; i++)
  {
    cout << structure[i % max_itens] << " ";
  }
  cout << "]\n";
}