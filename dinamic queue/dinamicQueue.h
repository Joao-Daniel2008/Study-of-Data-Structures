typedef int type;

struct node{
    type value;
    node* next;
};

class queue{
    private:

    node* firstNode;
    node* lastNode;

    public:

    queue();
    ~queue();

    bool isfull();
    bool isempty();

    void push(type item);
    type pop();

    void print();

};