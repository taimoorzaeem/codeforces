#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double

ll dfs(ll vert, vector<ll> *adj, vector<ll> &vertices) {
    ll mini = INT_MAX;
    for (ll child : adj[vert]) {
        mini = min(mini, dfs(child, adj, vertices));
    }
    if (vert == 0)
        return vertices[vert] + mini;
    else if (mini == INT_MAX) // vert is leaf
        return vertices[vert];
    else if (vertices[vert] < mini)
        return (vertices[vert] + mini) / 2;
    else
        return mini;
}

void solve(int case_number) {

    ll n;
    cin >> n; 

    vector<ll> vertices (n);
    for (ll i = 0; i < n; i++) {
        cin >> vertices[i];
    }

    vector<ll> adj[n];
    for (ll i = 1; i < n; i++) {
        ll parent;
        cin >> parent;
        adj[parent-1].push_back(i);
    }

    cout << dfs(0, adj, vertices) << "\n";
        
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