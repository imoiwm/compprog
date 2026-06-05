#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int t; cin>>t;
  while (t--) {
    int n, m, k; cin>>n>>m>>k;
    vector<int> arr (n);
    vector<int> spikes (m);
    for (int i = 0; i < n; ++i) {
      cin>>arr[i];
    }
    for (int i = 0; i < m; ++i) {
      cin>>spikes[i];
    }
    string s; cin>>s;
    int curr = 0;
    sort(arr.begin(), arr.end());
    sort(spikes.begin(), spikes.end());
    int j = 0;
    unordered_map<int, vector<int>> d;
    for (int i = 0; i < n; ++i) {
      while (j < m && spikes[j] < arr[i]) {
        j++;
      }
      if (j < m) {
        d[spikes[j] - arr[i]].push_back(i);
      }
      if (j > 0) {
        d[spikes[j - 1] - arr[i]].push_back(i);
      }
    }
    unordered_set<int> seen;
    int res = n;
    for (auto val : s) {
      if (val == 'R') {
        curr++;
      } else {
        curr--;
      }
      for (auto val : d[curr]) {
        if (!seen.count(val)) {
          seen.insert(val);
          res--;
        }
      }
      cout << res << ' ';
    }
    cout << '\n';
  }
  return 0;
}
      

