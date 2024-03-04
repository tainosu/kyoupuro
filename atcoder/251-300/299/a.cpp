#include <bits/stdc++.h>
using namespace std;

// alias
using ll = long long;
using vi = vector<int>;

int main() {
    int N;  cin >> N;
    string S;   cin >> S;
    string ans = "out";
    for (int i = 0; i < N; i++) {
        if (S[i] == '|') {
            if (ans == "out")   ans = "in";
            else    ans = "out";
        } else {
            if (S[i] == '*' && ans == "in")    break;
        }   
    }
    cout << ans << endl;
}