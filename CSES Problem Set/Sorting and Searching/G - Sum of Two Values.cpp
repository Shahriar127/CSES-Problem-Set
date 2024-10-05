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
   
    ll cnt=0,count=0,ans=0,f=0,sum=0,d=0,n=0,x,y;
    ll a,k; cin>>n>>k;
    vector<pair<ll,ll>>v;
    for(int i=0;i<n;i++){
        cin>>a;
        v.push_back({a,i});
    }
    sort(v.begin(),v.end());
    ll l=0,r=n-1;
    while(l<r){
        if(v[l].first+v[r].first==k){
            cout<<v[l].second+1<<" "<<v[r].second+1<<ed;
            return 0;
        }
        else if(v[l].first+v[r].first<k) l++;
        else r--;
    }
    cout<<"IMPOSSIBLE"<<ed;
   
    return 0;
}
