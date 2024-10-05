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
    ll n; cin>>n;
    vector<ll>v(n);
    int u = 1;
    map<ll,ll>mp;
    for(auto &i : v) {
        cin>>i;
        mp[i] = u;
        u++;
    }
    ll cnt = 1;
    ll aa = 1;
    for(int i = 1; i<= n ; i++){
        if(aa > mp[i]){
            cnt++ ;
        }
        aa = mp[i];
    }
    cout << cnt <<ed;
    //ll nc= distance(v.begin(),min_element(all(v)));
    //cout << nc <<ed;
    // for(ll i= nc - 1; i>= 0;i--) {
    //     if(v[i] > v[i + 1]) {
    //         cnt ++;
    //         v[i] = v[i + 1];
    //     }
    //     //v[i] = v[i + 1];
    // }
    // cout<<cnt<<ed;

}
    