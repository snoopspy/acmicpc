#include <cmath>
#include <iostream>

using namespace std;

int square(int x) {
  return x * x;
}

int main()
{
  int T; cin >> T;
  for (int i = 0; i < T; i++) {
    int x1, y1, r1; cin >> x1 >> y1 >> r1;
    int x2, y2, r2; cin >> x2 >> y2 >> r2;
    int answer = 0;
    if (x1 == x2 && y1 == y2) {
      if (r1 == r2)
        answer = -1;
      else
        answer = 0;
    } else {
      int ds = square(x1 - x2) + square(y1 - y2);
      if (ds < square(r1 + r2) && ds > square(r1 - r2))
        answer = 2;
      else if (ds == square(r1 + r2) || ds == square(r1 - r2))
        answer = 1;
      else
        answer = 0;
    }
    cout << answer << endl;
  }
  return 0;
}
