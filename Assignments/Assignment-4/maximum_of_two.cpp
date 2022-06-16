#include <iostream>

using namespace std;

int max_two(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int maximum_of_two_main() {
    float a, b;
    cout << "Welcome to max number program : " << endl;
    cout << "Enter two numbers : " << endl;
    cin >> a >> b;
    cout << "The greater number is " << max_two(a, b);
    return 0;
}
