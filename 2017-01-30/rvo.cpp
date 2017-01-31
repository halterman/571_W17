#include <iostream>

struct Widget {
    Widget() {
        std::cout << "Default ctor" << '\n'; 
    }
    Widget(const Widget&) { 
        std::cout << "Copy ctor" << '\n'; 
    }
};

Widget make_widget() {
    Widget w;
    return w;
}

int main() {
    std::cout << "Program begin" << '\n';
    Widget wid = make_widget();
    std::cout << "Program end" << '\n';
}

