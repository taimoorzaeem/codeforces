#include <iostream>

using namespace std;
 
int main() {

    int n, k;
    cin >> n >> k;
    
    int time_left = (4 * 60) - k;
    int problems_solved = 0;

    int i = 5;
    while (time_left >= i && problems_solved < n) {
        problems_solved++;
        time_left -= i;
        i+=5;
    }

    cout << problems_solved << endl;
 
    return 0;
}
