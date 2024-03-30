#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int k = 0; k <= i; k++) {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 0; i < n - 1; i++) {
        for (int k = n; k > i + 1; k--) {
            cout << "*";
        }
        cout << endl;
    }
}