#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N;
  cin >> N;

  vector<int> H(N);

  int max = -1;
  for (int i = 0; i < N; i++)
    cin >> H[i];

  for (int i = 1; i < N; i++)
  {
    if (H[0] < H[i])
    {
      max = i + 1;
      break;
    }
  }
  cout << max << endl;
}