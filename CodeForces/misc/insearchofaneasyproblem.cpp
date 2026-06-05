#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int n; cin>>n;
  for (int i = 0; i < n; i++) {
    int temp; cin>>temp;
    if (temp == 1) {
      cout << "HARD" << '\n';
      return 0;
    }
  }
  cout << "EASY" << '\n';
  return 0;
}
