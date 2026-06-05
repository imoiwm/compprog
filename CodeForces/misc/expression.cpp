#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int a, b, c; cin>>a>>b>>c;
  int x = a + b + c, y = max(x, (a + b) * c), z = max(y, a * (b + c)), k = max(z, a * b * c);
  cout << k << '\n';
  return 0;
}
