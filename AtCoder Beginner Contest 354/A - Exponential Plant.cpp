#include <bits/stdc++.h>
using namespace std;

int main()
{
  int H;
  cin >> H;

  int plant = 1;
  int count = 1;
  while (H >= plant)
  {
    plant += pow(2, count);
    count++;
  }
  cout << count << endl;
}
