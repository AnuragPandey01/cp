#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;

signed main() {
    ios::sync_with_stdio(false); cin.tie(NULL);

    // Input variables
    int friends, bottles, ml_per_bottle, limes, slices_per_lime, salt_grams, required_drink, required_salt;
    cin >> friends >> bottles >> ml_per_bottle >> limes >> slices_per_lime >> salt_grams >> required_drink >> required_salt;

    // Calculate maximum possible drinks based on available bottles and volume
    int max_possible_drinks = bottles * ml_per_bottle / required_drink;

    // Calculate total number of lemon slices
    int total_lemon_slices = limes * slices_per_lime;

    // Calculate maximum number of toasts based on available salt
    int max_toasts_from_salt = salt_grams / required_salt;

    // Determine the limiting factor for the number of toasts
    int max_toasts = min({max_possible_drinks, total_lemon_slices, max_toasts_from_salt});

    // Output the result
    cout << max_toasts / friends << endl;

    return 0;
}