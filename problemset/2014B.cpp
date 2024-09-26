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

        if (n % 2 == 0) {
            if (k % 2 == 0) {
                if ((k/2) % 2 == 0) {
                    cout << "YES" << endl;
                } else {
                    cout << "NO" << endl;
                }
            } else {
                if (((k+1)/2) % 2 == 0) {
                    cout << "NO" << endl;
                } else {
                    cout << "YES" << endl;
                }
            }
        } else {
            if (k % 2 == 0) {
                if ((k/2) % 2 == 0) {
                    cout << "YES" << endl;
                } else {
                    cout << "NO" << endl;
                }
            } else {
                if (((k+1)/2) % 2 == 0) {
                    cout << "YES" << endl;
                } else {
                    cout << "NO" << endl;
                }
            }
        }
    }

    return 0;
}