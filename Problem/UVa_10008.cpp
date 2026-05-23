#include <bits/stdc++.h>
using sp=std::pair<char,int>;
int main()
{
  int n;
  std::cin>>n;
  std::cin.ignore();
  std::string s;
  std::map<char, int> mp;
  
  while(getline(std::cin,s)){
    std::stringstream sin(s);
    char c;
    
    while(sin>>c)
      if(std::isalpha(c))
        mp[std::toupper(c)]++;
  }
  
  std::vector<sp> vec(mp.begin(),mp.end());
  std::sort(vec.begin(),vec.end(),
  			[](const sp&a, const sp&b){
  			   if(a.second!=b.second)
  			 	return a.second>b.second;
  			   return b.first>a.first;
  			 });
  
  for(auto i:vec)
    std::cout<<i.first<<" "
    		 <<i.second<<"\n";
}
