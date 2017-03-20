#include <iostream>
#include <string>

class Person {
    std::string name;
public:
    Person(const std::string& name): name(name) {}
    virtual std::string get() const { return name; }
};

class Student: public Person {
public:
    Student(const std::string& name): Person(name) {}
    std::string get() const override { 
        return "Student: " + Person::get(); 
    }
};


int main() {
    Person guy("Joe");
    std::cout << guy.get() << '\n';
    Student gal("Jo");
    std::cout << gal.get() << '\n';
}
