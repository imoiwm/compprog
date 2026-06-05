#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int k, r; cin>>k>>r;
  int curr = k;
  int res = 1;
  while (curr % 10 != r && curr % 10 != 0) {
    curr += k;
    res++;
  }
  cout << res << '\n';
  return 0;
}
