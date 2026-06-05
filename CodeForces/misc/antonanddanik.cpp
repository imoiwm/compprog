#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int n; cin>>n;
  string s; cin>>s;
  int a = 0, d = 0;
  for (auto val : s) {
    if (val == 'A') {
      a++;
    } else {
      d++;
    }
  }
  if (d > a) {
    cout << "Danik" << '\n';
  } else if (d == a) {
    cout << "Friendship" << '\n';
  } else {
    cout << "Anton" << '\n';
  }
  return 0;
}
