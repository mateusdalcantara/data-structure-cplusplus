#include <iostream>
#include "stack.h"

using namespace std;

stack::stack() // Constructor
{
    size = 0;
    structure = new TypeItem[max_itens];
}

stack::~stack() // Destructor
{
    delete[] structure;
}

bool stack::isfull() // Check if the stack is full
{
    return (size == max_itens);
}

bool stack::isempty() // Check if the stack is empty
{
    return (size == 0);
}

void stack::insert(TypeItem item) // Push
{
    if (isfull())
    {
        cout << "The stack is full!\n";
        cout << "It is not possible to insert more elements.\n";
    }
    else
    {
        structure[size] = item;
        size++;
    }
}

TypeItem stack::remove() // Pop
{
    if (isempty())
    {
        cout << "The stack is empty!\n";
        cout << "There is nothing to remove.\n";
        return 0;  // Return a default value in case of empty stack
    }
    else
    {
        size--;  // Decrement size first
        return structure[size];  // Return the item after decrementing size
    }
}

void stack::showme() // Display elements in the stack
{
    cout << "Stack: [ ";
    for (int i = 0; i < size; i++)
    {
        cout << structure[i] << " ";
    }
    cout << "]\n";
}

int stack::sizeis() // Return the size of the stack
{
    return size;
}