#include<iostream>
using namespace std;

class same {
private:
    int a, b;
public:
    same(int num1, int num2) {
        a = num1;
        b = num2; 
    }

    int samedigit() {
        int count = 0;
        while (a > 0 && b > 0) {
            int digit1 = a % 10;
            int digit2 = b % 10;
            if (digit1 == digit2) {
                count++;
            }
            a /= 10;
            b /= 10;
        }
        return count;
    }
};

int main() {
    same sd(4456, 4457);
    cout << sd.samedigit();
    return 0;
}
