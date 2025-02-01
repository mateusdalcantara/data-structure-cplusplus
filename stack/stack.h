typedef int TypeItem; // turn the code easy to manipulate the type, e.g int -> float.
const int max_itens = 100;

class stack
{
private:
  int size;
  TypeItem *structure;        // * = new
  

public:
  stack();                    // constructor
  ~stack();                   // destructor
  bool isfull();              // check if the stack is full
  bool isempty();             // check if the stack is full
  void insert(TypeItem item); // push
  TypeItem remove();          // pop
  void showme();              // appear on the terminal the stack
  int sizeis();               // lenght
};