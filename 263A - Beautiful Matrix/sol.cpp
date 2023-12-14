#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 +7;

signed main() {
    ios::sync_with_stdio(false); cin.tie(NULL);

    /*int tc; cin >> tc;

    while(tc--) {

    }*/

    int r,c;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            int curr; cin >> curr;
            if(curr == 1){ r = i; c = j;}
        }
    }
    cout << abs(2-r)+abs(2-c) << endl;
}
