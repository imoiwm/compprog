#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int n; cin>>n;
  int res = 0;
  for (int i = 0; i < n; i++) {
    int p, q; cin>>p>>q;
    if (q >= p + 2) {
      res++;
    }
  }
  cout << res << '\n';
  return 0;
}
