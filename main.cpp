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
    ull odd = 0, even = 0;
    for (int i = 0; i < t; i++) {
        int c, cnt = 1;
        do {
            c = getchar();
            if (c != ' ') {
                if (cnt == 1) odd += c - '0';
                if (cnt == 2) even += c - '0';
                if (cnt == 2)
                    cnt = 1;
                else
                    cnt++;
            }
        } while (c != ' ');
        if ((odd - even) % 11 == 0) {
            out[i] = "Divisible";
        } else {
            out[i] = "Not Divisible";
        }
    }
    for (int i = 0; i < t; i++) {
        cout << "Case #" << i + 1 << ": " << out[i];
    }
    return;
}

int main() {
    fathurwithyou solve();
    return 0;
}
