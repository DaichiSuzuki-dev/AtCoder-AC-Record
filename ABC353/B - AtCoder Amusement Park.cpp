#include <iostream>
using namespace std;

int main()
{
  int N, K, A;
  cin >> N >> K;

  int count = 0;
  int seat = K;

  for (int i = 0; i < N; i++)
  {
    cin >> A;
    if (seat < A)
    {
      count++;
      seat = K;
    }
    seat -= A;
  }
  cout << count + 1 << endl;
}