// linkedlist.h

#include <iostream>

template <typename T>
class LinkedList {
    struct Node {
        T data;
        Node *next;
        Node(T data): data(data), next(nullptr) {
            std::cout << "Creating node " << data << " ["
                      << reinterpret_cast<uintptr_t>(this) << "]\n";
        }
        ~Node() {
            std::cout << "Destroying node " << data << " ["
                      << reinterpret_cast<uintptr_t>(this) << "]\n";
        }
    };

    Node *head;
    Node *tail;

  public:
    LinkedList(): head(nullptr), tail(nullptr) {}

    // Copy constructor
    LinkedList(const LinkedList& other): LinkedList() {
        for (auto cursor = other.head; cursor; cursor = cursor->next) 
            insert(cursor->data);
    }

    ~LinkedList() {
        auto cursor = head;
        while (cursor) {
            auto temp = cursor;
            cursor = cursor->next;
            delete temp;
        }
    }

    LinkedList& operator=(const LinkedList& other) {
        //  TODO implement this
    }

    void insert(int elem) {
        Node *new_node = new Node(elem);
        if (tail) {
            tail->next = new_node;
            tail = new_node;
        }
        else
            head = tail = new_node;
    }
    template <typename T>
    friend std::ostream& operator<<(std::ostream& os, 
                                    const LinkedList<T>& list);
};

template <typename T>
std::ostream& operator<<(std::ostream& os, const LinkedList<T>& list) {
    os << '{';
    auto cursor = list.head;
    if (cursor) {
        os << cursor->data;
        cursor = cursor->next;
        while (cursor) {
            os << ", " << cursor->data;
            cursor = cursor->next;
        }
    }
    os << '}';
    return os;
}



//IntList1::IntList1(const IntList1& other): 
//           head(other.head), tail(other.head) {}


