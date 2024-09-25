#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double

int main() 
{
    int test_cases;
    cin >> test_cases;

    while(test_cases--){
        int n, k;
        cin >> n >> k;

        int num;
        int gold = 0;
        int gold_given = 0;
        for (int i = 0; i < n; i++) {
            cin >> num;

            if (num >= k) {
                gold += num;
                continue;
            }

            if (num == 0 && gold > 0) {
                gold_given++;
                gold--;
            }
        }

        cout << gold_given << endl;
    }

    return 0;
}
