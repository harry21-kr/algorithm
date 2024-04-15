#include <iostream>
#include <string>
using namespace std;

int main() {
    int n[10][10];
    int max = 0;
    int a = 1;
    int b = 1;
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cin >> n[i][j];
        }
    }
    
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (n[i][j] > max) {
                max = n[i][j];
                a = i + 1;
                b = j + 1;
            }
        }
    }
    cout << max << "\n";
    cout << a << " " << b;
}
