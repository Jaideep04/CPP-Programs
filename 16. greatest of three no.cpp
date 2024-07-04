#include<iostream>
using namespace std;
int main(){
    double n1,n2,n3;
    cout<<"enter no"<<endl;
    cin>>n1>>n2>>n3;
    if(n1>=n2 && n1>=n3){
        cout<<n1<<" is largest"<<endl;
    }
    else if(n2>=n1 && n2>=n3){
        cout<<n2<<"is largest"<<endl;
    }
    else{
        cout<<n3<<" is largest"<<endl;
    }
    return 0;
}