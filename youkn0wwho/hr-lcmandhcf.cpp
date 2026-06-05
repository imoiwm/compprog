#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int t; cin>>t;
  while (t--) {
    ll a, b;
    ll lcm, hcf;
    cin>>a>>b;
    int big = max(a, b);
    if (big % a == 0 && big % b == 0) {
      hcf = min(a, b);
    } else {
      int temp = min(a, b);
      while (big != temp) {
        if (big > temp) {
          big -= temp;
        } else {
          temp -= big;
        }
      }
      hcf = temp;
    }
    lcm = (a / hcf);
    lcm *= b;
    cout << lcm << ' ' << hcf << '\n';
  }
  return 0;
}
