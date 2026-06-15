#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int t; cin>>t;
  while (t--) {
    ll a,b,x; cin>>a>>b>>x;
    vector<int> arra(1,a);
    vector<int> arrb(1,b);
    while (a > 0) {
      a /= x;
      arra.push_back(a);
    }
    while (b > 0) {
      b /= x;
      arrb.push_back(b);
    }
    int res = 1e9;
    for (int i = 0; i < arra.size(); ++i) {
      for (int j = 0; j < arrb.size(); ++j) {
        res = min(res, abs(arra[i] - arrb[j]) + i + j);
      }
    }
    cout << res << '\n';
  }
  return 0;
}

