#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int l = 0; l < i; l++) {
            cout << " ";
        }
        for (int j = n; j > i; j--) {
            cout << "*";
        }
        for (int k = n; k > i + 1; k--) {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 0; i < n - 1; i++) {
        for (int k = n; k > i + 2; k--) {
            cout << " ";
        }
        for (int j = 0; j <= i + 1; j++) {
            cout << "*";
        }
        for (int l = 0; l <= i; l++) {
            cout << "*";
        }
        cout << endl;
    }
}
