#include <iostream>
#include "intlist1.h"


IntList1::Node::Node(int data): data(data), next(nullptr) {
    std::cout << "Creating node " << data << ' '
              << reinterpret_cast<uintptr_t>(this) << '\n';
}

IntList1::Node::~Node() {
    std::cout << "Destroying node " << data << ' '
              << reinterpret_cast<uintptr_t>(this) << '\n';
}

IntList1::IntList1(): head(nullptr), tail(nullptr) {}

//IntList1::IntList1(const IntList1& other): 
//           head(other.head), tail(other.head) {}

IntList1::~IntList1() {
    auto cursor = head;
    while (cursor) {
        auto temp = cursor;
        cursor = cursor->next;
        delete temp;
    }
}

void IntList1::insert(int elem) {
    Node *new_node = new Node(elem);
    if (tail) {
        tail->next = new_node;
        tail = new_node;
    }
    else
        head = tail = new_node;
}

void IntList1::print() const {
    for (auto cursor = head; cursor; cursor = cursor->next)
        std::cout << cursor->data << ' ';
    std::cout << '\n';
}

