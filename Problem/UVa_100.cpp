#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

map<int, int> m;

int compute(int n) {
    if (n == 1) return 1;
    if (m[n] != 0) return m[n];
    if (n % 2) m[n] = compute(3 * n + 1) + 1;
    else m[n] = compute(n / 2) + 1;
    return m[n];
}

int main() {
    int a, b;
    while (cin >> a >> b) {
        int mx = -1;
        for (int i = min(a, b); i <= max(a, b); i++)
            mx = max(compute(i), mx);
        cout << a << ' ' << b << ' ' << mx << endl;
    }
    return 0;
}