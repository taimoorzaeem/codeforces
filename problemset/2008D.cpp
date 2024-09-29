#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double


void solve(int case_number) {

    ll n;
    cin >> n;

    vector<ll> nums(n+1, 0);
    vector<ll> f(n+1, 0);

    vector<bool> visited(n+1, false);

    for (ll i = 1; i <= n; i++)
        cin >> nums[i];

    string colors;
    cin >> colors;

    for (ll i = 1; i <= n; i++) {
        if (visited[i])
            continue;

        vector<ll> reachable;
        ll p = i;
        ll count = 0;
        while (!visited[p]) {
            reachable.push_back(p);
            visited[p] = true;
            if (colors[p-1] == '0') {
                count += 1;
            }
            p = nums[p];
        }

        for (ll j = 0; j < reachable.size(); j++)
            f[reachable[j]] = count;

    }

    for (int i = 1; i <= n; i++) {
        cout << f[i] << " ";
    }

    cout << endl;

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