#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int flag=0;
    while(getline(cin,s))
    {
        int table[256]={0};
        for(int i=0;i<s.length();i++){
            table[s[i]]++;}
        if(flag) cout<<"\n";
        for(int i=1;i<=s.length();i++)
        {
            for(int j=127;j>=32;j--)
            {
                if(table[j]==i)
                    cout<<j<<" "<<i<<"\n";
            }
        }
        flag=1;
    }
    return 0;
}