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
    int r,c;
    cin >> r >> c;

    bool flag = true;
    for(int i=0;i<r;i++) {

        for(int j =0;j<c;j++) {
            if(i%2 == 0 || (j == c-1 && flag) || (j == 0 && !flag) ) cout << '#';
            else cout << '.';
        }

        if(i%2 != 0) flag = !flag;
        cout << endl;
    }
}