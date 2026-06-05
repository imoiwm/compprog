#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int t; cin>>t;
  while (t--) {
    string s; cin>>s;
    vector<int> count (26, 0);
    for (auto c : s) {
      count[c - 'a']++;
    }
    bool flag = true;
    for (auto p : count) {
      if (p > (s.length() + 1) / 2) {
        flag = false;
        break;
      }
    }
    if (flag) {
      cout << "Yes" << '\n';
      

    } else {
      cout << "No" << '\n';
    }
  }
  return 0;
}
