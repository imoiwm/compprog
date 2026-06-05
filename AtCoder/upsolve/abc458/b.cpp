#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int h, w; cin>>h>>w;
  vector<vector<int>> arr (h, vector<int>(w, 0));
  vector<vector<int>> diffs = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
  for (int i = 0; i < h; ++i) {
    for (int j = 0; j < w; ++j) {
      for (auto d : diffs) {
        int x = i + d[0], y = j + d[1];
        if (x >= 0 && x < h && y >= 0 && y < w) {
          arr[i][j]++;
        }
      }
    }
  }
  for (int i = 0; i < h; ++i) {
    for (int j = 0; j < w - 1; ++j) {
      cout << arr[i][j] << ' ';
    }
    cout << arr[i][w - 1] << '\n';
  }
  return 0;
}

