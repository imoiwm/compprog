#include <bits/stdc++.h>

using namespace std;

#define ll long long

void puyo(stack<int> &s) {
  if (s.size() >= 4) {
    vector<int> arr(4);
    for (int i = 0; i < 4; ++i) {
      arr[i] = s.top();
      s.pop();
    }
    if (arr[0] == arr[1] && arr[1] == arr[2] && arr[2] == arr[3]) {
      puyo(s);
    } else {
      for (int i = arr.size() - 1; i >= 0; --i) {
        s.push(arr[i]);
      }
    }
  }
}

int main() {
  int n; cin>>n;
  stack<int> s;
  for (int i = 0; i < n; ++i) {
    int temp; cin>>temp;
    s.push(temp);
    if (s.size() >= 4) {
      puyo(s);
    }
  }
  cout << s.size() << '\n';
  return 0;
}
