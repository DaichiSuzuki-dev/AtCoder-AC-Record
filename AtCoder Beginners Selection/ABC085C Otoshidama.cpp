#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N, Y;
  cin >> N >> Y;
  vector<int> array(3, -1);
  for (int a = 0; a <= N; a++)
  {
    for (int b = 0; a + b <= N; b++)
    {
      int c = N - a - b;
      int total = 10000 * a + 5000 * b + 1000 * c;
      if (total == Y)
      {
        array[0] = a;
        array[1] = b;
        array[2] = c;
      }
    }
  }

  cout << array[0] << " " << array[1] << " " << array[2] << endl;
}