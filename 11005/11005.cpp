#include <iostream>
using namespace std;

int main() {
    int num;
    int base;
    cin >> num >> base;
    int div = num;
    int count = 0;
    string answer = "";
    while (1) {
        if (0 <= div % base && div % base <= 9) {
            answer += to_string(div % base);
        } else {
            answer += char(div % base + 55);
        }
        count++;
        
        div = div / base;
        
        if (div == 0) {
            break;
        }
    }
    
    for (int i = count - 1; i >= 0; i--) {
        cout << answer[i];
    }
    }
