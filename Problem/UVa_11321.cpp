#include <bits/stdc++.h>
using namespace std;

int N, M; 

bool customSort(int a, int b) {
    int modA = a % M;
    int modB = b % M;

    if (modA != modB) {
        return modA < modB;
    }

    bool isOddA = a % 2 != 0;
    bool isOddB = b % 2 != 0;

    if (isOddA != isOddB) {
        return isOddA; 
    }

    if (isOddA) {
        return a > b; 
    } else {
        return a < b; 
    }
}

int main() {
    while (true) {
        cin >> N >> M;

        if (N == 0 && M == 0) {
            cout << "0 0" << endl;
            break; 
        }

        vector<int> numbers(N);

        for (int i = 0; i < N; ++i) {
            cin >> numbers[i];
        }

        sort(numbers.begin(), numbers.end(), customSort);

        cout << N << " " << M << endl;
        for (int num : numbers) {
            cout << num << endl;
        }
    }

    return 0;
}

