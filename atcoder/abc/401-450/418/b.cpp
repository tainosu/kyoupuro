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
  string S; cin >> S;
  int N = S.length();
  vs substr;

  rep(i, 0, N) {
    rep(j, i, N) {
      substr.push_back(S.substr(i, j - i + 1));
    }
  }

  double ans = 0; // 最大値で初期化
  rep(i, 0, substr.size()) {
    string sub = substr[i];
    int t_count = count(sub.begin(), sub.end(), 't');
    int sub_len = sub.length();
    
    if (sub_len >= 3 && sub[0] == 't' && sub[sub_len - 1] == 't') { // 長さが2以上の部分文字列のみ処理
      double ratio = (double)(t_count - 2) / (double)(sub_len - 2);
      ans = max(ans, ratio);
    }
  }

  // 出力精度を設定（10^-9まで）
  cout << fixed << setprecision(17) << ans << endl;
}