#include<iostream>
using namespace std;

class wall{
    private:
    double lenght;

    public:
    wall(){
        lenght=3.5;
        cout<<"creating wall"<<endl;
        cout<<"lenght "<<lenght<<endl; 
    }
};

int main(){
    wall wall1;
    return 0;
}