#include<iostream>
using namespace std;

class Distance{
    private:
     int feet;
     float inches;
    public:
      Distance(int ft , float in){
        feet = ft;
        inches = in;
      }
      void getdist(){
        cout<<"enter feet"; cin>>feet;
        cout<<"enter inches"; cin>>inches;
      }
      void showdist(){
        cout<<feet<<"-"<<inches;
      }
      void Add_dist(Distance , Distance);
};
void Distance :: void Add_dist( Distnace d1 , Distance d2){
    inches = d2.inches + d1.inches;
    feet = 0;
    if(inches >= 12.0){
        inches -=12.0;
        feet++;
    }
    feet = d2.feet + d1.feet;
}
int main(){
    Distance dist1,dist3;
    Distance dist2(11,6.8);

    dist1.getdist();
    dist3.Add_dist(dist1,dist2);

    cout<<"dist1"<<dist1.showdist()<<endl;
    cout<<"dist2"<<dist2.showdist()<<endl;
    cout<<"dist3"<<dist3.showdist()<<endl;

    return 0;
}
