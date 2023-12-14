#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;

void solve();

signed main() {
    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin >> tc;
    while(tc--) {
        solve();
    }
    return 0;
}

void solve() {
    int curr; cin >> curr;

    int p = 0;
    vector<int> vi;

    while(curr != 0) {
        int x = curr%10;
        if(x != 0) {
            vi.push_back(x*pow(10,p));
        }
        curr /= 10;
        p++;
    }

    cout << vi.size() << endl;
    for (auto a : vi) {
        cout << a << ' ';
    }
    cout << endl;
}





