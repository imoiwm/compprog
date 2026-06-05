#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int n; cin>>n;
  unordered_map<int, int> m;
  for (int i = 1; i <= 4; i++) {
    m[i] = 0;
  }
  for (int i = 0; i < n; i++) {
    int temp; cin>>temp;
    m[temp]++;
  }
  int res = m[4];
  if (m[3] > 0) {
    res += m[3];
    if (m[1] > 0) {
      if (m[1] > m[3]) {
        m[1] -= m[3];
      } else {
        m[1] = 0;
      }
    }
  }
  while (m[2] > 0 && m[1] > 0) {
    m[2]--;
    if (m[1] >= 2) {
      m[1] -= 2;
    } else if (m[1] == 1) {
      m[1]--;
    }
    res++;
  }
  res += m[2] / 2;
  if (m[2] % 2 == 1){
    res++;
  }
  res += m[1] / 4;
  if (m[1] % 4 != 0) {
    res++;
  }
  cout << res << '\n';
  return 0;
}
