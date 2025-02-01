#include <iostream>
#include "queue.h"

using namespace std;

int main()
{
    queue queue1;
    int opt;
    TypeItem item;
    cout << "Program to manage a queue:\n";

    do
    {
        cout << "\nMenu:\n";
        cout << "Type 0 to stop the program.\n";
        cout << "Type 1 to insert an element.\n";
        cout << "Type 2 to remove an element.\n";
        cout << "Type 3 to display the queue.\n";
        cout << "Type 4 to check if the queue is full.\n";
        cout << "Type 5 to check if the queue is empty.\n";
        cout << "Enter your option: ";
        cin >> opt;

        if (opt == 1)
        {
            cout << "Enter the element to insert into the queue: ";
            cin >> item;
            queue1.insert(item);
            cout << "Element added to the queue.\n";
        }
        else if (opt == 2)
        {
            item = queue1.remove();
            if (item == TypeItem())  // Verifique se o item removido foi o valor padrão (indicando erro)
            {
                cout << "No element removed, the queue is empty.\n";
            }
            else
            {
                cout << "Element removed: " << item << endl;
            }
        }
        else if (opt == 3)
        {
            queue1.showMe();
        }
        else if (opt == 4)
        {
            if (queue1.isFull())
            {
                cout << "The queue is full.\n";
            }
            else
            {
                cout << "The queue is not full.\n";
            }
        }
        else if (opt == 5)
        {
            if (queue1.isEmpty())
            {
                cout << "The queue is empty.\n";
            }
            else
            {
                cout << "The queue is not empty.\n";
            }
        }
        else if (opt != 0)
        {
            cout << "Invalid option. Please try again.\n";
        }

    } while (opt != 0);

    cout << "Exiting program...\n";
    return 0;
}
