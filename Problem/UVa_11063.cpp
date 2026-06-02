#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main(){
	ll n;
	ll nn=0;
	while(cin>>n){
		nn++;
		vector<ll>v;
		set<ll>s;
		ll flag =0;
		for(ll i=0;i<n;++i){
			ll tt;
			cin>>tt;
			v.push_back(tt);
		}
		for(ll i=0;i<n;++i){
			for(ll j=i;j<n;++j){
				ll temp=v[i]+v[j];
				if(s.count(temp)){
					flag=1;
					break;
				}
				s.insert(temp);
			}
		}
		if(flag!=0){
			cout<<"Case #"<<nn<<": It is not a B2-Sequence."<<endl;
		}
		else{
			cout<<"Case #"<<nn<<": It is a B2-Sequence."<<endl;
		}
	}
}
