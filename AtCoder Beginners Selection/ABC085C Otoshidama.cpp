#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N, Y;
  cin >> N >> Y;

  vector<int> array(3, -1);
  for (int i = 0; i <= N; i++)
  {
    for (int j = 0; j <= N; j++)
    {
      int money = Y - (10000 * i + 5000 * j);
      int remaining_bill = (N - i - j);
      if (money == remaining_bill * 1000 && 0 <= remaining_bill)
      {
        array[0] = i;
        array[1] = j;
        array[2] = remaining_bill;
        break;
      }
    }
  }

  cout << array[0] << " " << array[1] << " " << array[2] << endl;
}