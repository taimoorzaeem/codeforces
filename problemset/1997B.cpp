#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double


void solve(int case_number) {

    ll n;
    cin >> n; 

    string row_one;
    string row_two;

    cin >> row_one;
    cin >> row_two;

    if (n <= 2) {
        cout << 0 << endl;
        return;
    }

    ll count = 0;
    for (int i = 1; i < n - 1; i++) {
        bool pred_11 = row_one[i-1] == 'x' && row_one[i] == '.' && row_one[i+1] == 'x';
        bool pred_12 = row_two[i-1] == '.' && row_two[i] == '.' && row_two[i+1] == '.';

        bool pred_21 = row_one[i-1] == '.' && row_one[i] == '.' && row_one[i+1] == '.';
        bool pred_22 = row_two[i-1] == 'x' && row_two[i] == '.' && row_two[i+1] == 'x';

        if ((pred_11 && pred_12) || (pred_21 && pred_22)) {
            count++;
        }

    }

    cout << count << endl;

        
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