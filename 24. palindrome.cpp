#include<iostream>
using namespace std;
int main(){
    int n,num,digit,rev=0;
    cout<<"enter no "<<endl;
    cin>>num;
    n=num;
    do{
        digit=num%10;
        rev=(rev*10)+digit;
        num=num/10;
    }
    while(num!=0);{
        cout<<"reverse is"<<rev<<endl;
    }
    if(n==rev){
        cout<<"palindrome"<<endl;
    }
    else{
        cout<<"not palindrome"<<endl;
    }
    return 0;
}