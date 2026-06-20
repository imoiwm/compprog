#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int t; cin>>t;
  while (t--) {
    int n; cin>>n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
      cin>>a[i];
    }
    ll curr = a[0];
    for (int i = 1; i < n; ++i) {
      if (a[i] >= curr) {
        curr = a[i];
      } else {
        curr += a[i];
      }
    }
    cout << curr << '\n';
  }
  return 0;
}

