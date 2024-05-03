#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N;
  cin >> N;

  vector<int> d(N);
  for (int i = 0; i < N; i++)
    cin >> d[i];

  auto max_d = max_element(d.begin(), d.end());
  vector<int> num(*max_d + 1);

  for (int i = 0; i < N; i++)
    num[d[i]]++;

  int result = 0;
  for (int i = 0; i < num.size(); i++)
  {
    if (num[i])
    {
      result++;
    }
  }

  cout << result << endl;
}