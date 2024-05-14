#include <iostream>
using namespace std;

int main()
{
  int N;
  cin >> N;

  int T = 0;
  int X = 0;
  int Y = 0;

  bool can = true;
  for (int i = 0; i < N; i++)
  {
    int t, x, y;
    cin >> t >> x >> y;

    T = t - T;
    X = abs(x - X);
    Y = abs(y - Y);

    int move = X + Y;

    bool result1 = (move % T) == 0;
    bool result2 = ((T - move) % 2) == 0;

    bool hoge = (T - move >= 0);
    bool fuga = (result1 || result2);
    if (!(hoge && fuga))
    {
      can = false;
      break;
    }
  }
  cout << (can ? "YES" : "NO") << endl;
}