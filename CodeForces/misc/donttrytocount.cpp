#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int t; cin>>t;
  while (t--) {
    int n, m; cin>>n>>m;
    string s, r; cin>>s>>r;
    int res = 0;
    bool flag = true;
    for (int i = 0; i < 6; ++i) {
      if (s.find(r) != string::npos) {
        flag = false;
        break;
      }
      s += s;
      res++;
    }
    if (flag) {
      cout << -1 << '\n';
    } else {
      cout << res << '\n';
    }
  }
  return 0;
}
