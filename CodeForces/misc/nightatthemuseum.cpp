#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  string s; cin>>s;
  int curr = 0;
  int res = 0;
  for (auto val : s) {
    int temp = val - 'a';
    if (temp != curr) {
      if (temp < curr) {
        res += min(curr - temp, (26 - curr) + temp);
      } else {
        res += min(temp - curr, curr + (26 - temp));
      }
      curr = val - 'a';
    }
  }
  cout << res << '\n';
  return 0;
}
