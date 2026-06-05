#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int a, b;
  cin>>a>>b;
  
  cout << "floor " << a << " / " << b << " = " << a / b << '\n';
  if (a % b != 0) {
    cout << "ceil " << a << " / " << b << " = " << (a / b) + 1 << '\n';
  } else {
    cout << "ceil " << a << " / " << b << " = " << a / b << '\n';
  }
  if (a % b > (b - 1) / 2) {
    cout << "round " << a << " / " << b << " = " << (a / b) + 1 << '\n';
  } else {
    cout << "round " << a << " / " << b << " = " << a / b << '\n';
  }
  return 0;
}
