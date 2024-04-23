#include <iostream>
using namespace std;

int main() {
    int A,B,V;
    cin >> A >> B >> V;
    
    // A: 달팽이가 낮에 올라가는 높이
    // B: 달팽이가 밤에 미끄러지는 높이
    // V: 달팽이가 올라가고싶은 나무막대의 높이
    // (V - B): 정상에 달팽이가 올라가면 미끄러지지않으므로 총 높이 - 미끄러지는 높이
    // (A - B): 달팽이가 하루에 올라가는 높이
    if ((V - B) % (A - B) == 0) {
        cout << (V - B) / (A - B);
    } else {
        cout << (V - B) / (A - B) + 1;
    }
    
}
