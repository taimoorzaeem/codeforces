#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double

void solve(int case_number) {

    ll n, q;
    cin >> n >> q;

    string a, b;
    cin >> a;
    cin >> b;

    vector<ll> prefix_sum_a[26];
    vector<ll> prefix_sum_b[26];

    for (char c = 'a'; c <= 'z'; c++) {
        prefix_sum_a[c-'a'].push_back(0);
        prefix_sum_b[c-'a'].push_back(0);
        for (ll i = 0; i < n; i++) {
            prefix_sum_a[c-'a'].push_back(prefix_sum_a[c-'a'][i] + (a[i] == c));
            prefix_sum_b[c-'a'].push_back(prefix_sum_b[c-'a'][i] + (b[i] == c));
        }
    }

    for (int i = 0; i < q; i++) {
        ll l = 0, r = 0;
        cin >> l >> r;
        ll count_diff = 0;
        for (char c = 'a'; c <= 'z'; c++) {
            ll count_a = 0;
            ll count_b = 0;
            count_a += prefix_sum_a[c-'a'][r] - prefix_sum_a[c-'a'][l-1];
            count_b += prefix_sum_b[c-'a'][r] - prefix_sum_b[c-'a'][l-1];
            if (count_a > count_b) {
                count_diff += (count_a - count_b);
            }
        }

        cout << count_diff << "\n";
    }

    

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