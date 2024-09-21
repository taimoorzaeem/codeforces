#include <bits/stdc++.h>

using namespace std;
 
int main() 
{
    int n, k;
    cin >> n >> k;

    int ans = 0, s;
    vector<int> scores;
    for(int i = 0; i < n; i++){
        cin >> s;
        scores.push_back(s);
    }

    for(int i = 0; i < n; i++){
        if (scores[i] >= scores[k-1] && scores[i] > 0) {
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}
