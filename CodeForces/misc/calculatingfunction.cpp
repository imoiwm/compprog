#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  long long n; cin>>n;
  long long res = 0;
  if (n % 2 == 0) {
    res = (n / 2);
  } else {
    res = (n / 2) - n;
  }
  cout << res << '\n';
  return 0;
}
