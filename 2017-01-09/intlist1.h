// intlist1.h

class IntList1 {
    struct Node {
        int data;
        Node *next;
        Node(int data);
        ~Node();
    };

    Node *head;
    Node *tail;

  public:
    IntList1();
    //IntList1(const IntList1& other);
    ~IntList1();
    void insert(int elem);
    void print() const;

};
