#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int n, m, a, b; cin>>n>>m>>a>>b;
  int res = 0;
  int amt = n / m;
  res += min(amt * b, (amt * m) * a);
  n -= amt * m;
  res += min(b, n * a);
  cout << res << '\n';
  return 0;
}

