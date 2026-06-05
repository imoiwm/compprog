#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int t; cin>>t;
  while (t--) {
    int n, q; cin>>n>>q;
    vector<int> arr (1<<n);
    for (int i = 0; i < (1 << n); ++i) {
      cin>>arr[i];
    }
    for (int i = 0; i < q; ++i) {
      int b, c; cin>>b>>c;

