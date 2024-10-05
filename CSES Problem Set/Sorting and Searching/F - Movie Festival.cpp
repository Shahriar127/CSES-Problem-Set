#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

bool cmp(const pair<int, int> &a,
         const pair<int, int> &b)
{

      return (a.second < b.second);
}

int main()
{

      // fastio();
      ll n;
      cin >> n;
      vector<pair<ll, ll>> p;
      for (ll i = 0; i < n; i++)
      {
            ll a, b;
            cin >> a >> b;
            p.push_back(make_pair(a, b));
      }
      sort(p.begin(), p.end(), cmp);
      ll aa = p[0].second;
      ll ans = 1;
      for (ll i = 1; i < n; i++)
      {
            if (p[i].first >= aa)
            {
                  ans++;
                  aa = p[i].second;
            }
      }
      cout << ans << endl;
}