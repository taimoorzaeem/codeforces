#include <iostream>

using namespace std;
 
int main() 
{
  int t;
  cin >> t;

  int accum = 0;
  while(t--){

    int A, B, C;
    cin >> A >> B >> C;

    if (A + B + C >= 2) {
      accum++;
    }
     
  }

  cout << accum << endl;

  return 0;
}
