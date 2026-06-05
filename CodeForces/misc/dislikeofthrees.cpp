#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  vector<int> res (1000);
  int i = 0;
  int curr = 1;
  while (i < 1000) {
    if (curr % 3 != 0 && curr % 10 != 3) {
      res[i] = curr;
      i++;
    }
    curr++;
  }
  int t; cin>>t;
  while (t--) {
    int k; cin>>k;
    cout << res[k - 1] << '\n';
  }
  return 0;
}

