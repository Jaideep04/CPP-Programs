#include<iostream>
using namespace std;

class car{
    private:
    float price;

    public:
    int model_no;
    char name[20];

    void print(){
        cout<<"name  "<<name<<endl;
        cout<<"model_no  "<<model_no<<endl;
        cout<<"price  "<<price<<endl;
    }
    float get_discount_price(float x){
        return price*(1.0-x);
    }
    float apply_discount(float x){
        price=price*(1.0-x);
    }
    void set_price(float p){
        float msp=111;
        if(p>0){
            price=p;
        }
        price=msp;
    }
    float get_price(){
        return price;
    }

};

int main(){
    car c;
    c.model_no=112;
    c.name[0]='a';
    c.name[1]='b';
    c.name[3]='\0';

    c.set_price(-100);

    c.print();

    return 0;
}