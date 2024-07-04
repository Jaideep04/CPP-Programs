#include<iostream>
#include<string>
using namespace std;
int main(){
    string s[5];
    cout<<"enter the string ; "<<endl;;
    for(int i=0;i<5;i++){
    	cin>>s[i];
	}
     for(int i=0;i<5;i++){
        if(s[i]==" "){
            continue;
        }
        cout<<s[i];
    }
    return 0;
}    
