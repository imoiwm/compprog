#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int d, f; cin>>d>>f;
  int curr = f;
  while (curr <= d) {
    curr += 7;
  }
  cout << curr % d << '\n';
  return 0;
}
