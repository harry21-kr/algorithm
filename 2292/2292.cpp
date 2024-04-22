#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int result = 0;
    for (int i = 2; i <= n; result++) {
        i += result * 6;
    }
    if (n == 1) {
        result = 1;
    }
    cout << result;
}
