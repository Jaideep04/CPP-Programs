#include<iostream>
using namespace std;

class wall{
    private: 
      int lenght;
      int height;

    public:
      wall( int l , int h){
        lenght =l;
        height=h;
      }
      int area(){
          return lenght*height;
      }
};

int main(){
    wall wall1(6,4);
    wall wall2(8,6);

    cout<<"a1="<<wall1.area()<<endl;
    cout<<"a2="<<wall2.area()<<endl;

    return 0;
}