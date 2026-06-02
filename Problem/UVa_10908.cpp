#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
    int M, N, Q;
    cin >> M >> N >> Q;
    
    vector<string> grid(M);
    for (int i = 0; i < M; i++) {
        cin >> grid[i];
    }
    
    cout << M << " " << N << " " << Q << endl;
    
    while (Q--) {
        int r, c;
        cin >> r >> c;
        
        char center_char = grid[r][c]; 
        int max_len = 1;        
        for (int rad = 1; ; rad++) {
            bool is_valid = true;
            
            for (int i = r - rad; i <= r + rad; i++) {
                for (int j = c - rad; j <= c + rad; j++) {
                    
                   if (i < 0 || i >= M || j < 0 || j >= N) {
                        is_valid = false;
                        break;
                    }
                    if (grid[i][j] != center_char) {
                        is_valid = false;
                        break;
                    }
                }
                if (!is_valid) break;
            }
            
           if (is_valid) {
                max_len = 2 * rad + 1;
            } else {
                break;
            }
        }
        
        cout << max_len << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    
    return 0;
}