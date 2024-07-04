#include <string.h>
#include <iostream>
using namespace std;
int main()
{
    // Take any two strings
    char s1[] = "GeeksforGeeks";
    char s2[] = "for";
    char* p;
 
    // Find first occurrence of s2 in s1
    p = strstr(s1, s2);
 
    // Prints the result
    if (p) {
        cout << "String found" << endl;
        cout << "First occurrence of string '" << s2
             << "' in '" << s1 << "' is '" << p << "'"
             << endl;
    }
    else {
        cout << "String not found" << endl;
    }
 
    return 0;
}