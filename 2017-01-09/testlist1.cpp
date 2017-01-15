#include <iostream>
#include "intlist1.h"

void f() {
    IntList1 my_list;
    my_list.print();
    std::cout << "---------------\n";
    my_list.insert(10);
    my_list.insert(20);
    my_list.insert(30);
    my_list.insert(40);
    my_list.insert(50);
    my_list.print();
}

int main() {
    for (int i = 0; i < 10; i++) 
        f();
    std::cout << "=====================\n";

    IntList1 lst1;
    lst1.insert(9);
    lst1.insert(8);
    lst1.insert(7);
    lst1.print();
    auto lst2 = lst1;
    lst2.print();
}
