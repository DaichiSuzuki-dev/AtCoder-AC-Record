#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
  int N, A, B;
  cin >> N >> A >> B;

  int total = 0;
  for (int i = 1; i <= N; i++)
  {
    int sum = 0;
    int i_dopy = i;
    while (i_dopy > 0)
    {
      sum += i_dopy % 10;
      i_dopy /= 10;
    }

    if (A <= sum && sum <= B)
    {
      total += i;
    }
  }

  cout << total << endl;
}