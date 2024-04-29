#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
  int A, B, C, X;
  cin >> A >> B >> C >> X;

  int count = 0;

  // A を全く使わないパターンから、A を全て使い切るパターンまで全探索する
  for (int i = 0; i <= A; i++)
  {
    for (int j = 0; j <= B; j++)
    {
      for (int k = 0; k <= C; k++)
      {
        int total_amount = i * 500 + j * 100 + k * 50;
        // 合計金額が X と一致している場合は、カウントをプラス
        if (total_amount == X)
          count++;
      }
    }
  }

  cout << count << endl;
}