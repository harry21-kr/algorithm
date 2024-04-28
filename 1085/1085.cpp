#include <iostream>
using namespace std;

int main() {
    int x,y,w,h;
    cin >> x >> y >> w >> h;
    if (x <= y && x <= w - x && x <= h - y) {
        cout << x;
    } else if (y <= x && y <= w - x && y <= h - y) {
        cout << y;
    } else if (w - x <= x && w - x <= y && w - x <= h - y) {
        cout << w - x;
    } else if (h - y <= x && h - y <= y && h - y <= w - x) {
        cout << h - y;
    }
}

