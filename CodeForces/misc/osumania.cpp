#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int t; cin>>t;
  while (t--) {
    int n; cin>>n;
    vector<int> res (n);
    int idx = 0;
    for (int i = 0; i < n; i++) {
      string s; cin>>s;
      for (int j = 0; j < s.length(); j++) {
        if (s[j] == '#') {
          res[idx] = (j + 1);
          idx++;
        }
      }
    }
    for (int i = n - 1; i >= 0; i--) {
      cout << res[i] << ' ';
    }
    cout << '\n';
  }
  return 0;
}
