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
     int k;  cin>>k;
     vector<int>v(n);
     for(int i=0; i<n; i++){
        cin >> v[i];
     }
     int ans = 0;
     map<int, pair<int,int > >mp;
     for(int i=0; i<n; i++){
        for(int j=i+1; j < n; j++){
            int cal = k - v[i] -v[j];
            if(mp.find(cal) != mp.end()){
                cout<< mp[cal].first + 1 <<sp<< i+1 <<sp<<mp[cal].second + 1<<sp<<j + 1 ;
                return 0;
            }
        }
        for(int j = 0; j < i; j++) mp[v[i] + v[j]] = {i , j};
     }
     cout<< "IMPOSSIBLE" <<ed;

}
    