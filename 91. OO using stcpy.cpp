#include <cstring> 
#include <iostream>
using namespace std;
class coppy{
    char str[30];  
    public:
        coppy(){}
        coppy(char str[]){
            strcpy(this->str,str);
        }
        coppy operator < (coppy &c1){
            coppy temp;//default const. wala
            strcpy(temp.str,c1.str);
            return temp;
        }
        string Get(){
            return str;
        }
};
int main(){
    char s[30];
    cout<<"Enter a string to copy : ";
    cin.get(s,30);
    cout<<endl;
    coppy c(s);
    coppy c1;
    coppy C2=c1<c;
    cout<<"C2 string : "<<C2.Get()<<endl;
    cout<<"C string : "<<c.Get()<<endl;

    return 0;
}