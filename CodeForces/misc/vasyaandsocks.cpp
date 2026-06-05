#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int n, m; cin>>n>>m;
  int res = 0;
  while (n >= m) {
    res += m;
    n -= m;
    n++;
  }
  res += n;
  cout << res << '\n';
  return 0;
}
