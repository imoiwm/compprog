#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int t; cin>>t;
  while (t--) {
    int a, b; cin>>a>>b;
    int res = 0;
    while (a != b) {
      if (abs(a - b) <= 10) {
        res++;
        a = b;
      } else if (a < b) {
        int curr = b - a;
        res += curr / 10;
        a += (curr / 10) * 10;
      } else {
        int curr = a - b;
        res += curr / 10;
        a -= (curr / 10) * 10;
      }
    }
    cout << res << '\n';
  }
  return 0;
}
