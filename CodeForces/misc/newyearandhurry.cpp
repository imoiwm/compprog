#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int n, k; cin>>n>>k;
  k = 240 - k;
  int res = 0;
  int i = 1;
  while (k >= 5 * i && i <= n) {
    k -= 5 * i;
    i++;
    res++;
  }
  cout << res << '\n';
  return 0;
}
