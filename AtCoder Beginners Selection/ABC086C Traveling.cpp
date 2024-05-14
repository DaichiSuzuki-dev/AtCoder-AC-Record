#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N;
  cin >> N;

  vector<int> T(N + 1);
  vector<int> X(N + 1);
  vector<int> Y(N + 1);

  bool can = true;
  for (int i = 1; i < N + 1; i++)
  {
    cin >> T[i] >> X[i] >> Y[i];

    int t = T[i] - T[i - 1];
    int x = abs(X[i] - X[i - 1]);
    int y = abs(Y[i] - Y[i - 1]);

    int move = x + y;

    bool result1 = (move % t) == 0;
    bool result2 = ((t - move) % 2) == 0;

    bool hoge = (t - move >= 0);
    bool fuga = (result1 || result2);
    if (!(hoge && fuga))
    {
      can = false;
      break;
    }
  }
  cout << (can ? "YES" : "NO") << endl;
}