#include<iostream>
using namespace std;
class s2d{
    private:
        int a[10],b[5];
    public:
        void getdata(){
            cout<<"enter array of size 10"<<endl;
            for(int i=0;i<10;i++){
                cin>>a[i];
            }
        }

        void sumarray(){
            int i;
            for(int i=0;i<5;i++){
                b[i] = a[2 * i] + a[2 * i + 1];
                cout<<b[i]<<" , ";
            }
        }
};

int main(){
    s2d s;
    s.getdata();
    s.sumarray();

    return 0;
}