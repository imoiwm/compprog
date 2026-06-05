#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int x; cin>>x;
  int q; cin>>q;
  priority_queue<int> lt;
  priority_queue<int, vector<int>, greater<int>> gt;
  int med = x;
  for (int i = 0; i < q; ++i) {
    int a, b; cin>>a>>b;
    if (a <= 
    arr.push_back(a);
    arr.push_back(b);
    sort(arr.begin(), arr.end());
    cout << arr[arr.size() / 2] << '\n';
  }
  return 0;
}
