#include <bits/stdc++.h>
using namespace std;

int main ()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int i;
	int n, a1, a2;
	
	while (cin >> n) {
		int a[n+1]={}, b, t = 0;
		
		cin >> a1;
		
		for (i=1;i<n;i++) {
			cin >> a2;
			
			b = abs(a1-a2);
			
			if (a[b] == 0 && b >= 1 && b < n) {
				a[b] = 1;
				t++;
			}
			
			a1 = a2;
		}
		
		if (t == n - 1)
			cout << "Jolly" << endl;
		else
			cout << "Not jolly" << endl;
	}

	return 0;
}