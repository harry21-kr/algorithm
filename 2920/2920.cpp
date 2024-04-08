#include <iostream>
using namespace std;

int main() {
    int n[8];
    for (int i = 0; i < 8; i++) {
        cin >> n[i];
    }
    for (int j = 1; j < 8; j++) {
        if (n[j] == n[j - 1] + 1) {
            if (j == 7) {
                cout << "ascending";
                break;
            }
            continue;
        } else if (n[j] == n[j - 1] - 1) {
            if (j == 7) {
                cout << "descending";
                break;
            }
            continue;
        } else {
            cout << "mixed";
            break;
        }
    }
}
