#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false), cin.tie(nullptr);
    
    int T;
    cin >> T;
    
    int monthDays[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    string weekDays[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    
    int startDay = 6;
    
    for (int i = 0; i < T; ++i){
        int M, D;
        cin >> M >> D;
        
        int dayPassed = 0;
        for (int m = 1; m < M; ++m){
            dayPassed += monthDays[m];
        }
        dayPassed += (D - 1);
        
        int weekDay = (startDay + dayPassed) % 7;
        
        cout << weekDays[weekDay] << '\n';
    }
    
    return 0;
}
