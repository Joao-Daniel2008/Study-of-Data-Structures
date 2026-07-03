typedef int type;
const int max_lenght = 10;

class stack{
    private:
    int lenght;
    type* structure;

    public:

    stack(); //constructor
    ~stack(); //destructor

    bool isfull(); //check if the stack is full
    bool isempty(); //check if the stack is empty

    void push(type item); //push an item to the stack
    type pop(); //remove the last item on the stack

    void print(); //print the elements in the stack

};