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
        for (int k = n - 1; k > i; k--) {
            cout << "*";
        }
        cout << endl;
    }
}