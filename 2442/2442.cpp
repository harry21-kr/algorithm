#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = n - 1; j > i; j--) {
            cout << " ";
        }
        for (int k = 0; k <= i; k++) {
            cout << "*";
        }
        for (int l = 0; l < i; l++) {
            cout << "*";
        }
        cout << endl;
    }
}