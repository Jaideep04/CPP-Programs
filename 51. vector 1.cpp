#include<vector>
#include<iostream>
using namespace std;
int main(){
    vector<int>a;
    vector<int>b(5,10);
    vector<int>c(b.begin(),b.end());
    vector<int>d{1,2,3,10,14};
    
    for(int i=0;i<c.size();i++){
        cout<<c[i]<<",";
    }
    cout<<endl;
    for(auto it =b.begin();it!=b.end();it++){
        cout<<(*it)<<",";
    }
    return 0;
}