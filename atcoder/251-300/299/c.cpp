#include <bits/stdc++.h>
using namespace std;

// alias
using ll = long long;

using vi = vector<int>;
using vl = vector<ll>;

// rep macro
#define rep(var, a, b)  for(auto var = (a); var < (b); var++)
#define rrep(var, a, b)  for(auto var = a - 1; var >= (b); var--)

int main() {
    int N;  cin >> N;
    string S;   cin >> S;

    int ans = -1;
    int level = 0;
    rep(i, 0, N){
        if(S[i] == '-'){
            level = 0;
        }else{
            level++;
            ans = max(ans, level);
        }
    }
    if(ans == N)    ans = -1;
    cout << ans << endl;
}