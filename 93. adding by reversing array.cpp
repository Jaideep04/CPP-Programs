#include<iostream>
using namespace std;
class jaideep{
    private:
       int arr[5];
       int rev[5];
    public:
       void getdata(){
            cout<<"enter the array"<<endl;
            for(int i=0;i<5;++i){
                cin>>arr[i];
            }
            cout<<"original array = ";
            for(int i=0;i<5;++i){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
       }
       void reverse(){
           for(int i=0;i<5;i++){
                rev[i]=arr[4-i];
           }
           cout<<"reveresd before addition of array = ";
            for(int i=0;i<5;++i){
                cout<<rev[i]<<" ";
            }  
            cout<<endl;     
        }
        void add(){
           for(int i=0;i<5;i++){
                rev[i]=rev[i]+arr[i];
            }
            cout<<"after adding both arrays = ";
            for(int i=0;i<5;++i){
                cout<<rev[i]<<" ";
            }
        }
};
int main(){
    jaideep singh;
    singh.getdata();
    singh.reverse();
    singh.add();

    return 0;
}