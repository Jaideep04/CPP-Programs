#include<iostream>
using namespace std;
int factorial(int n){
    int fact=1;
    for(int i=2;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}

int factorial(int n);
int main(){
    int n1;
    cin>>n1;
    int fact1=factorial(n1);

    cout<<fact1<<endl;
}