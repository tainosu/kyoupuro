#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, Q;
    cin >> N;
    int array[N];
    for (int i = 0; i < N; i++) {
        cin >> array[i];
    }
    cin >> Q;

    for (int i = 0; i < Q; i++) {
        int A, B = 0;
        cin >> A >> B;
        int apos = 0;
        int bpos = 0;
        
        for (int j = 0; j < N; j++) {
            if (array[j] == A)  apos = j;
            if (array[j] == B)  bpos = j;
        }
        if (apos < bpos) {
            cout << A << endl; 
        } else {
            cout << B << endl;
        }
    }
}