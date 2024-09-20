#include <bits/stdc++.h>

using namespace std;
 
int main() 
{
  int n;
  long l;
  cin >> n >> l;

  if (n == 1) {
    long lamp;
    cin >> lamp;
    if (l == lamp) {
      cout << fixed << setprecision(10) << (double)(lamp) << endl;
    } else {
      cout << fixed << setprecision(10) << (double)max(l - lamp, lamp - 0) << endl;
    }
    
    return 0;
  }

  vector<long> points;
  long point;

  for (int i = 0; i < n; i++) {
    cin >> point;
    points.push_back(point);
  }

  std::sort(points.begin(), points.end());

  vector<long> distances;
  for (int i = 0; i < points.size() - 1; i++) {
    long dist = abs(points[i+1] - points[i]);
    if (dist > 0) distances.push_back(dist);
  }

  if (points[0] == 0) 
    distances.push_back(points[1] - points[0]);
  else
    distances.push_back(2 * points[0]);

  if (points[n - 1] == l)
    distances.push_back(points[n-1] - points[n-2]);
  else
    distances.push_back(2 * (l - points[n-1]));

  
  double max_dist = (double)*max_element(distances.begin(), distances.end());
  double ans = max_dist / 2.0;

  cout << fixed << setprecision(10) << ans << endl;

  return 0;
}
