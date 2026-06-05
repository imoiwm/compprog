#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int n, m; cin>>n>>m;
  if (min(n, m) % 2 == 0) {
    cout << "Malvika" << '\n';
  } else {
    cout << "Akshat" << '\n';
  }
  return 0;
}
