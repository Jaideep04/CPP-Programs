#include <algorithm>
#include <string>
#include <iostream>
using namespace std;

int main() {
    string my_string = "hello world";
    sort(my_string.begin(), my_string.end());
    cout << my_string <<endl;
    return 0;
}
