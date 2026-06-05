#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int n; cin>>n;
  int res = 0;
  int total = 0;
  for (int i = 0; i < n; i++) {
    int temp; cin>>temp;
    if (temp > 0) {
      total += temp;
    } else {
      if (total > 0) {
        total--;
      } else {
        res++;
      }
    }
  }
  cout << res << '\n';
  return 0;
}

