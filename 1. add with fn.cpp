#include<iostream>
using namespace std;
int add(int a , int b){
   int sum=a+b;

return sum;
}

int add(int a, int b);
int main(){
    int x;
    int y;
    cin>>x>>y;
    int addition=add(x,y);
    cout<<addition<<endl;
}