#include<iostream>
using namespace std;
int main(){
    char msg[256];
    cout<<"enter a message"<<endl;
    cin.getline(msg,256);
    cout<<msg<<endl;

    for(int i=0;msg[i]!='\0';i++){
        cout<<msg[i];
    }
    cout<<endl;
    return 0;
}