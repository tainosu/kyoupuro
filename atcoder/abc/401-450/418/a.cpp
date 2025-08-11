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
  string S; cin >> S;

  if (S[N - 3] == 't' && S[N - 2] == 'e' && S[N - 1] == 'a') {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}