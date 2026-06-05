#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int n, h; cin>>n>>h;
  int res = 0;
  for (int i = 0; i < n; i++) {
    int temp; cin>>temp;
    if (temp > h) {
      res += 2;
    } else {
      res++;
    }
  }
  cout << res << '\n';
  return 0;
}
