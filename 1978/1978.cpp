#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int intArr[n];
    int count = 0;
    for (int i = 0; i < n; i++) {
        cin >> intArr[i];
    }
    for (int j = 0; j < n; j++) {
        if (intArr[j] == 1) {
            ++count;
            continue;
        }
        for (int k = 2; k < intArr[j]; k++) {
            if (intArr[j] % k == 0) {
                ++count;
                break;
            }
        }
    }
    cout << n - count;
}
