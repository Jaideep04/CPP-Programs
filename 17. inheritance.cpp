#include<iostream>
using namespace std;

class parent{
    public:
       int idP;
};
class child:public parent{
    public:
       int idC;
};
int main(){
    child m;
    m.idC=7;
    m.idP=9;

    cout<<m.idC<<","<<m.idP<<endl;

    return 0;
}