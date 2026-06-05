#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int a, b; cin>>a>>b;
  int same = 0, diff = 0;
  if (a < b) {
    same += a;
    b -= a;
    a = 0;
  } else {
    same += b;
    a -= b;
    b = 0;
  }
  if (a != 0) {
    diff += a / 2;
  } else if (b != 0) {
    diff += b / 2;
  }
  cout << same << ' ' << diff << '\n';
  return 0;
}
