#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double

void solve(int case_number) {

    ll n, x, y;
    cin >> n >> x >> y;

    bool x_even = x % 2 == 0;
    bool y_even = y % 2 == 0;

    for (int i = 1; i <= n; i++) {
        if (i < y) {
            if (y_even) {
                if (i % 2 == 0) {
                    cout << 1 << " ";
                } else {
                    cout << -1 << " ";
                }
            } else {
                if (i % 2 == 0) {
                    cout << -1 << " ";
                } else {
                    cout << 1 << " ";
                }
            }
        } else if (i >= y && i <= x) {
            cout << 1 << " ";
        } else {
            if (x_even) {
                if (i % 2 == 0) {
                    cout << 1 << " ";
                } else {
                    cout << -1 << " ";
                }
            } else {
                if (i % 2 == 0) {
                    cout << -1 << " ";
                } else {
                    cout << 1 << " ";
                }
            }
        }
    }

    cout << "\n";  

}

int main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll test_cases;
    cin >> test_cases;

    for (ll i = 1; i <= test_cases; i++){
        solve(i);
        cout << flush;
    }

    return 0;
}