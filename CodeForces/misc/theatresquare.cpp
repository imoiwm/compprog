#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int n, m, a; cin>>n>>m>>a;

  ll res = 0;
  res += n / a;
  if (n % a != 0) {
    res++;
  }
  ll b = m / a;
  if (m % a != 0) {
    b++;
  }
  res *= b;
  cout << res << '\n';
  return 0;
}
