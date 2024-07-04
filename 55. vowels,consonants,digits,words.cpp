#include<iostream>
using namespace std;
int main(){
    char line[150];
    int vowels,consonants,digits,spaces;
    vowels=consonants=digits=spaces;
    cout<<"enter a line";
    cin.getline(line,150);
    for(int i=0;line[i]!='\0';++i){
        if(line[i]=='a'||line[i]=='e'||line[i]=='i'||line[i]=='o'||line[i]=='u'|| line[i]=='A'||line[i]=='E'||line[i]=='I'||line[i]=='O'||line[i]=='U'){
           ++vowels;
        }
        else if((line[i]>='a' && line[i]<='z')||(line[i]>='A' && line[i]<='Z')){
            ++consonants;
        }
        else if(line[i]>='0' && line[i]<='9'){
            ++digits;
        }
        else if(line[i]==' '){
            ++spaces;
        }
    }    
        cout<<"vowels"<<vowels<<endl;
        cout<<"consonants"<<consonants<<endl;
        cout<<"digits"<<digits<<endl;
        cout<<"spaces"<<spaces<<endl;

        return 0;
}