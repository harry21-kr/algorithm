#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int intArr[n];
    
    int QUARTER = 25;
    int DIME = 10;
    int NICKEL = 5;
    int PENNY = 1;
    
    for (int i = 0; i < n; i++) {
        cin >> intArr[i];
    }
    
    for (int i = 0; i < n; i++) {
        int temp = intArr[i];
        
        if (temp / QUARTER) {
            cout << temp / QUARTER << " ";
            temp = temp % QUARTER;
        } else {
            cout << "0 ";
        }
        
        if (temp / DIME) {
            cout << temp / DIME << " ";
            temp = temp % DIME;
        } else {
            cout << "0 ";
        }
        
        if (temp / NICKEL) {
            cout << temp / NICKEL << " ";
            temp = temp % NICKEL;
        } else {
            cout << "0 ";
        }
        
        if (temp / PENNY) {
            cout << temp / PENNY;
        } else {
            cout << "0 ";
        }
        
        cout << "\n";
    }
}
