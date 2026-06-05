#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int h, w; cin>>h>>w;
  ll unsigned res = 0;
  vector<string> grid(h);
  for (int i = 0; i < h; ++i) {
    cin>>grid[i];
  }
  for (int i = 1; i <= h; ++i) {
    for (int j = 1; j <= w; ++j) {
      for (int k = 0; k <= h - i; ++k) {
        for (int l = 0; l <= w - j; ++l) {
          bool flag = true;
          for (int m = k; m < k + i; ++m) {
            for (int o = l; o < l + j; ++o) {
              if (grid[m][o] != grid[k + (k + i - 1) - m][l + (l + j - 1) - o]) {
                flag = false;
              }
            }
          }
          if (flag) {
            res++;
          }
        }
      }
    }
  }
  cout << res << '\n';
  return 0;
}
                

          
