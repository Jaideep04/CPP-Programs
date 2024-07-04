#include<iostream>
using namespace std;
class b;
class a{
    public:
    a():numa(12){}

    private:
    int numa;
    friend int add(a,b);
};
class b{
    public:
    b():numb(1){}

    private:
    int numb;
    friend int add(a,b);
};
int add(a obja , b objb){
    return(obja.numa + objb.numb);
}

int main (){
    a obja;
    b objb;

    cout<<"sum"<<add(obja , objb);

    return 0;
}