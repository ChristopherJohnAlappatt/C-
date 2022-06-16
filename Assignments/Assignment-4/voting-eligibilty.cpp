#include <iostream>

using namespace std;

bool voting_eligibilty(int);

int canVote() {
    int age;
    cout << "Enter the age : " << endl;
    cin >> age;
    if (voting_eligibilty(age)) {
        cout << "The candidate can vote";
    } else {
        cout << "The candidate cannot vote";
    }
    return 0;
}

bool voting_eligibilty(int age) {
    bool canVote;
    if (age >= 18) {
        canVote = true;
    } else {
        canVote = false;

    }
    return canVote;
}