//As-salamu Alaikum**


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
//const int mx = 1e5+123;
ll pref[mx];
ll a[mx];
/*--------------------------------------------------------------------------------------------------------------------------*/

int main() {

    fastio();


    ll n; cin>>n;
   // int a[n+1] ;
    for (ll i = 1; i <= n; i++) cin>>a[i];
    sort(a, a+n+1);
    pref[0] = 1;
    for (ll i = 1; i <= n; i++) {
        if (pref[i-1] < a[i]) {
        cout<<pref[i-1];
        return 0;
        }
        pref[i] = pref[i-1] + a[i];
    }
    cout<<pref[n];


}
    