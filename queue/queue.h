//to compiler the code need to put on terminal the command below:
// g++ main_queue.cpp queue.cpp -o Queue.exe

typedef int TypeItem;
const int max_itens = 100;

class queue
{
private:
  int first, last;
  TypeItem *structure; //vector who contains the structure.

public:
  queue();                    // constructor
  ~queue();                   // destructor
  bool isEmpty();             // check if the queue is empty
  bool isFull();              // check if the queue is full
  void insert(TypeItem item); // push //enqueue
  TypeItem remove();          // pop dequeue
  void showMe();              //
};