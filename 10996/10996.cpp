#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < n; k++) {
                if ((j + 1) % 2 == 0) {
                    if ((k + 1) % 2 == 0) {
                        cout << "*";
                    } else {
                        cout << " ";
                    }
                } else {
                    if ((k + 1) % 2 != 0) {
                        cout << "*";
                    } else {
                        cout << " ";
                    }
                }
            }
            if (n > 1) {
                cout << endl;
            }
        }
    }
}
