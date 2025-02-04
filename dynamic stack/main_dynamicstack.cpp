#include <iostream>
#include "dynamicstack.h"

using namespace std;

int main()
{
  dynamicstack stack1;
  TypeItem item;
  int opt;
  cout << "Program that generates the dynamic stack.\n";

  do
  {
    cout << "Type 0 to stop the program.\n";
    cout << "Type 1 to insert element.\n";
    cout << "Type 2 to remove the element.\n";
    cout << "Type 3 to appear on the screan.\n";
    cout << "Type 4 to see if the stack is full.\n";
    cout << "Type 5 to see if the stack is empty.\n";
    cin >> opt;
    if (opt == 1)
    {
      cout << "Type the element to insert on the stack";
      cin >> item;
      stack1.insert(item);
    }
    else if (opt == 2)
    {
      cout << "Type the element to remove.";
      item = stack1.remove();
      cout << "Element removed" << item << endl;
    }
    else if (opt == 3)
    {
      stack1.showme();
    }
    else if (opt == 4)
    {
      if (stack1.isfull())
        cout << "The stack is full." << endl;
      else
        cout << "The stack is not full." << endl;
    }
     else if (opt == 5)
    {
      if (stack1.isempty())
        cout << "The stack is empty." << endl;
      else
        cout << "The stack is not empty." << endl;
    }

  } while (opt != 0);
  return 0;
};
