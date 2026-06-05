#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int n, m; cin>>n>>m;
  int res = 0;
  while (m != 0) {
    m = n % m;
    res++;
  }
  cout << res << '\n';
  return 0;
}
