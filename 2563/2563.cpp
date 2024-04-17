#include <iostream>
#include <string>
using namespace std;

int main() {
    bool arr[100][100] = { 0 };
    int n,a,b;
    int result = 0;
    cin >> n;
    while (n--) {
        cin >> a >> b;
        for (int i = a; i < a + 10; i++) {
            for (int j = b; j < b + 10; j++) {
                if (arr[i][j]) continue;
                arr[i][j] = 1;
                result++;
            }
        }
    }
    cout << result;
}
