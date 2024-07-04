#include <iostream>
using namespace std;

class Base {
public:
    virtual void display() {
        cout << "Base class display()" << endl;
    }
};

class Derived : public Base {
public:
    void display() {
        cout << "Derived class display()" << endl;
    }
};

int main() {
    Derived derivedObj;
    Base* basePtr = &derivedObj;

    basePtr->display(); // Calls the derived class version due to virtual keyword

    return 0;
}
