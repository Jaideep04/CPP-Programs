#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cout<<"enter array"<<endl;
    for(int i = 0 ; i<5 ; i++){
        cin>>arr[i];
    }
    int min=arr[0];
    int max=arr[0];
    for(int i = 0 ; i<5 ; i++){
        if(arr[i] < min){
            min = arr[i];
        }
        else if(arr[i] > max){
            max = arr[i];
        }
    }
    cout<<"max is  "<<max<<endl;
    cout<<"min is  "<<min<<endl;
    return 0;
}