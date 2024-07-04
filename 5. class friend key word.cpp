#include<iostream>
using namespace std;
class b;
class a{
    private:
    int numa;
    friend class b;
    public:
    a():numa(12){}
};
class b{
    private:
    int numb;
    public:
    b():numb(1){}
    int add(){
        a obja;
        return obja.numa +numb;
    }
};
int main(){
    b objb;
    cout<<"sum "<<objb.add();

    return 0;
}