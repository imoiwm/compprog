#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int y, w; cin>>y>>w;
  int res = 6 - max(y, w) + 1;
  if (res == 2) {
    cout << "1/3" << '\n';
  } else if (res == 3) {
    cout << "1/2" << '\n';
  } else if (res == 4) {
    cout << "2/3" << '\n';
  } else if (res == 6) {
    cout << "1/1" << '\n';
  } else {
    cout << res << "/6" << '\n';
  }
  return 0;
}
