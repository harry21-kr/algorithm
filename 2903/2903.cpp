#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int edge = 2;
    for (int i = 0; i < n; i++) {
        edge += edge - 1;
    }
    cout << edge * edge;
    }
