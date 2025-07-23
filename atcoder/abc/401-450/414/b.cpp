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
  int N; cin >> N;
  string ans;
  ll cnt = 0;
  rep(_, 0, N) {
    char c; cin >> c;
    ll num; cin >> num;
    if (cnt + num <= 100) {
      ans += string(num, c);
    } else {
      cout << "Too Long" << endl;
      return 0;
    }
    cnt += num;
  }
  cout << ans << endl;
}