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

    int min = 101;
    int min_index = -1;
    int max = 0;
    int max_index = -1;
    for (int i = 0; i < n; i++) {
        int curr; cin >> curr;
        if(curr <= min) {
            min = curr;
            min_index = i;
        }
        if(curr > max) {
            max = curr;
            max_index = i;
        }
    }

    if(min_index < max_index){
        cout << abs(min_index-n+1)+abs(max_index)-1 << endl;
    }else {
        cout << abs(min_index-n+1)+abs(max_index) << endl;
    }
}