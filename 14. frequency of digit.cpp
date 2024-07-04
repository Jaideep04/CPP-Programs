#include<iostream>
using namespace std;
int c(long long number,int d){
    int count=0;
    while(number){
        if((number%10)==d){
            count++;
            number/=10;
        }
    }
    return count;
}
int main(){
    long long num=12453221;
    int d=2;
    cout<<"frequency is "<<d<<"in"<<num<<"is"<< c(num,d)<<endl;
    return 0;
}