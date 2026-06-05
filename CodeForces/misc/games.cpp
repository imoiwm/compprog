#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int n; cin>>n;
  unordered_map<int, int> home;
  unordered_map<int, int> away;
  int res = 0;
  for (int i = 0; i < n; i++) {
    int a, b; cin>>a>>b;
    if (!home.count(a)) {
      home[a] = 0;
    }
    home[a]++;
    if (!away.count(b)) {
      away[b] = 0;
    }
    away[b]++;
  }
  for (auto i : home) {
    if (away.count(i.first)) {
      res += i.second * away[i.first];
    }
  }
  cout << res << '\n';
  return 0;
}

