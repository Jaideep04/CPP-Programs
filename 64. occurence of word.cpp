#include<iostream>
#include<string>
using namespace std;
int main(){
    string a[5],b ;
    cout<<"enter the string ; "<<endl;;
    for(int i=0;i<5;i++){
    	cin>>a[i];
	}
    cout<<"enter the word"<<endl;
    cin>>b;
    int count=0;
    for(int i=0;i<5;i++){
        if(a[i]==b){
            count++;
        }
    }    

    cout<< "freq of word is "<<count<<endl;
    return 0;
  
}