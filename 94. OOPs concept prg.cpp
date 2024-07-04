#include<iostream>
using namespace std;

class jai{ // 1. encapsulation 
    public:
       void get(int x){ // 2. polymorphism with fun overloading
        cout<<"This is a base function with integer parameter , {polymorphism}"<<endl;
        cout<<endl;
       }
       void get(double x){ // 2. polymorphism with fun overloading
        cout<<"This is a base function with double parameter , {polymorphism}"<<endl;
        cout<<endl;
       }
       virtual void display(){  
        cout<<"display funtion base class function called with base object "<<endl;
        cout<<endl;
       }
};
class paras:public jai{ // 3. inheritence 
    public:
       void ddisplay(){
        cout<<"derived class {paras} from base class {jai} , {inheritance}"<<endl;
        cout<<endl;
       }
       void display(){// 4. abstraction
        cout<<"display function of derived class called with base class pointer, {abstraction}"<<endl;
        cout<<endl;
       }
};
int main() {
    cout<<"class jai and class paras is example of {encapsulation}"<<endl;
    cout<<endl;
    jai *jptr;
    jai j;
    paras p;
    j.get(5);
    j.get(6.7);
    j.display();
    p.ddisplay();
    jptr=&p;
    jptr->display();
    return 0;
}