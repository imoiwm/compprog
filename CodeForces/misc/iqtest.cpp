#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int n; cin>>n;
  int a = 0, b = 0;
  vector<int> arr (n);
  for (int i = 0; i < n; i++) {
    cin>>arr[i];
    if (arr[i] % 2 == 1) {
      a++;
    } else {
      b++;
    }
  }
  if (a == 1) {
    for (int i = 0; i < arr.size(); i++) {
      if (arr[i] % 2 == 1) {
        cout << i + 1 << '\n';
        break;
      }
    }
  } else {
    for (int i = 0; i < arr.size(); i++) {
      if (arr[i] % 2 == 0) {
        cout << i + 1 << '\n';
        break;
      }
    }
  }
  return 0;
}

