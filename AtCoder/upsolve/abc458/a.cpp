#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  string s; cin>>s;
  int n; cin>>n;
  string res = "";
  for (int i = n; i <s.length() - n; ++i) {
    res += s[i];
  }
  cout  << res << '\n';
  return 0;
}
