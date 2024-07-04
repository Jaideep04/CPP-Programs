#include<iostream>
using namespace std;
int factorial(int n);
int main(){
    int n,result;
    cout<<"enter a number";
    cin>>n;
    result=factorial(n);
    cout<<"factorial is "<<result;
    return 0;
}
int factorial(int n){
    if(n>1){
        return n*factorial(n-1);
    }
    else{
        return 1;
    }
}