#include<iostream>
using namespace std;
class p{
    public:
      void func(int x){
        cout<<x<<endl;
      }
      void func(double x){
        cout<<x<<endl;
      }
      void func(int x,int y){
        cout<<x<<","<<y<<endl;
      }
};
int main(){
    p j;
    j.func(7);
    j.func(2.4);
    j.func(5,6);

    return 0;
}