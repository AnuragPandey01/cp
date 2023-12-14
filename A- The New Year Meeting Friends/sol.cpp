#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;

signed main() {
    ios::sync_with_stdio(false); cin.tie(NULL);

    int a,b,c;
    cin >> a>> b>> c;

    cout << min({abs(a-b)+abs(b-c),abs(a-c)+abs(b-c),abs(a-b)+abs(a-c)}) << endl;
    return 0;
}