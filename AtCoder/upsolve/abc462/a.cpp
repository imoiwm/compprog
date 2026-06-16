#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  string s; cin>>s;
  string res = "";
  for (auto c : s) {
    if ((c - '0') <= 9) {
      res += c;
    }
  }
  cout << res << '\n';
  return 0;
}
