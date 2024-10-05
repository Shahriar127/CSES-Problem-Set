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
//const int mx=2e5+13;

// ll ind[mx];
// ll a[mx];
/*--------------------------------------------------------------------------------------------------------------------------*/

int main() {

    fastio();
    ll n; cin >> n;
    vector<ll>v(n);
    for(auto &i : v) cin >> i;
    ll sum = 0;
    ll mx = INT_MIN;
    for(ll i = 0 ; i< n; i++){
        sum += v[i];
        mx = max ( sum , mx);
        if(sum < 0) sum = 0;
    }
    cout << mx <<ed;

}