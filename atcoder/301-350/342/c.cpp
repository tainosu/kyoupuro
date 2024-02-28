#include <bits/stdc++.h>
#include <regex>
using namespace std;

int main() {
    unsigned N;  cin >> N;
    string str; cin >> str;
    unsigned Q;  cin >> Q;

    // 変換前と変換後の文字列を作る
    string from, to;
    from = to = "abcdefghijklmnopqrstuvwxyz";

    for (unsigned i = 0; i < Q; i++) {
        char c, d;
        cin >> c >> d;
        for (char &m : to) {
            if (m == c) {
                m = d;
            }
        }
    }
    //  変換前の文字列から変換後の文字列を求める
    for (const auto c : str) {
        for (unsigned i = 0; i < 26; i++) {
            if (c == from[i]) {
                cout << to[i];
            }
        }
    }
    cout << endl;
}