//BISMILLAH
#include<bits/stdc++.h>
using namespace std;

#define sp " "
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define ed "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits(x) __builtin_popcountll(x)
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define TC int t; cin>>t; while(t--)

using ll = long long;
using ull = unsigned long long;
using lld = long double;
const int mx=2e5+13;

ll ind[mx];
ll a[mx];
/*--------------------------------------------------------------------------------------------------------------------------*/

int main() {

    fastio();
     int n; cin>>n;
     int x; cin>>x;

     set<ll>pos;
     pos.insert(0);
     pos.insert(n);

     multiset<ll>lt;
     lt.insert(n);

     
     for(int i=0;i<x;i++){
      int a; cin>>a;
      pos.insert(a);
      
      auto p = *prev(pos.find(a));
      auto n = *next(pos.find(a));
     // cout<<p<<sp<<n;

      int dis = n - p;
      lt.erase(lt.find(dis));

      lt.insert(a- p); lt.insert(n - a);
      cout<<*lt.rbegin()<<sp;

      //return 0;
     }

}
    