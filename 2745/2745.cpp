#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    string str;
    int base;
    int result = 0;
    cin >> str >> base;
    for (int i = 0; i < str.length(); i++) {
        int strToNum = str[str.length() - (i + 1)];
        if ('0' <= strToNum && strToNum <= '9') {
            result += (strToNum - '0') * int(pow(base, i));
        } else {
            result += (strToNum - 'A' + 10) * int(pow(base, i));
        }
    }
    cout << result << "\n";
}
