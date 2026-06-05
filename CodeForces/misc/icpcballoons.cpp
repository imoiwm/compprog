#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int t; cin>>t;
  while (t--) {
    int n; cin>>n;
    vector<int> q (26, 0);
    string s; cin>>s;
    int res = 0;
    for (auto val : s) {
      if (q[val - 'A'] == 0) {
        res += 2;
      } else {
        res++;
      }
      q[val - 'A']++;
    }
    cout << res << '\n';
  }
  return 0;
}
