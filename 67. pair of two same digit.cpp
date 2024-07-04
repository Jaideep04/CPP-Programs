#include<iostream>
#include<string>
using namespace std;
int main(){
    int arr[5]={146,467,784,246,465};
   
    for(int i = 0; i<5;i++){
        int n = arr[0];
        int d = n%10;
        n = n/10;
    }
     for(int i = 0; i<5;i++){
        int d;
        if(arr[i]==d){
            cout<<arr[i]<<endl;
        }
     }

    return 0;
}
