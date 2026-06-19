#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int n, d; cin>>n>>d;
  ll res = 0;
  vector<int> sus(1e6+1,0);
  for (int i = 0; i < n; ++i) {
    int s, t; cin>>s>>t;
    if (t - s >= d) {
      sus[s]++;
      sus[t - d + 1]--;
    }
  }
  ll curr = 0;
  for (size_t i = 0; i < sus.size(); ++i) {
    curr += sus[i];
    ll temp = curr;
    temp *= (curr - 1);
    temp /= 2;
    res += temp;
  }
  cout << res << '\n';
  return 0;
}

