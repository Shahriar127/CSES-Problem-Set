#include <bits/stdc++.h>
using namespace std;
int main()
{
      ios_base::sync_with_stdio(0);
      cin.tie(0);
      int n;
      cin >> n;
      // vector<int>v(n+1);
      set<int> cnt;
      for (int i = 0; i < n; i++)
      {
            // cin>>v[i];
            int a;
            cin >> a;
            cnt.insert(a);
      }
      cout << cnt.size() << endl;
      return 0;
}
