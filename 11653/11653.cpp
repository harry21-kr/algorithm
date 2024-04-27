#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n == 1) return 0;
    int num = n;
    int div = 2;
    // 무한반복
    while (1) {
        if (num < div) break;
        
        // 만약 소인수가 아니라면 div++
        if (num % div != 0) {
            div++;
        // 소인수가 맞다면 num / div, 소인수 출력
        } else {
            num /= div;
            cout << div << "\n";
        }
    }
}
