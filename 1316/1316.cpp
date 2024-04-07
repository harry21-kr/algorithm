#include <iostream>
using namespace std;

int main() {
    int n;
    int count = 0;
    cin >> n;
    string a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int j = 0; j < n; j++) {
        bool alphabet[26] = { false };
        alphabet[a[j][0] - 97] = true;
        for (int k = 1; k < a[j].length(); k++) {
            if (a[j][k] == a[j][k - 1]) {
                continue;
            } else if (a[j][k] != a[j][k - 1] && alphabet[a[j][k] - 97] == true) {
                count++;
                break;
            } else {
                alphabet[a[j][k] - 97] = true;
            }
        }
    }
    cout << n - count;
}