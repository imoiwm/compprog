#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int n,q;cin>>n>>q;
  vector<int> a(n+1, 0);
  vector<int> b(q+1, 0);
  int k = 0;
  for (int i = 0; i < q; ++i) {
    int t,val;cin>>t>>val;
    if (t == 1) {
      a[val]++;
      b[a[val]]++;
      if (b[a[val]] == n) {
        k = a[val];
      }
    } else {
      if (k + val > q) {
        cout << 0 << '\n';
      } else {
        cout << b[k+val] << '\n';
      }
    }
  }
  return 0;
}
