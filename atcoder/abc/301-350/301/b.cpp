#include <bits/stdc++.h>
using namespace std;

// alias
using ll = long long;
using vi = vector<int>;

int main() {
    int N;  cin >> N;
    vi A(N);
    vi ans;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    for (int i = 0; i < N; i++) {
        if (i == N - 1) {
            ans.push_back(A[i]);
            continue;
        }
        int dif = A[i+1] - A[i];
        if (abs(dif) == 1) {
            ans.push_back(A[i]);
        } else {
            int ins_num = abs(dif);
            if (A[i] < A[i+1]) {
                int tmp = A[i];
                for (int j = 0; j < ins_num; j++)   ans.push_back(tmp + j);
            } else if (A[i] > A[i+1]) {
                int tmp = A[i];
                for (int j = 0; j < ins_num; j++)   ans.push_back(tmp - j);
            }
        }
    }
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
    
}