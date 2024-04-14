#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int arr1[n * m], arr2[n * m];
    for (int i = 0; i < n * m; i++) {
        cin >> arr1[i];
    }
    for (int j = 0; j < n * m; j++) {
        cin >> arr2[j];
    }
    for (int k = 0; k < n * m; k++) {
        cout << arr1[k] + arr2[k];
        if (k != 0 && (k + 1) % m == 0) {
            cout << "\n";
        } else {
            cout << " ";
        }
    }
}
