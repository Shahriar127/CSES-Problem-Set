//bismillah

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define TC int t; cin>>t; while(t--)
#define ed '\n'

int main()
{
    FIO;
    
      ll n,x; cin>>n>>x;
      vector<ll>v(n);
      for(auto &i : v) cin>>i;
      sort(v.begin(),v.end());
      ll l=0;
      ll ans=0;
      for(ll r=n-1;r>=l;r--) {
        if(v[l] + v[r] <= x) l++;
        ans++;
      }
      cout<<ans<<ed;
    
}

    
 
    