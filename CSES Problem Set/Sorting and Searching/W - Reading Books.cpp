//BISMILLAH
#include<bits/stdc++.h>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef long long ll;
typedef long double ld;
template<typename T>using
ordered_set = tree<T , null_type , less<T> , rb_tree_tag , tree_order_statistics_node_update>;

#define sp " "
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define ha cout<<"yes"<<endl;
#define Ha cout<<"Yes"<<endl;
#define HA cout<<"YES"<<endl;
#define No cout<<"No"<<endl;
#define na cout<<"no"<<endl;
#define NA cout<<"NO"<<endl;
#define in(v)   for(auto &x: v)cin>>x
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


/*----------------------------------------------------------------------------*/

int solve() {

    ll k=1,n=0,l,z=0,x=0,r,c=0,ans=0,sum=0,a,b,y;
    string s,s1,s2,s3;
    char ch,ch1,ch2,ch3,ch4;
    map<int,int>mp;
    cin >> n;
    vector<ll>v(n);
    in(v);
    ll m = *max_element(all(v));
    //cout << m <<ed;
    for(auto &i : v) sum += i;
    //cout << sum <<ed;
    cout << max(2*m,sum) <<ed;
    return 0;
}

int32_t main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
  
    int test = 1;
    //cin >> test;
    while(test--)
        solve();
    return 0;
}
    