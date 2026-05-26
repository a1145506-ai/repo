#include <bits/stdc++.h>
using namespace std;

int main ()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int i;
	int n;
	
	cin >> n;
	
	while (n > 0) {
		int r, home, t = 0;
		
		cin >> r;
		
		int s[r];
		
		for (i=0;i<r;i++)
			cin >> s[i];
			
		sort(s, s + r);
		
		if (r % 2 == 1)
			home = s[r/2];
		else
			home = (s[r/2-1] + s[r/2]) / 2;
			
		for (i=0;i<r;i++)
			t += abs(home - s[i]);
			
		cout << t << endl;
		
		n--;
	}

	return 0;
}