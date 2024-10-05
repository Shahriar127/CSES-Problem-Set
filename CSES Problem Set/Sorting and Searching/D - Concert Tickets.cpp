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
    int n,m; cin>>n>>m;
    //vector<ll>v(n),vv(m);
    //sort(v.begin(),v.end());
    multiset<ll,greater<ll>>mp;
    for(int i=0;i<n;i++){
        int a; cin>>a;
        mp.insert(a);
    }
    for(int i=0;i<m;i++){
        int a; cin>>a;
        auto it = mp.lower_bound(a);
        if(it == mp.end()) cout<<-1<<ed;
        else cout<<*it<<ed , mp.erase(it);
    }
}


// 8 7 5 5 3
//4 8 3 
 
    