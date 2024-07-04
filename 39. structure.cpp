#include<iostream>
using namespace std;
const int SIZE=4;
struct part
 {
    int model_no;
    int part_num;
    float cost;
 };
 int main(){
    int n;
    part apart[SIZE];
    for(n=0;n<SIZE;n++){
        cout<<endl;
        cout<<"enter model no";cin>>apart[n].model_no;
        cout<<"enter part_num";cin>>apart[n].part_num;
        cout<<"enter cost";cin>>apart[n].cost;
    } 
    for(n=0;n<SIZE;n++){
        cout<<"model is"<<apart[n].model_no;
        cout<<"part num is"<<apart[n].part_num;
        cout<<"cost is"<<apart[n].cost;
    }
    return 0;
 }