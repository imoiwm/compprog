#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int t; cin>>t;
  while (t--) {
    char a, b, c;
    cin>>a>>b>>c;
    if (a == 'a' && b == 'b' && c == 'c') {
      cout << "YES" << '\n';
    } else if (a == 'c' && c == 'a') {
      cout << "YES" << '\n';
    } else if (a == 'b' && b == 'a') {
      cout << "YES" << '\n';
    } else if (b == 'c' && c == 'b') {
      cout << "YES" << '\n';
    } else {
      cout << "NO" << '\n';
    }
  }
  return 0;
}
