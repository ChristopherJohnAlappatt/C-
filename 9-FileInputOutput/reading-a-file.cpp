#include<iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream my_file;
    my_file.open("my_txt");
    int n;
    while (!my_file.eof()) {
        my_file >> n;
        cout << n << endl;
    }
    my_file.close();
    return 0;
}
