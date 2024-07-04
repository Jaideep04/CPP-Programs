#include <cstring> 
#include <iostream>
using namespace std;
class cat{
    char str[30];  
    public:
        cat(){}
        cat(char str[]){
            strcpy(this->str,str);
        }
        cat operator + (cat &c1){
            cat temp;
            strcat(str,c1.str);
            strcat(temp.str,str);
            return temp;
        }
        string Get(){
            return str;
        }
};
int main(){
    char s1[30];
    char s2[30];
    cout<<"Enter a 1st string  : ";
    cin.get(s1,30);
    cout<<"Enter a 2nd string  : ";
    cin.getline(s2,30,'#');
    cat c1(s1),c2(s2);
    cat c3;
    cout<<"1st string : "<<c1.Get()<<endl;
    cout<<"2nd string : "<<c2.Get()<<endl;
    c3=c1+c2;
    cout<<"3rd string : "<<c3.Get();

    return 0;
}