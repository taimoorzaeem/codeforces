#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double


void solve(int case_number) {

    ll n, k;
    cin >> n >> k; 

    vector<ll> nums(n, 0);

    for (ll i = 0; i < n; i++) {
        cin >> nums[i];
    }

    
    sort(nums.begin(), nums.end(), greater<>());

    ll ans = 0;

    for (ll i = 0; i < n; i++) {
        if (i % 2 == 0) {
            ans += nums[i];
        } else {
            ll diff = nums[i-1] - nums[i];
            ll minn = min(k, diff);
            ans = ans - nums[i] - minn;
            k -= minn;
        }
    }

    cout << ans << endl;
        
}

int main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int test_cases;
    cin >> test_cases;

    for (int i = 1; i <= test_cases; i++){
        solve(i);
    }

    return 0;
}