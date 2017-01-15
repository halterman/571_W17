#include <iostream> 

class Widget {
  public:
    int data;
    //Widget(int data): data(data) {}
    Widget() = delete;
};

int main() {
    Widget w1;  //(3);
    std::cout << w1.data << '\n';
}
