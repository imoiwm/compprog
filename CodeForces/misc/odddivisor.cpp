#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int t; cin>>t;
  while (t--) {
    ll n; cin>>n;
    while (n > 1) {
      if (n % 2 == 1) {
        cout << "YES" << '\n';
        break;
      }
      n /= 2;
    }
    if (n == 1) {
      cout << "NO" << '\n';
    }
  }
  return 0;
}
