#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << "*";
        }
        for (int k = n; k > i + 1; k--) {
            cout << " ";
        }
        for (int l = n; l > i + 1; l--) {
            cout << " ";
        }
        for (int o = 0; o <= i; o++) {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = n; j > i + 1; j--) {
            cout << "*";
        }
        for (int k = 0; k <= i; k++) {
            cout << " ";
        }
        for (int l = 0; l <= i; l++) {
            cout << " ";
        }
        for (int o = n; o > i + 1; o--) {
            cout << "*";
        }
        cout << endl;
    }
}
