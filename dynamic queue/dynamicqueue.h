typedef int TypeItem;

class Node {
public:
    TypeItem value;
    Node* next;
};

class dynamicqueue {
private:
    Node* first;
    Node* last;

public:
    dynamicqueue();  // constructor
    ~dynamicqueue(); // destructor
    bool isempty();
    bool isfull();
    void insert(TypeItem item); // enqueue / push
    TypeItem remove(); // dequeue / pop
    void showme(); // print
};