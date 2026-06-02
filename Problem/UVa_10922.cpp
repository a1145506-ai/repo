#include <bits/stdc++.h>
using namespace std;

int digitSum(const string& N){
    int sum = 0;
    for (char c : N){
        sum += c - '0';
    }
    return sum;
}

int main(){
    ios::sync_with_stdio(false), cin.tie(nullptr);
    
    string N;
    while (cin >> N && N != "0"){
        int degree = 0;
        
        int sum = digitSum(N);
        degree++;
        
        while (sum >= 10){
            sum = digitSum(to_string(sum));
            degree++;
        }
        
        if (sum == 9) {
            cout << N << " is a multiple of 9 and has 9-degree " << degree << "." << '\n';
        } else {
            cout << N << " is not a multiple of 9." << '\n';
        }
    }
    return 0;
}