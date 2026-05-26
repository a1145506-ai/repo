#include <iostream>
using namespace std;

int main()
{
    int n, m;
    while (cin >> n >> m)
    {
        bool out = true;
        int a[100], num;
        num = a[1] = n;
        int i = 2;
        if (m==1||n==1)
        {
            cout<<"Boring!"<<endl;continue;
        }
        while (num != 1)
        {
            if (num % m == 0)
            {
                num = a[i] = num / m;
                i += 1;
            }
            else
            {
                cout << "Boring!" << endl;
                out = false;
                break;
            }
        }
        if (out)
        {
            cout<<a[1];
            for (int j = 2; j <= i - 1; j++)
            {
                cout<< " " << a[j] ;
            }
            cout << endl;
        }

        
    }
}