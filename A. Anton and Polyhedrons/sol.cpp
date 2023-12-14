#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;

void solve();

signed main() {
    ios::sync_with_stdio(false); cin.tie(NULL);

    /*int tc; cin >> tc;
    while(tc--) {
        solve();
    }*/
    solve();
    return 0;
}

void solve() {
    int n; cin >> n;

    int ans =0;
    while(n--) {
        string s; cin >> s;
        switch (s[0]) {
            case 'I':
                ans += 20;
                break;
            case 'D':
                ans += 12;
                break;
            case 'O':
                ans += 8;
                break;
            case 'C':
                ans += 6;
                break;
            case 'T':
                ans += 4;
                break;
        }
    }

    cout << ans << endl;
}