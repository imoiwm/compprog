#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int t; cin>>t;
  while (t--) {
    string s; cin>>s;
    int res = 0, twos = 0;
    vector<int> suf (s.length() + 1);
    for (int i = s.length() - 1; i >= 0; --i) {
      suf[i] += suf[i + 1];
      if (s[i] == '1' || s[i] == '3') {
        suf[i]++;
      }
    }
    for (int i = 0; i < s.length(); ++i) {
      if (s[i] == '2') {
        twos++;
      }
      res = max(res, twos + suf[i]);
    }
    cout << s.length() - res << '\n';
  }
  return 0;
}

