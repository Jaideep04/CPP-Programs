#include<iostream>
using namespace std;
int main(){
    char c;
    bool islv ,isuv ;
    cout<<"enter alphabet"<<endl;
    cin>>c;
    islv=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
    isuv=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
    if(!isalpha(c)){
        printf("error");
    }
    else if(islv||isuv){
        cout<<c<<"is vowel"<<endl;
    }
    else{
        cout<<c<<"is not vowel"<<endl;
    }
    return 0;
}