#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int t; cin>>t;
  while (t--) {
    int n; cin>>n;
    vector<vector<int>> arr(n, vector<int>());
    for (int i = 0; i < n; ++i) {
      int l; cin>>l;
      for (int j = 0; j < l; ++j) {
        int temp; cin>>temp;
        arr[i].push_back(temp);
      }
    }


