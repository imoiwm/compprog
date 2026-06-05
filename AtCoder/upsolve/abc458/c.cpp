#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  string s; cin>>s;
  ll res = 0;
  for (size_t i = 0; i < s.length(); ++i) {
    if (s[i] == 'C') {
      res += min(s.length() - i, i + 1);
    }
  }
  cout << res << '\n';
  return 0;
}
