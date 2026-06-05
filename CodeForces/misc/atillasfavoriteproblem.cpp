#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int t; cin>>t;
  while (t--) {
    int n; cin>>n;
    string s; cin>>s;
    int res = 0;
    for (auto val : s) {
      res = max(res, val - 'a' + 1);
    }
    cout << res << '\n';
  }
  return 0;
}
