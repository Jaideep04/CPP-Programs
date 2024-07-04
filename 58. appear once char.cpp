#include<iostream>
using namespace std;
int main(){
    char str[5];
    cout<<"entert string";
    for(int i=0;i<5;i++){
        cin>>str[i];
    }
    int freq[5]={0};
    int i;
    for(i=0; str[i]!='\0';i++){
        freq[str[i]]++;
    }
    cout<<"which appera once :";
    for(int i=0;i<5;i++){
        if(freq[str[i]]==1){
            cout<<str[i]<<" ";
        }
    }
    return 0;
}