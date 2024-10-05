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

int main() {
    fastio();
    int n, k;
    cin >> n >> k;
    
    vector<pair<ll, int>> v;  
    int u = 1;
    
    for(int i = 0; i < n; i++) {
        ll x;
        cin >> x;
        v.push_back({x, u});
        u++;
    }

    sort(v.begin(), v.end());

    
    for(int i = 0; i < n; i++) {
        int l = 0, h = n - 1;

        while(l != h) {
            ll X = k - v[i].first;

            if(l!=i && h!=i && v[l].first + v[h].first == X) {
                cout << v[l].second << sp << v[h].second <<sp<< v[i].second << ed;
                return 0;
            } 
            else if(v[l].first + v[h].first < X) l++;
            else  h--;
        }
    }

    cout << "IMPOSSIBLE" << ed;
}
