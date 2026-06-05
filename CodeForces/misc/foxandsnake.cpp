#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  bool end = true;
  int n, m; cin>>n>>m;
  for (int i = 0; i < n; i++) {
    if (i % 2 == 1) {
      if (end) {
        for (int j = 0; j < m - 1; j++) {
          cout << '.';
        }
        cout << '#' << '\n';
        end = false;
      } else {
        cout << '#';
        for (int j = 1; j < m; j++) {
          cout << '.';
        }
        cout << '\n';
        end = true;
      }
    } else {
      for (int j = 0; j < m; j++) {
        cout << '#';
      }
      cout << '\n';
    }
  }
  return 0;
}
