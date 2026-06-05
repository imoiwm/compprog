#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int t; cin>>t;
  while (t--) {
    string s; cin>>s;
    vector<int> res;
    for (int i = 0; i < s.length(); i++) {
      if (s[i] != '0') {
        res.push_back((s[i] - '0') * pow(10, s.length() - i - 1));
      }
    }
    cout << res.size() << '\n';
    for (auto val : res) {
      cout << val << ' ';
    }
    cout << '\n';
  }
  return 0;
}
