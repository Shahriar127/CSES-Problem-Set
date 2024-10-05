#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n; cin>>n;
	map<int,int>mp;
	while(n--){
		int a,b; cin>>a>>b;
		mp[a]++;
		mp[b]--;
	}
	int ans=0,mx=0;
	for(auto u : mp){
		ans+=u.second;
		mx=max(ans,mx);
	}
	cout<<mx<<endl;
      return 0;
}