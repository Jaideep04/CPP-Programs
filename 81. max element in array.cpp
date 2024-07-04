#include<iostream>
using namespace std;
class jaideep{
    private:
       int arr[5];
    public:
       void getdata(){
            cout<<"enter the array"<<endl;
            for(int i=0;i<5;++i){
                cin>>arr[i];
            }
       }
       void max(){
           int maximum=arr[0];
           for(int i=0;i<5;i++){
                if(arr[i]>maximum){
                    maximum=arr[i];
                }
           }
           cout<<"maximum element in given array is : "<<maximum<<endl;
       }
};
int main(){
    jaideep singh;
    singh.getdata();
    singh.max();
}