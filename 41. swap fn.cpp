#include<iostream>
using namespace std;

void swp(int a , int b){
    int c=a;
    a=b;
    c=b;
}


int main(){
    int x;
    int y;
    cin>>x>>y;
    

    swp(x,y);

    cout<<x<<","<<y<<endl;

}