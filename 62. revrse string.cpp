#include <iostream>
using namespace std;
 
int main()
{
        
	char str[30];
	int i,length=0;
	
	cout<<"Enter the string:";
	cin.get(str,30);
	
	for(i=0;str[i]!='\0';++i)
	{
	length++;
	}
	
	cout<<"Length of the string is:"<<length<<endl;
 

    for (int i = 0; i < length / 2; i++)
        swap(str[i], str[length - i - 1]);
    cout<<str<<endl;    
}
 