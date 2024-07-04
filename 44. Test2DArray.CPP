#include<iostream>
using namespace std;
void printArray( const int[][3],int myarray);
int main(){
    int myarray[][3]={{8,2,4},{7,5,2}};
    //only first index can be omitted and implied
    printArray(myarray,2);

    return 0;
}