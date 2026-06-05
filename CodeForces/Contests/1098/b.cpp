#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int t;cin>>t;
  while (t--) {
    int n, rei, rem, k; cin>>n>>rei>>rem>>k;
    int diff;
    int a = abs(rei - rem), b;
    if (rei > rem) {
      b = (n - rei) + rem;
      diff = min(a, b);
    } else {
      b = (n - rem) + rei;
      diff = min(a, b);
    }
    if (n > 3) {
      cout << diff + k << '\n';
    } else {
      cout << 1 << '\n';
    }
  }
  return 0;
}

