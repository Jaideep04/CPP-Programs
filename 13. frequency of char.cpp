#include<iostream>
using namespace std;
int main(){
    cout<<"enter size";
    int size;
    cin>> size;
    cout<<"enter word";
    char word[size];
    for(int i=0 ;i<size;i++){
        cin>>word[i];
    }
    char alphabet;
    cout<<"enter alphabet";
    cin>>alphabet;
    int count =0;
    for(int i=0;word[i]!='\0';++i){
        if(alphabet==word[i]){
            count++;
        }
    }
    cout<<"freq is "<<count;

    return 0;
}