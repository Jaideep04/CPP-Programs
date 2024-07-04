#include <string>
#include <iostream>
using namespace std;

int main() {
   string my_string = "Hello, world!";
    cout << my_string[0] <<endl; // Access first character
    cout << my_string.at(1) <<endl; // Access second character
    cout << my_string + " I'm a string too!" <<endl; // Concatenate two strings
    cout << my_string.append(" Goodbye!") <<endl; // Append a string
    cout << my_string.find("world") <<endl; // Find index of substring
    cout << my_string.c_str() <<endl; // Convert to C-style string
    return 0;
}
