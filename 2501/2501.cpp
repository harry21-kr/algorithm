#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int count = 0;
    int result = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            count++;
        }
        if (count == m) {
            result = i;
            break;
        }
    }
    if (count < m) {
        cout << 0;
    } else {
        cout << result;
    }
}
