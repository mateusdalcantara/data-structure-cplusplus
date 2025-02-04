typedef int TypeItem;

struct Node //Node
{
    TypeItem value;
    Node* next;
};

class dynamicstack{
    private:
    Node* NodeTopStack;

    public:
    dynamicstack(); //construtor //dynamic stack
    ~dynamicstack(); //destrutor
    bool isempty();
    bool isfull(); 
    void insert(TypeItem item); //push
    TypeItem remove(); //pop
    void showme(); //print
};