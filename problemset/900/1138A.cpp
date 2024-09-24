#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double

int main() 
{
    int test_cases;
    cin >> test_cases;

    int num;

    int max_group_size = 0;
    int num_ones = 0;
    int num_twos = 0;
    int previous = 0;

    for (int i = 0; i < test_cases; i++){
        cin >> num;

        if (i == 0) {
            if (num == 1) {
                num_ones++;
                previous = 1;
            } else if (num == 2) {
                num_twos++;
                previous = 2;
            } else {}
        } else {
            if (num == 1) {
                if (previous == 2) {
                    num_ones = 0;
                }
                num_ones++;

                if (min(num_ones, num_twos) * 2 > max_group_size) {
                    max_group_size = min(num_ones, num_twos) * 2;
                }
                
                previous = 1;

            } else if (num == 2) {
                if (previous == 1) {
                    num_twos = 0;
                }
                num_twos++;
                
                if (min(num_ones, num_twos) * 2 > max_group_size) {
                    max_group_size = min(num_ones, num_twos) * 2;
                }

                previous = 2;
            }
        }

    }

    cout << max_group_size << endl;

    return 0;
}
