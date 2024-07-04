#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char str[]="7856239";

    int i=0;
    while(i<=9){
        bool flag=false;

        for(int j=0;j<strlen(str);j=j+1){
            if(int(str[j]-'0')==i){
                i=i+1;
                flag=true;
            }
        }

        if(flag==false){
            cout<<i<<" ";
            i=i+1;
        }
    }
    return 0;
}