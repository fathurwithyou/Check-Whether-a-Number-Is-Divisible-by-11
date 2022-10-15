#include <bits/stdc++.h>
#define fathurwithyou            \
    ios::sync_with_stdio(false); \
    cin.tie(0);

typedef long long ll;
typedef unsigned long long ull;
using namespace std;

void solve() {
    int t;
    cin >> t;
    string out[t];
    for (int i = 0; i < t; i++) {
        ull odd = 0, even = 0;
        string s;
        int chk = 1;
        cin >> s;
        for (int j = 0; j < s.size(); j++) {
            if (chk == 1) {
                odd += s[j] - '0';
                chk = 2;
            } else {
                even += s[j] - '0';
                chk = 1;
            }
        }
        if ((odd - even) % 11 == 0) {
            out[i] = "Divisible";
        } else {
            out[i] = "Not Divisible";
        }
    }
    for (int i = 0; i < t; i++) {
        cout << "Case #" << i + 1 << ": " << out[i] << "\n";
    }
    return;
}

int main() {
    fathurwithyou solve();
    return 0;
}
