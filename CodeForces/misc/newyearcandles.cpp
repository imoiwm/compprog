#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int a, b; cin>>a>>b;
  int used = a;
  int res = a;
  while (used >= b) {
    a = used / b;
    used %= b;
    res += a;
    used += a;
  }
  cout << res << '\n';
  return 0;
}

