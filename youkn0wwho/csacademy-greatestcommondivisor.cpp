#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int a, b; cin>>a>>b;
  int big = max(a, b);
  if (big % a == 0 && big % b == 0) {
    cout << min(a, b) << '\n';
    return 0;
  }
  int temp = min(a, b);
  while (big != temp) {
    if (big > temp) {
      big -= temp;
    } else {
      temp -= big;
    }
  }
  cout << big << '\n';
  return 0;
}
