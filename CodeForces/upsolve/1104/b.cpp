#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int t; cin>>t;
  while (t--) {
    int n; cin>>n;
    int res = 0;
    vector<int> a(n), c(n);
    set<int> b;
    for (int i = 0; i < n; ++i) {
      cin>>a[i];
    }
    for (int i = 0; i < n; ++i) {
      int temp; cin>>temp;
      b.insert(temp);
    }
    bool flag = true;
    for (int i = 0; i < n; ++i) {
      auto it = b.lower_bound(a[i]);
      if (it == b.end()) {
        flag = false;
        break;
      }
      c[i] = *it;
      b.erase(it);
    }

    if (!flag) {
      cout << -1 << '\n';
      continue;
    }

    for (int i = 0; i < n; ++i) {
      for (int j = i + 1; j < n; ++j) {
        if (c[i] > c[j]) {
          res++;
        }
      }
    }
    cout << res << '\n';
  }
  return 0;
}
    

