#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    void data() {
        cout << "Enter the Name of Student: ";
        cin >> name;
    }
};

class MCQ : public Student {
protected:
    char option;
    int score1;
    int score2;
    int score3;
    int score4;
    int score5;

public:
    void q1() {
        cout << "q1. who is most handsome in the world?" << endl;
        cout << "option a : jaideep singh" << endl;
        cout << "option b : salam khan" << endl;
        cout << "option c : kartik aryan" << endl;
        cout << "option d : james bond" << endl;
        cin >> option;
        if (option == 'a') {
            cout << "correct" << endl;
            score1 = 1;
        }
        else {
            score1 = 0;
            cout << "wrong" << endl;
        }
    }

    void q2() {
        cout << "q2. what Jaideep likes most?" << endl;
        cout << "option a : Dance" << endl;
        cout << "option b : singing" << endl;
        cout << "option c : bigg boss" << endl;
        cout << "option d : all of the above" << endl;
        cin >> option;
        if (option == 'd') {
            cout << "correct" << endl;
            score2 = 1;
        }
        else {
            score2 = 0;
            cout << "wrong" << endl;
        }
    }

    void q3() {
        cout << "q3. favourite contestant of Jaideep in Bigg Boss?" << endl;
        cout << "option a : munawar" << endl;
        cout << "option b : isha" << endl;
        cout << "option c : neil" << endl;
        cout << "option d : ashwarya" << endl;
        cin >> option;
        if (option == 'b') {
            cout << "correct" << endl;
            score3 = 1;
        }
        else {
            score3 = 0;
            cout << "wrong" << endl;
        }
    }

    void q4() {
        cout << "q4. nature of Jaideep is like?" << endl;
        cout << "option a : loyal" << endl;
        cout << "option b : dishonest" << endl;
        cout << "option c : outspoken" << endl;
        cout << "option d : a and c" << endl;
        cin >> option;
        if (option == 'd') {
            cout << "correct" << endl;
            score4 = 1;
        }
        else {
            score4 = 0;
            cout << "wrong" << endl;
        }
    }

    void q5() {
        cout << "q5. what Jaideep likes most in food?" << endl;
        cout << "option a : capsicum" << endl;
        cout << "option b : non-veg" << endl;
        cout << "option c : raw salad" << endl;
        cout << "option d : mushroom" << endl;
        cin >> option;
        if (option == 'c') {
            cout << "correct" << endl;
            score5 = 1;
        }
        else {
            score5 = 0;
            cout << "wrong" << endl;
        }
    }

    int getTotalScore() {
        return score1 + score2 + score3 + score4 + score5;
    }
};

int main() {
    MCQ m[2];S
    for (int i = 0; i < 2; i++) {
        m[i].data();
        m[i].q1();
        m[i].q2();
        m[i].q3();
        m[i].q4();
        m[i].q5();

        int totalScore = m[i].getTotalScore();
        cout << "Total Score of " << m[i].name << " is " << totalScore << endl;
    }

    int maxScore = -1;
    int maxIndex = -1;
    for (int i = 0; i < 2; i++) {
        if (m[i].getTotalScore() > maxScore) {
            maxScore = m[i].getTotalScore();
            maxIndex = i;
        }
    }

    cout << "Total Score of " << m[maxIndex].name << " is " << maxScore << " (the highest score)." << endl;

    return 0;
}
