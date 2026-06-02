#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

int main() {
    map<char, vector<int>> mp;
    mp['c'] = {0,0,1,1,1,0,0,1,1,1,1}; 
    mp['d'] = {0,0,1,1,1,0,0,1,1,1,0}; 
    mp['e'] = {0,0,1,1,1,0,0,1,1,0,0}; 
    mp['f'] = {0,0,1,1,1,0,0,1,0,0,0};
    mp['g'] = {0,0,1,1,1,0,0,0,0,0,0}; 
    mp['a'] = {0,0,1,1,0,0,0,0,0,0,0}; 
    mp['b'] = {0,0,1,0,0,0,0,0,0,0,0}; 
    mp['C'] = {0,0,0,1,0,0,0,0,0,0,0}; 
    mp['D'] = {0,1,1,1,1,0,0,1,1,1,0}; 
    mp['E'] = {0,1,1,1,1,0,0,1,1,0,0}; 
    mp['F'] = {0,1,1,1,1,0,0,1,0,0,0}; 
    mp['G'] = {0,1,1,1,1,0,0,0,0,0,0}; 
    mp['A'] = {0,1,1,1,0,0,0,0,0,0,0}; 
    mp['B'] = {0,1,1,0,0,0,0,0,0,0,0}; 

    int t;
    string s;
    cin >> t;
    cin.ignore();
    while (t--) {
        getline(cin, s);

        int cnt[11] = {0};  
        int last[11] = {0};

        for (char ch : s) {
            for (int j = 1; j <= 10; j++) {
                if (mp[ch][j] == 1) {
                    if (last[j] == 0) {
                        cnt[j]++;
                        last[j] = 1;
                    }
                } else {
                    last[j] = 0;
                }
            }
        }

        for (int j = 1; j <= 10; j++) {
            cout << cnt[j] << (j == 10 ? '\n' : ' ');
        }
    }
}
