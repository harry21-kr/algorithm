#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int k = i; k < n - 1; k++) {
            cout << " ";
        }
        for (int j = 0; j <= i; j++) {
            cout << "*";
        }
        for (int l = 0; l < i; l++) {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j <= i; j++) {
            cout << " ";
        }
        for (int k = n; k > i + 1; k--) {
            cout << "*";
        }
        for (int l = n; l > i + 2; l--) {
            cout << "*";
        }
        cout << endl;
    }
}
