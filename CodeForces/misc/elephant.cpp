#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int x; cin>>x;
  if (x <= 5) {
    cout << 1 << '\n';
    return 0;
  }
  int curr = 0;
  int res = 0;
  cout << ((x - 1) / 5) + 1 << '\n';
  return 0;
}
