#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        if ((i + 1) % 2 == 0) {
            cout << " ";
        }
        for (int j = n; j > 0; j--) {
            if (j == 1) {
                cout << "*";
                break;
            }
            cout << "* ";
        }
        cout << endl;
    }}
