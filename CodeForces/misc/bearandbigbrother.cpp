#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int a, b; cin>>a>>b;
  int res = 0;
  while (a <= b) {
    a *= 3;
    b *= 2;
    res++;
  }
  cout << res << '\n';
  return 0;
}
