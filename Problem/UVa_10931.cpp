#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int l;
    while (cin >> l && l != 0) {
        bitset < 32 > a1(l);
        int a[32];
        for (int i = 0; i < 32; i++) {
            a[i] = a1[i];
        }
        cout << endl;
        int n = 0, m = 31;
        for (int i = 0; i < 32; i++) {
            if (a[i] == 1) {
                n++;
            }
        }
        cout << "The parity of ";
        while (m >= 0 && a[m] == 0) {
            m--;
        }
        for (int i = m; i >= 0; i--) {
            cout << a[i];
        }
        cout << " is " << n << " (mod 2)." << endl;
    }
    
    return 0;
}