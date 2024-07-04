#include<iostream>
using namespace std ;
class G{
    public:
      virtual void display(){
        cout<<"virtual base class"<<endl;
      }
      void print(){
        cout<<"print function"<<endl;
      }
};
class C:public G{
    public:
      void display(){
        cout<<"display function"<<endl;
      }
      void print(){
        cout<<"C print function"<<endl;
      }
};
int main(){
    G* base;
    C child;
    base=&child;
    base-> G :: display();
    base -> print();
}