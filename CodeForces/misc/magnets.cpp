#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int n; cin>>n;
  int res = 1;
  int temp; cin>>temp;
  int pole = temp % 10;
  for (int i = 1; i < n; i++) {
    cin>>temp;
    if (temp % 10 != pole) {
      res++;
      pole = !pole;
    }
  }
  cout << res << '\n';
  return 0;
}
