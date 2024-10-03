#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double

void solve(int case_number) {

    ll n;
    cin >> n;

    vector<ll> nums(n);

    for (ll i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<ll> prefix_sum(n+1,0);
    for (ll i = 0; i < n; i++) {
        prefix_sum[i+1] = prefix_sum[i] + nums[i];
    }

    string LRs;
    cin >> LRs;

    ll max_sum = 0;
    ll l = 0, r = LRs.length() - 1;
    while (l < r) {
        if (LRs[l] == 'L' && LRs[r] == 'R') {
            max_sum += prefix_sum[r+1] - prefix_sum[l];
            l++;
            r--;
        } else if (LRs[l] == 'R') {
            l++;
        } else if (LRs[r] == 'L') {
            r--;
        } else {}
    }

    cout << max_sum << "\n";

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