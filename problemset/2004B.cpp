#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int test_cases;
    cin >> test_cases;

    while(test_cases--){
        int l, r, L, R;
        cin >> l >> r;
        cin >> L >> R;

        
        set<int> doors;
        for (int i = l; i <= r; i++) {
            for (int j = L; j <= R; j++) {
                if (i+1 == j || j+1 == i) {
                    doors.insert(i+j);
                }
            }
        }

        int ans = doors.size();
        if (ans == 0) ans = 1;

        cout << ans << endl;
        
    }

    return 0;
}
