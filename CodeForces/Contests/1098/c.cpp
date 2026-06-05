#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int t; cin>>t;
  while (t--) {
    string a;
    int n;
    cin>>a>>n;
    vector<int> digits (n);
    unordered_set<int> seen;
    int res;
    string curr = "";
    for (int i = 0; i < n; ++i) {
      cin>>digits[i];
      seen.insert(digits[i]);
    }
    int idx = 0;
    while (seen.contains(a[idx])) {
      curr += a[idx];
      idx++;
    }

