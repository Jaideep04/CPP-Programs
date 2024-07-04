#include<iostream>
using namespace std;

class Base {
public:
    int x;
    Base() {
        cout<<"base default const."<<endl;
    }
    Base(int x){
        this->x=x;
        cout<<"base para const."<<endl;
    }
};

class Derived1 : public Base { // single
public:
    int y;
    Derived1(){
        cout<<"Derived1 default const."<<endl;
    }
    Derived1(int y){
        this->y=y;
        cout<<"Derived1 para const."<<endl;
    }
};

class Derived2 : public Base { // hierarchy with base
    public:
    int z;
    Derived2(){
        cout<<"Derived2 default const."<<endl;
    }
    Derived2(int z){
        this->z=z;
        cout<<"Derived2 para const."<<endl;
    }
};

class Derived3 : public Derived1 { // multilevel
    public:
    int a;
    Derived3(){
        cout<<"Derived3 default const."<<endl;
    }
    Derived3(int a){
        this->a=a;
        cout<<"Derived3 para const."<<endl;
    }
};

class Derived4 : public Derived1 , public Derived2{ // multiple
    public:
    int b;
    Derived4(){
        cout<<"Derived4 default const."<<endl;
    }
    Derived4(int b){
        this->b=b;
        cout<<"Derived4 para const."<<endl;
    }
};

int main(){
    cout<<"single level"<<endl;
    Derived1 d1,d2(5); 
    cout<<endl;
    cout<<"hierarchy with single level"<<endl;
    Derived2 d3,d4(6);
    cout<<endl;
    cout<<"multilevel"<<endl;
    Derived3 d5,d6(7);
    cout<<endl;
    cout<<"multiple"<<endl;
    Derived4 d7,d8(8);
    return 0;
}
