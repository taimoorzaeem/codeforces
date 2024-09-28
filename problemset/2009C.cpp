#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double


void solve(int case_number) {

    ll x, y, k;
    cin >> x >> y >> k;

    if (k >= x && k >= y) {
        if (x == 0 && y == 0) {
            cout << 0 << endl;
        } else if (y == 0) {
            cout << 1 << endl;
        } else {
            cout << 2 << endl;
        }
        return;
    }

    ll x_jumps = (x / k) + (x % k ? 1 : 0);
    ll y_jumps = (y / k) + (y % k ? 1 : 0);

    ll ans = 0;
    if (x_jumps > y_jumps) {
        ans = (2 * x_jumps) - 1;
    } else {
        ans = 2 * y_jumps;
    }

    cout << ans << endl;

}

int main() 
{
    int test_cases;
    cin >> test_cases;

    for (int i = 1; i <=  test_cases; i++){
        solve(i);
    }

    return 0;
}