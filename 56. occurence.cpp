#include<iostream>
using namespace std;
int main()
{
    char str[200], word[20];
    int i=0, j=0, countW=0;
    cout<<"Enter the String: ";
    cin.get(str,200); 
    cout<<"Enter the Word: ";
    cin>>word;
    while(str[i]!='\0')
    {
    	
        while(word[j]!='\0')
        {
            if(str[i]==word[j]){
                i++;
                countW=countW+1;
                
            }
            j++;
        }
        
    }
    
    cout<<"\nOccurrence of '"<<word<<"' = "<<countW;
    cout<<endl;
    return 0;
}