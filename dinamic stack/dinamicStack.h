typedef int type;

struct node{
    type value;
    node* next;
};


class stack{
    private:

    node* topNode;

    public:

    stack();
    ~stack();

    bool isfull();
    bool isempty();

    void push(type item);
    type pop();

    void print();

};