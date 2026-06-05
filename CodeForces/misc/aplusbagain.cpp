#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int t; cin>>t;
  while (t--) {
    int res = 0;
    int n; cin>>n;
    for (auto val : to_string(n)) {
      res += val - '0';
    }
    cout << res << '\n';
  }
  return 0;
}
