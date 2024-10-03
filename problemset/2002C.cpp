#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double

void solve(int case_number) {

    ll n;
    cin >> n;

    vector<ll> xs(n);
    vector<ll> ys(n);

    for (ll i = 0; i < n; i++) {
        cin >> xs[i] >> ys[i];
    }

    ll s1, s2, t1, t2;
    cin >> s1 >> s2 >> t1 >> t2;

    bool flag = true;
    for (ll i = 0; i < n; i++) {
        ld dist_target = sqrt(pow(t1 - xs[i], 2) + pow(t2 - ys[i], 2));
        ld s_to_t_dist = sqrt(pow(t1 - s1, 2) + pow(t2 - s2, 2));

        if (dist_target <= s_to_t_dist) {
            flag = false;
            break;
        }
    }


    cout << (flag ? "YES" : "NO") << "\n";

}

int main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int test_cases;
    cin >> test_cases;

    for (int i = 1; i <= test_cases; i++){
        solve(i);
        cout << flush;
    }

    return 0;
}