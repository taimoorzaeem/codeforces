#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double

int main() 
{
    int t;
    cin >> t;

    while(t--){
        ll n, ops;
        cin >> n >> ops;

        vector<ll> nums;
        for (ll i = 0; i < n; i++) {
            ll num;
            cin >> num;
            nums.push_back(num);
        }

        ll max_e = *max_element(nums.begin(), nums.end());

        for (ll i = 0; i < ops; i++) {
            char op;
            ll l, r;
            cin >> op >> l >> r;
            if (op == '+') {
                if (max_e >= l && max_e <= r) max_e++;
            } else if (op == '-') {
                if (max_e >= l && max_e <= r) max_e--;
            } else {}

            cout << max_e << " ";
        }

        cout << endl;

    }

    return 0;
}
