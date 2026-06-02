#include <iostream>
#include <vector>
using namespace std;

int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    vector<long long int>Chueh;
    long long int count = 0, add = 0;
    for (int i = 0; i<=200000; i++)
    {
        count += add;
        Chueh.push_back(count);
        add++;
    }
    int N;
    cin >> N;
    for (int i = 0; i<N; i++)
    {
        long long int a, b;
        cin >> a >> b;
        long long int start = Chueh[a+b] + a;
        cin >> a >> b;
        long long int finish = Chueh[a+b] + a;
        cout << "Case " << i+1 << ": " << finish-start << "\n";
    }
}