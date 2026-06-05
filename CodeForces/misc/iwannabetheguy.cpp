#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int n; cin>>n;
  int p; cin>>p;
  vector<int> lvls (n, 0);
  for (int i = 0; i < p; i++) {
    int temp; cin>>temp;
    lvls[temp - 1]++;
  }
  int q; cin>>q;
  for (int i = 0; i < q; i++) {
    int temp; cin>>temp;
    lvls[temp - 1]++;
  }
  for (auto val : lvls) {
    if (val == 0) {
      cout << "Oh, my keyboard!" << '\n';
      return 0;
    }
  }
  cout << "I become the guy." << '\n';
  return 0;
}
