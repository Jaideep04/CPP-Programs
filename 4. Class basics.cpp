#include<iostream>
using namespace std;

class car{
    private:
    float price;

    public:
    int model_no;
    char name[20];

    void print(){
        cout<<"name"<<name<<endl;
        cout<<"model_no"<<model_no<<endl;
        cout<<"price"<<price<<endl;
    }

};

int main(){
    car c;
    c.model_no=112;
    c.name[0]='a';
    c.name[1]='b';
    c.name[3]='\0';

    c.print();

    return 0;
}