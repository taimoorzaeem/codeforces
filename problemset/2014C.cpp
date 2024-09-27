#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double


void solve(int case_number) {

    ll n;
    cin >> n;

    ll unhappy_needed = (n / 2) + 1;

    double total = 0;
    vector<double> golds;
    for (ll i = 0; i < n; i++) {
        double gold;
        cin >> gold;
        golds.push_back(gold);
        total += gold;
    }

    if (n == 1 || n == 2) {
        cout << -1 << endl;
        return;
    }

    double half_average = ((double)total / (2.0 * n));

    ll unhappy = 0;
    vector<ll> happy;
    for (ll i = 0; i < golds.size(); i++) {
        if (golds[i] < half_average) {
            unhappy++;
            if (unhappy_needed == unhappy) {
                cout << 0 << endl;
                return;
            }
        } else {
            happy.push_back(golds[i]);
        }
    }

    sort(happy.begin(), happy.end());

    ll max_happy_index = unhappy_needed - unhappy - 1;
    ll answer = (happy[max_happy_index] * 2 * n) - total + 1;


    cout << answer << endl;

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