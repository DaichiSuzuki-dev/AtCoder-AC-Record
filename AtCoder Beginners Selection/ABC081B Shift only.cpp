#include <iostream>
using namespace std;

int main()
{
  int N;
  int A[200];
  cin >> N;

  for (int i = 0; i < N; i++)
    cin >> A[i];

  int count = 0;
  while (true)
  {
    bool even_number_all = true;
    for (int i = 0; i < N; i++)
    {
      if (A[i] % 2 == 1)
      {
        even_number_all = false;
        break;
      }

      // 値の置き換え
      A[i] /= 2;
    }

    if (even_number_all == false)
      break;

    count++;
  }

  cout << count << endl;
}