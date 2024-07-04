#include <cstring>
#include <iostream>
using namespace std;

int main() {
    char my_string[] = "Hello, world! How are you today?";
    char* token = strtok(my_string, " ");
    while (token != NULL) {
        cout<< token <<endl;
        token = strtok(NULL, " ");
    }
    return 0;
}
