#include <iostream>
using namespace std;

int main(){
	int i, j;
	int n, l;

	cin >> n;

	while (n > 0) {
		cin >> l;

		int train[l], t = 0;

		for (i = 0; i < l; i++)
			cin >> train[i];

		for (i = 0; i < l; i++) {
			for (j = 0; j < l - i - 1; j++) {
				if (train[j] > train[j + 1]) {
					swap(train[j], train[j + 1]);
					t++;
				}
			}
		}

		cout << "Optimal train swapping takes " << t << " swaps." << endl;

		n--;
	}

	return 0;
}