#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  unordered_set<char> s = {'c','o','d','e','f','r','s'};
  int t; cin>>t;
  while (t--) {
    char c; cin>>c;
    if (s.count(c)) {
      cout << "YES" << '\n';
    } else {
      cout << "NO" << '\n';
    }
  }
  return 0;
}
