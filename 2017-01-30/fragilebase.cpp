#include <iostream>

class Base {
    int counter;
public:
    Base() : counter(0) {}
    virtual void inc1() {
        //counter++;
        inc2();
    }
    virtual void inc2() {
        counter++;
    }
    int get() const {
        return counter;
    }
};

class Derived: public Base {
public:
    void inc2() override {
        inc1();
    }
};

int main() {
    Derived d;
    std::cout << d.get() << '\n';
    d.inc1();
    std::cout << d.get() << '\n';
    d.inc1();
    std::cout << d.get() << '\n';
    d.inc2();
    std::cout << d.get() << '\n';
}
