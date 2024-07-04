#include<iostream>
using namespace std;
int quick(int a[],int beg,int end){
    int a[10], int beg , int end, int loc
    a[0]=beg;
    for(int i=0;i<=end;i++){
     while(loc<=beg || loc!=end){
        end=end-1;
        if(loc=end) return;
        else(a[loc]>end){
            int temp= a[loc];
            a[loc]=beg;
            beg=temp;
            loc=end;
        }
     }
     while(beg<=a[loc]||beg!=loc){
        beg=beg+1;
        if(beg>a[loc]){
            int temp=a[loc];
            a[loc]=beg;
            beg=temp;
            loc=beg
        }
     }
    } 
    return a;
}
int main(){
    int a={1,2,4,5,7,3,4};
    quick(a);

}