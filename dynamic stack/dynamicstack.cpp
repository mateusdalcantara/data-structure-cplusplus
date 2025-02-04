#include <iostream>
#include "dynamicstack.h"
#include <cstddef> //biblioteca que indica que o topo e´ null

using namespace std;

// Class methods

dynamicstack::dynamicstack() // constructor
{
  NodeTopStack = NULL;
};
dynamicstack::~dynamicstack() // destructor
{
  Node* NodeTemp;
  while (NodeTemp != NULL)
  {
    NodeTemp = NodeTopStack;
    NodeTopStack = NodeTopStack->next;
    delete NodeTemp;
  }
};
bool dynamicstack::isempty() // isempty
{
  return (NodeTopStack == NULL);
};
// Check if the stack is full (memory allocation check)
bool dynamicstack::isfull()
{
  Node* NewNode;
  try
  {
    NewNode = new Node; // Try to allocate memory for a new node
    delete NewNode;     // Immediately delete it
    return false;       // If allocation succeeds, the stack is not full
  }
  catch (bad_alloc exception)
  {
    return true; // If allocation fails, the stack is full
  }
}
void dynamicstack::insert(TypeItem item) // push
{
  if (isfull())
  {
    cout << "The stack is full. Can't insert new elements.\n";
  }
  else
  {
    Node* NewNode = new Node;
    NewNode->value = item; // when you referer to the structure use arrow -> class is dot.
    NewNode->next = NodeTopStack;
    NodeTopStack = NewNode;
  }
};
TypeItem dynamicstack::remove() // pop
{
  if (isempty())
  {
    cout << "The stack is empty! Can't remove element.\n";
    return 0;
  }
  else
  {
    Node* NodeTemp;
    NodeTemp = NodeTopStack;
    TypeItem item = NodeTopStack->value;
    NodeTopStack = NodeTopStack->next;
    delete NodeTemp;
    return item;
  }
};
void dynamicstack::showme()
{

  Node* NodeTemp = NodeTopStack;
  cout << "Pilha: [";
  while (NodeTemp != NULL)
  {
    cout << NodeTemp->value << " ";
    NodeTemp = NodeTemp->next;
  }
  cout << "]\n";
};