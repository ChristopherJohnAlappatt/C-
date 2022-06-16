#include <iostream>

using namespace std;

int odd_even() {
    int a;
    bool isOdd;
    cout << "Enter a number : " << endl;
    cin >> a;

    if (a % 2==0) {
        isOdd = false;
        cout << a << " is an Even number ." << endl;
    }else{
        isOdd =true;
        cout << a << " is an Odd number ." << endl;
    }
    return 0;
}
