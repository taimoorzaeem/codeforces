#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double

int main() {

    int n;
    cin >> n;

    vector<int> planes;
    for (int i = 0; i < n; i++) {
        int plane;
        cin >> plane;

        planes.push_back(plane);
    }

    for (int i = 1; i <= planes.size(); i++) {
        if (planes[planes[planes[i-1]-1]-1] == i) {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
 
    return 0;
}
