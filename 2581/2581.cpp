#include <iostream>
using namespace std;

int main() {
    int M, N;
    cin >> M >> N;
    // 소수의 합을 저장하는 변수
    int acc = 0;
    // 소수의 최소값을 저장하는 변수
    int min = 0;
    // 소수인지 아닌지 판별헤주는 변수
    bool isPrime = true;
    
    for (int i = M; i <= N; i++) {
        // for문으로 소수인지 판별하기
        for (int j = 2; j < i; j++) {
            // 소수라면 소수를 판별해주는 변수 변경
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
        // 1은 소수가 아니므로 1 제외
        if (isPrime && i != 1) {
            acc += i;
            // 최소값이 없을때만 바꿔줌
            if (!min) {
                min = i;
            }
        } else {
            // 소수 판별 변수 초기화
            isPrime = true;
        }
    }
    
    if (acc) {
        cout << acc << "\n" << min;
    } else {
        cout << "-1";
    }
    
}
