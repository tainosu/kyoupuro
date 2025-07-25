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
  int Q; cin >> Q;
  // 追加クエリをqueueで管理
  queue<pair<ll, ll>> A;
  while(Q--) {
    int type; cin >> type;
    if (type == 1) {
      ll c, x; cin >> c >> x;
      A.emplace(c, x);
    } else {
      ll k; cin >> k;
      ll sum = 0;
      while(!A.empty() && A.front().first <= k) {
        sum += A.front().first * A.front().second;
        k -= A.front().first;
        A.pop();
      }
      if (k != 0) {
        A.front().first -= k;
        sum += k * A.front().second;
      }
      cout << sum << endl;
    }
  }
}