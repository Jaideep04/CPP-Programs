#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"enter year"<<endl;
    cin>>year;
    if(year%400==0){
        cout<<"leap year"<<endl;
    }
    else if(year%4==0){
        cout<<"leap year"<<endl;
    }
    else if(year%100==0){
        cout<<" not leap year"<<endl;
    }
    else{
        cout<<" not leap year"<<endl;
    }
    return 0;
}