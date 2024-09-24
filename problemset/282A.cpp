#include <bits/stdc++.h>

using namespace std;
 
int main() 
{
    int t;
    cin >> t;

    int x = 0;

    while(t--){

        string statement;
        cin >> statement;

        if (statement == "X++" || statement == "++X") {
            x++;
        } else if (statement == "X--" || statement == "--X") {
            x--;
        } else {}
     
    }

    cout << x << endl;

    return 0;
}
