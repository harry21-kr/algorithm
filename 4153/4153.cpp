#include <iostream>
using namespace std;

int main() {
    while (1) {
        int a,b,c;
        int temp = 0;
        cin >> a >> b >> c;
        
        if (a == 0 && b == 0 && c == 0) {
            break;
        }
        
        if (a > b && a > c) {
            temp = c;
            c = a;
            a = temp;
        } else if (b > a && b > c) {
            temp = c;
            c = b;
            b = temp;
        }
        
        if (a * a + b * b == c * c) {
            cout << "right\n";
        } else {
            cout << "wrong\n";
        }
    }
}
