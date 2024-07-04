#include<iostream>
using namespace std;

int swp(int a , int b){
    int temp;
     a=temp;
    temp=b;
    
    return a||b;
}


int main(){
    int x;
    int y;
    cin>>x>>y;
    

    swp(x,y);

    cout<<x<<","<<y<<endl;

}