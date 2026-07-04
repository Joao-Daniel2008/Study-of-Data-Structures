typedef int type;
const int max_lenght = 10;

class queue{
    private:
    int last;
    int first;
    type* structure;

    public:

    queue();
    ~queue();

    bool isfull();
    bool isempty();

    void push(type item);
    type pop();

    void print();

};