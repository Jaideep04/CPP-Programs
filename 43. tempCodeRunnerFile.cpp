#include<iostream>
using namespace std;
int main(){
    char s[40];
    int i;
    cout<<"enter sentence"<<endl;
    cin.getline(s,40); 
    int count=0;
    for(int i=0;s[i]!='\0';i++){
        if(s[i]==' '){
            count[s[i]]++;
        }
    }    
    cout<<"freq  of word is "<<count[s[i]];

    return 0;
}