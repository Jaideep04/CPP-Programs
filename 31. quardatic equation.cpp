#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float a,b,c,x1,x2,dis,realp,imgp;
    cout<<"enter coeff"<<endl;
    cin>>a>>b>>c;
    dis=b*b-4*a*c;
    if(dis>0){
        x1=(-b+sqrt(dis))/(2*a);
        x2=(-b-sqrt(dis))/(2*a);
        cout<<"x1,x2"<<x1<<","<<x2<<endl;
    }
    else if(dis==0){
        cout<<"roots are real and equal"<<endl;
        x1=-b/(2*a);
        cout<<"x1=x2="<<x1<<endl;
    }
    else{
        realp=-b/(2*a);
        imgp=sqrt(-dis)/(2*a);
        cout<<"x1="<<realp<<"+"<<imgp<<endl;
        cout<<"x2="<<realp<<"-"<<imgp<<endl;
    }
    return 0;
}