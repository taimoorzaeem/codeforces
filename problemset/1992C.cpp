#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double

int main() 
{
    int test_cases;
    cin >> test_cases;

    while(test_cases--){
        int n, m, k;
        cin >> n >> m >> k;

        for (int i = n; i > m; i--) {
            cout << i << " ";
        }

        for (int i = 1; i <= m; i++) {
            cout << i << " ";
        }

        cout << endl;

    }

    return 0;
}
