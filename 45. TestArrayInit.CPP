#include<iostream>
using namespace std ;
int  main(){
    int const size =5;
    int a1[size];
    for(int i=0;i<size;i++){
        cout<<a1[i]<<" "<<endl;
    }
    int a2[size]={21,22,23,24,25};
    for(int i=0; i<size; i++){
        cout<<a2[i]<<" "<<endl;
    }
    int a3[]={31,32,33,34,35};
    int a3size=sizeof(a3)/sizeof(int);
    cout<<"size is"<<a3size<<endl;
    for(int i=0;i<a3size;i++){
        cout<<a3[i]<<" "<<endl;
    }
    int a4[size]={41,42};
    for(int i=0; i<size;i++){
        cout<<a4[i]<<" "<<endl;
    }
}