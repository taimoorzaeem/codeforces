#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double

void solve(int case_number) {

    ll a, b, l;
    cin >> a >> b >> l;

    ll x = 0, y = 0;
    ll product = 0;

    product = (ll) (pow(a, x) * pow(b, y));

    set<ll> prods;
    do {
        do {
            if (l % product == 0) {
                if (prods.find(product) == prods.end()) {
                    prods.insert(product);
                }
            }
            y++;
            product = (ll) (pow(a, x) * pow(b, y));
        } while (product <= l);
        x++;
        y = 0;
        product = (ll) (pow(a, x) * pow(b, y));
    } while (product <= l);

    cout << prods.size() << "\n";

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