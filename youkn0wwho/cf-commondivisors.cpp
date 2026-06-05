#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int n; cin>>n;
  vector<ll> arr (n);
  ll hcf = 0;
  for (int i = 0; i < n; i++) {
    cin>>arr[i];
    hcf = gcd(hcf, arr[i]);
  }
  int res = 0;
  for (ll i = 1; i < sqrt(hcf); i++) {
    if (hcf % i == 0) {
      res += 2;
    }
  }
  ll curr = sqrt(hcf);
  curr *= sqrt(hcf);
  if (curr == hcf) {
    res++;
  }
  cout << res << '\n';
  return 0;
}
