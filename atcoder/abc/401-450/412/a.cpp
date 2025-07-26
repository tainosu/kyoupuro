#include <bits/stdc++.h>
using namespace std;

// alias
using ll = long long;

using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vs = vector<string>;

// rep macro
#define rep(var, a, b)  for(auto var = (a); var < (b); var++)
#define rrep(var, a, b)  for(auto var = a - 1; var >= (b); var--)

int main() {
  int N; cin >> N;
  int ans = 0;
  rep(_, 0, N) {
    int A, B; cin >> A >> B;
    if (A < B) {
      ans++;
    }
  }
  cout << ans << endl;
}