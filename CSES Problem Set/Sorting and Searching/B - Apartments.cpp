#include <bits/stdc++.h>
using namespace std;
int main()
{
      ios_base::sync_with_stdio(0);
      cin.tie(0);
      int n, m, k;
      cin >> n >> m >> k;
      vector<int> v1, v2;
      for (int i = 0; i < n; i++)
      {
            int a;
            cin >> a;
            v1.push_back(a);
      }
      for (int i = 0; i < n; i++)
      {
            int b;
            cin >> b;
            v2.push_back(b);
      }
      // for(int i=0;i<m;i++) cin>>v2[i];
      // for(auto u : v1) cout<<u<<" ";
      sort(v1.begin(), v1.end());
      sort(v2.begin(), v2.end());
      int i = 0, j = 0, ans = 0;
      while (i < n && j < m)
      {
            if (abs(v1[i] - v2[j]) <= k)
            {
                  ++ans;
                  ++i;
                  ++j;
            }
            else
            {
                  if (v1[i] - v2[j] > k)
                        ++j;
                  else
                        ++i;
            }
      }
      cout << ans << endl;
      return 0;
}