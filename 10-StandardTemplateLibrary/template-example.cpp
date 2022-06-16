#include<iostream>

using namespace std;

template<class T>
T greatestNumber(T a, T b, T c) {
    if (a > b) {
        if (a > c) {
            return a;
        } else {
            return c;
        }
    } else {
        if (b > c) {
            return b;
        } else {
            return c;
        }
    }
}

int main() {
    cout << greatestNumber<int>(1, 2, 3) << endl;
    cout << greatestNumber<float>(1.0, 2.2, 3.68) << endl;
    return 0;
}
