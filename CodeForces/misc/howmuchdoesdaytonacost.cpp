#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int t; cin>>t;
  while (t--) {
    int n, k; cin>>n>>k;
    bool flag = true;
    for (int i = 0; i < n; i++) {
      int temp; cin>>temp;
      if (temp == k) {
        flag = false;
      }
    }
    if (flag) {
      cout << "NO" << '\n';
    } else {
      cout << "YES" << '\n';
    }
  }
  return 0;
}

