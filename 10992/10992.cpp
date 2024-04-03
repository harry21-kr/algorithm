#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = n; j > i + 1; j--) {
            cout << " ";
        }
        if (i == n - 1) {
            for (int a = 0; a <= i * 2; a++) {
                cout << "*";
            }
        } else {
            cout << "*";
            for (int k = 0; k < i; k++) {
                cout << " ";
            }
            if (n > 2) {
                for (int o = 0; o < i - 1; o++) {
                    cout << " ";
                }
            }
            if (i > 0) {
                cout << "*";
            }
        }
        
        cout << endl;
    }}