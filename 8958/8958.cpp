#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    string strArr[n];
    for (int i = 0; i < n; i++) {
        cin >> strArr[i];
    }
    for (int j = 0; j < n; j++) {
        int anwser = 0;
        int count = 0;
        for (int k = 0; k < strArr[j].length(); k++) {
            if (strArr[j][k] == 'O') {
                ++count;
                anwser = anwser + count;
            } else if (strArr[j][k] == 'X') {
                count = 0;
            }
        }
        cout << anwser << endl;
    }
}