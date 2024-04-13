#include <iostream>
#include <string>
using namespace std;

int main() {
    string a,b,c;
    double d = 0;
    double e = 0;
    for (int i = 0; i < 20; i++) {
        double temp = 0;
        cin >> a >> b >> c;
        if (c != "P") {
            d = d + stoi(b);
        }
        if (c == "A+") {
            temp = stoi(b) * 4.5;
            e = e + temp;
        } else if (c == "A0") {
            temp = stoi(b) * 4.0;
            e = e + temp;
        } else if (c == "B+") {
            temp = stoi(b) * 3.5;
            e = e + temp;
        } else if (c == "B0") {
            temp = stoi(b) * 3.0;
            e = e + temp;
        } else if (c == "C+") {
            temp = stoi(b) * 2.5;
            e = e + temp;
        } else if (c == "C0") {
            temp = stoi(b) * 2.0;
            e = e + temp;
        } else if (c == "D+") {
            temp = stoi(b) * 1.5;
            e = e + temp;
        } else if (c == "D0") {
            temp = stoi(b) * 1.0;
            e = e + temp;
        } else if (c == "F") {
            temp = stoi(b) * 0;
            e = e + temp;
        }
    }
    cout << e / d;
}
