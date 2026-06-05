#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int t; cin>>t;
  while (t--) {
    ll n; cin>>n;
    int res = 0;
    while (n > 1) {
      if (n % 3 != 0) {
        res = -1;
        break;
      }
      if (n % 6 == 0) {
        res++;
        n /= 6;
      } else {
        res++;
        n *= 2;
      }
    }
    cout << res << '\n';
  }
  return 0;
}
