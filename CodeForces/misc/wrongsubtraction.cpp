#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  long long n, k; cin>>n>>k;
  for (int i = 0; i < k; i++) {
    if (n % 10 == 0) {
      n /= 10;
    } else {
      n--;
    }
  }
  cout << n << '\n';
  return 0;
}
