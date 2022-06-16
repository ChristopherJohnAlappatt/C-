#include<iostream>
#include <fstream>

using namespace std;

int main() {
    int n;
    ofstream my_file;
    my_file.open("my_txt", ios::trunc);
    for (int i = 0; i < 10; i++) {
        my_file << i * i << endl;
    }
    my_file.close();
    return 0;
}
