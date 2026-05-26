#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        double p;
        cin >> N >> p;

        if (p == 0) {
            cout << "0.0000" << endl;
            continue;
        }

        double q = 1.0 - p;
        double result = pow(q, N - 1) * p / (1.0 - pow(q, N));

        cout << fixed << setprecision(4) << result << endl;
    }

    return 0;
}