#include<iostream>
using namespace std;


int mul(int a[3],int b[3]){
    int c[3]={1,1,1};
    for(int i=0;i<3;i++){
        c[i]=a[i]*b[i];
        cout<<c[i]<<" ";
    }
    cout<<endl;
    return 0;
}


int mul(int a[3][3],int b[3][3]){
    int c[3][3]={0};
    for(int i = 0; i < 3; ++i){
        for(int j = 0; j < 3; ++j){
            for(int k = 0; k < 3; ++k){
                c[i][j] += a[i][k] * b[k][j];
                cout<<c[i][j]<<" ";
            }
        }
    } 
    cout<<endl;
    return 0;        
}
   

int main(){
    int d[3]={1,2,3};
    int e[3]={4,5,6};
    int f[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int g[3][3]={{19,18,17},{16,15,14},{13,12,11}};
    cout<<"mul of arrys is "<<mul(d,e)<<endl;
    cout<<"mul of martices is "<<mul(f,g)<<endl;

    return 0;
}
