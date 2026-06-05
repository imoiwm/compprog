#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int t; cin>>t;
  while (t--) {
    string s; cin>>s;
    string c = "codeforces";
    int res = 0;
    for (int i = 0; i < s.length(); i++) {
      if (s[i] != c[i]) {
        res++;
      }
    }
    cout << res << '\n';
  }
  return 0;
}
