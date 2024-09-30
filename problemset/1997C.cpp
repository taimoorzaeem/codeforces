#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double


void solve(int case_number) {

    ll n;
    cin >> n; 

    string brackets;
    cin >> brackets;

    stack<ll> stk;
    ll cost = 0;
    for (ll i = 0; i < n; i++) {
        if (brackets[i] == '_') {
            if (stk.empty()) {
                stk.push(i);
            } else {
                cost += i - stk.top();
                stk.pop();
            }
        } else if (brackets[i] == '(') {
            stk.push(i);
        } else if (brackets[i] == ')') {
            cost += i - stk.top();
            stk.pop();
        } else {}
    }

    cout << cost << endl;
        
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