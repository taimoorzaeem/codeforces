#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double


void solve(int case_number) {

    string s, t;
    cin >> s;
    cin >> t; 

    stringstream output;

    ll t_index = 0;
    for (ll i = 0; i < s.length(); i++) {
        if (t_index >= t.length()) {
            if (s[i] == '?') {
                output << 'a';
            } else {
                output << s[i];
            }
        } else {
            if (s[i] == '?') {
                output << t[t_index];
                t_index++;
            } else {
                if (s[i] == t[t_index]) {
                    output << t[t_index];
                    t_index++;
                } else {
                    output << s[i];
                }
            }
        }
    }

    if (t_index < t.length()) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
        cout << output.str() << endl;
    }
        
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