#include <bits/stdc++.h>

using namespace std;
 
int main() 
{
    int digit;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> digit;
            if (digit == 1) {
                cout << abs(i-2) + abs(j-2) << endl;
                return 0;
            }
        }
    }
}