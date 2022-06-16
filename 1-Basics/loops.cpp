#include <iostream>

using namespace std ;

int loops(){
    int n ;
    cout << "Enter a number : " << endl;
    cin >> n;

    for (int i=0 ;i<n ; i++){
        cout << " For loop Hello World!!" << endl;
    }

    while (n > 0){
        cout << "While loop Hello World!!" << endl;
        n--;
    }
    return 0;
}