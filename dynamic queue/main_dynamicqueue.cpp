#include <iostream>
#include "dynamicqueue.h"
using namespace std;

int main()
{
    dynamicqueue queue1;
    int opt;
    TypeItem item;
    cout << "Program that generates the queue:\n";

    do
    {
        cout << "Type 0 to stop the program!\n";
        cout << "Type 1 to insert an element!\n";
        cout << "Type 2 to remove an element!\n";
        cout << "Type 3 to appear on screen the queue!\n";
        cout << "Type 4 to verify if the queue is full!\n";
        cout << "Type 5 to verify if the queue is empty!\n";
        cin >> opt;

        if (opt == 1)
        {
            cout << "Type the element to insert on the final queue!\n";
            cin >> item;
            queue1.insert(item);
        }
        else if (opt == 2)
        {
            item = queue1.remove();
            cout << "The element removed is: " << item << endl;
        }
        else if (opt == 3)
        {
            queue1.showme();
        }
        else if (opt == 4)
        {
            if (queue1.isfull())
            {
                cout << "The queue is full!\n";
            }
            else
            {
                cout << "The queue is not full!\n";
            }
        }
        else if (opt == 5)
        {
            if (queue1.isempty())
            {
                cout << "The queue is empty!\n";
            }
            else
            {
                cout << "The queue isn't empty!\n";
            }
        }
    } while (opt != 0); 

    return 0;
}
