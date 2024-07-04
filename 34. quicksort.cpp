#include<iostream>
using namespace std;
int quick(int arr[],int beg,int end){
    int pivot=arr[beg];
     int count=0;
    for(int i=0;i<=beg;i++){
        if(arr[i]<=pivot) count++;
    }
    int pvtindex=beg+count;
    swap(arr[beg],arr[pvtindex]);
    while(beg < pvtindex || end > pvtindex ){
        while(arr[beg] <= pivot) beg++;
        while(arr[end] >= pivot) end--;
        if(beg < pvtindex || end > pvtindex ) swap(arr[beg++],arr[end--]);
    }
    return pvtindex;
} 
void quicksort(int arr[],int beg,int end){
    if(beg>=end) return;
    int p = quick(arr,beg,end);
    quicksort(arr,beg,p-1);
    quicksort(arr,p+1,end);
}
int main(){
    cout<<"enter array";
    int arr[20];
    int n=20;
    for(int i =0 ; i<n;i++) cin>>arr[i];
    quicksort(arr,0,n-1);
    for(int i =0 ; i<n;i++) cout<<arr[i]<<" ";
    return 0;
}