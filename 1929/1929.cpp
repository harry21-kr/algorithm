#include <iostream>
using namespace std;

int main() {
    int min, max;
    cin >> min >> max;
    bool arr[1000001] = { false, };
    arr[0] = arr[1] = true;
    
    for (int i = 2; i <= max; i++) {
        for (int j = 2; i * j <= max; j++) {
            arr[i * j] = true;
        }
    }
    
    for (int i = min; i <= max; i++) {
        if (!arr[i]) {
            cout << i << "\n";
        }
    }
}
