#include <iostream>
#include <string>
using namespace std;

int main() {
    string n[5];
    for (int i = 0; i < 5; i++) {
        cin >> n[i];
    }
    for (int i = 0; i < 15; i++) {
        for (int j = 0; j < 5; j++) {
            if (n[j].length() > i) {
                cout << n[j][i];
            }
        }
    }
}
