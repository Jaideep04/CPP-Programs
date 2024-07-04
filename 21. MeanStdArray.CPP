#include<iostream>
#include<iomanip>
#include<cmath>
#define size 7
using namespace std;

int main(){
    int marks[]={74,43,58,60,90,84,70};
    int sum=0;
    int sumsq=0;
    double mean , stddev;
    for(int i=0;i<size;i++){
        sum+=marks[i];
        sumsq+=marks[i]*marks[i];
    }
    mean=(double)sum/size;
    cout<<"mean is"<<mean<<endl;
    cout<<endl;

    stddev=sqrt((double)sumsq/size-mean*mean);
    cout<<"srddev is"<<stddev<<endl;

    return 0;
}