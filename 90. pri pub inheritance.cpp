#include <iostream>
using namespace std;

class Base {
public:
    int publicData;
    Base() : publicData(42) {
        cout << "Base class constructor" << endl;
    }

    void PublicMethod() {
        cout << "Base class public method" << endl;
    }

protected:
    int protectedData;
    void ProtectedMethod() {
        cout << "Base class protected method" << endl;
    }
};

// Public Inheritance
class PublicDerived : public Base {
public:
    PublicDerived() {
        cout << "PublicDerived class constructor" << endl;
        cout << "Accessing publicData from Base: " << publicData << endl;
        PublicMethod();
        // You can access protected members of Base within PublicDerived
        protectedData = 10;
        ProtectedMethod();
    }
};

// Protected Inheritance
class ProtectedDerived : protected Base {
public:
    ProtectedDerived() {
        cout << "ProtectedDerived class constructor" << endl;
        // You can't access publicData from Base directly in ProtectedDerived
        // publicData = 20; // This would be an error
        // You can access protected members of Base within ProtectedDerived
        protectedData = 30;
        ProtectedMethod();
    }
};

int main() {
    cout << "Public Inheritance" << endl;
    PublicDerived publicObj;
    cout << endl;

    cout << "Protected Inheritance" << endl;
    ProtectedDerived protectedObj;
    
    // You can't access Base's members directly from here in the case of protected inheritance
    // publicObj.publicData = 50; // This would be an error

    return 0;
}
