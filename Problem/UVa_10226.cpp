#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    bool flag = false;
    string name;

    cin >> n >> ws;
    while(n--){

        if(flag){
            cout << "\n";
        }

        flag = true;
        double sum = 0;
        map<string, int> mp;

        while(getline(cin, name) && name != ""){
            mp[name]++;
            sum++;
        }

        for (auto i: mp){
            cout << i.first << " " << fixed << setprecision(4) << (i.second / sum) * 100 << "\n";
        }
    }

    return 0;
}