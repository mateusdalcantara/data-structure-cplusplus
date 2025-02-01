// main.cpp
#include <iostream>
#include "stack.h"

using namespace std;

int main()
{
    stack stack1;
    TypeItem item;
    int choose;

    cout << "Program to manage a stack:\n";

    do
    {
        cout << "Type 0 to stop the program.\n";
        cout << "Type 1 to insert the element.\n";
        cout << "Type 2 to remove the element.\n";
        cout << "Type 3 to see the elements on the stack.\n";
        cout << "Type 4 to see the stack size.\n";
        cout << "Type 5 to check if the stack is empty.\n";
        cout << "Type 6 to check if the stack is full.\n";
        cout << "Enter your choice: ";
        cin >> choose;

        if (choose == 1)
        {
            cout << "Enter the element to insert: ";
            cin >> item;
            stack1.insert(item);
        }
        else if (choose == 2)
        {
            item = stack1.remove();
            cout << "Element removed: " << item << endl;
        }
        else if (choose == 3)
        {
            stack1.showme();
        }
        else if (choose == 4)
        {
            cout << "Stack size: " << stack1.sizeis() << endl;
        }
        else if (choose == 5)
        {
            if (stack1.isempty())
                cout << "The stack is empty." << endl;
            else
                cout << "The stack is not empty." << endl;
        }
        else if (choose == 6)
        {
            if (stack1.isfull())
                cout << "The stack is full." << endl;
            else
                cout << "The stack is not full." << endl;
        }
        else if (choose != 0)
        {
            cout << "Invalid option. Please try again.\n";
        }

    } while (choose != 0);

    cout << "Exiting program...\n";
    return 0;
}
