#include <iostream>
using namespace std;

class Base1 {
public:
    Base1(int val1) {
        cout << "Base1 constructor called with " << val1 << endl;
    }
};

class Base2 {
public:
    Base2(int val2) {
        cout << "Base2 constructor called with " << val2 << endl;
    }
};

class Derived : public Base1, public Base2 {
public:
    // Pass arguments to the base class constructors
    Derived(int val1, int val2) : Base1(val1), Base2(val2) {
        cout << "Derived constructor" << endl;
    }
};

int main() {
    Derived derived(42, 24);

    return 0;
}
