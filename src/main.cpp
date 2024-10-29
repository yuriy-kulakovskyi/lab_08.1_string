#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include "../include/main.h"

using namespace std;

int main() {
    string str;
    cout << "Enter string:" << endl;
    getline(cin, str);

    cout << "String contained " << Count(str) << " groups of equal elements" << endl;

    string modifiedStr = Change(str);
    cout << "Modified string: " << modifiedStr << endl;

    return 0;
}
