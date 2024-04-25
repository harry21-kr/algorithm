#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    int count = 0;
    string log = "";
    while (1) {
        cin >> n;
        
        if (n == -1) {
            break;
        }
        
        for (int i = 1; i < n; i++) {
            if (n % i == 0) {
                count += i;
                log += to_string(i);
                if (n / i != 2) {
                    log += " + ";
                }
            }
        }
        
        if (count == n) {
            cout << n << " = " << log << "\n";
        } else {
            cout << n << " is NOT perfect." << "\n";
        }
        
        count = 0;
        log = "";
    }
}
