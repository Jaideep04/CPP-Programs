#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char names[10][10],temp[10];
    cout<<"enter names";
        for(int i=0;i<5;i++){
            cin>>names[i];
        }
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(strcmp(names[i],names[j])>0){
                strcpy(temp,names[i]);
                strcpy(names[i],names[j]);
                strcpy(names[j],temp);
            }
        }
    }
    cout<<"sorted list ";
    for(int i=0;i<5;i++){
        cout<<names[i]<<" ";
    }
    return 0;

}