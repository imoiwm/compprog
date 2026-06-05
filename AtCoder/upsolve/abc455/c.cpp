#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int n, k; cin>>n>>k;
  unordered_map<int, ll unsigned> sums;
  ll unsigned res = 0;
  for (int i = 0; i < n; ++i) {
    int temp; cin>>temp;
    sums[temp] += temp;
    res += temp;
  }
  priority_queue<ll unsigned> pq;
  for (auto p : sums) {
    pq.push(p.second);
  }
  int m = pq.size();
  for (int i = 0; i < min(m, k); ++i) {
    res -= pq.top();
    pq.pop();
  }
  cout << res << '\n';
  return 0;
}
  
