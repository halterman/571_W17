#include <iostream>
#include <string>
#include "linkedlist.h"

void f1() {
    LinkedList<int> my_list;
    std::cout << my_list << '\n';
    my_list.insert(10);
    my_list.insert(20);
    my_list.insert(30);
    my_list.insert(40);
    my_list.insert(50);
    std::cout << my_list << '\n';
    std::cout << "---------------\n";
}

LinkedList<int> make_list(int n) {
    LinkedList<int> result;
    for (int i = 1; i <= n; i++)
        result.insert(i);
    return result;
}

int main() {
    //for (int i = 0; i < 10; i++) 
    //    f1();
    //std::cout << "=====================\n";

    LinkedList<int> lst1;
    lst1.insert(9);
    lst1.insert(8);
    lst1.insert(7);
    std::cout << lst1 << '\n';
    auto lst2 = lst1;
    std::cout << lst2 << '\n';

    LinkedList<int> lst3;
    lst3.insert(2);
    lst1.insert(4);
    std::cout << "Assigning #1\n";
    lst3 = lst1;
    std::cout << lst3 << '\n';

    std::cout << "Assigning #2\n";
    lst3 = make_list(5);
    make_list(5) = lst1;
    std::cout << lst3 << '\n';
}
