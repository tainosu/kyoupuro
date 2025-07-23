#include <bits/stdc++.h>
using namespace std;

// alias
using ll = long long;

using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;

// rep macro
#define rep(var, a, b)  for(auto var = (a); var < (b); var++)
#define rrep(var, a, b)  for(auto var = a - 1; var >= (b); var--)

int main() {
  int N, L, R;  cin >> N >> L >> R;
  int ans = 0;
  rep(i, 0, N) {
    int X, Y; cin >> X >> Y;
    if (X <= L && Y >= R) {
      ans++;
    }
  }
  cout << ans << endl;
}