#include <string>
#include <iostream>
#include <vector>
using namespace std;

vector<string> tokenize(const string& input, const string& delimiters) {
    vector<string> tokens;
    string::size_type start = 0;
    string::size_type end = 0;
    while ((end = input.find_first_of(delimiters, start)) !=string::npos) {
        if (end != start) {
            tokens.push_back(input.substr(start, end - start));
        }
        start = end + 1;
    }
    if (start < input.length()) {
        tokens.push_back(input.substr(start));
    }
    return tokens;
}

int main() {
    string input = "Hello, world! How are you today?";
    string delimiters = " ,!?";
    vector<string> tokens = tokenize(input, delimiters);
    for (const auto& token : tokens) {
        cout<<token<<endl;
    }
    return 0;
}
