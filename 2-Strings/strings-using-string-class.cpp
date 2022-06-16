#include <iostream>
#include <string.h>

using namespace std;

int strings_using_string_class() {
    string firstname = "Christopher";
    string lastname = "John";
    string fullname;
    fullname = firstname + " " + lastname;
    cout << fullname << endl;
    cout << fullname.length() << endl;
    cout << fullname[0] << endl;
    return 0;
}

