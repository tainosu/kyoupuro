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
    int N;  cin >> N;
    vvi A(N, vi(N));
    rep(i, 0, N) rep(j, 0, N) cin >> A[i][j];
    vvi B(N, vi(N));
    rep(i, 0, N) rep(j, 0, N) cin >> B[i][j];

    vvi rotatedA(N, vi(N));
    // ３回転させれば全パターン確認可能
    rep(_, 0, 4){
        bool ok = true;
        rep(i, 0, N) rep(j, 0, N) {
            if(A[i][j] == 1 && B[i][j] != 1) ok = false;
        }
        if(ok){
            cout << "Yes" << endl;
            return 0;
        }
        rep(i, 0, N) rep(j, 0, N) rotatedA[N-j-1][i] = A[i][j];
        rep(i, 0, N) rep(j, 0, N) A[i][j] = rotatedA[i][j];
    }
    cout << "No" << endl;
}