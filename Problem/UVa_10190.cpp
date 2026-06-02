#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n,m;
    while(cin>>n>>m){
        if(n<2||m<2||n<m){
            cout<<"Boring!"<<endl;
            continue;
        }
        vector<long long> result;
        bool possible=true;
        long long int temp=n;
        while(temp>1){
            if(temp%m!=0){
                possible=false;
                break;
            }
            result.push_back(temp);
            temp/=m;
        }
        result.push_back(1);
        if(possible){
            for(int i=0;i<result.size();i++){
                cout<<result[i];
                if(i==result.size()-1){
                    cout<<endl;
                }
                else
                    cout<<" ";
            }
        }
        else
            cout<<"Boring!"<<endl;
    }
}