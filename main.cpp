#include<iostream>

using namespace std;

template<class T, class S>
T add(T a, S b) {
    return a + b;
}


int main(){
    cout << add<float, int>(3.5, 1) << endl;
    cout << add<int, float>(1, 3.5);
    return 0;
}
