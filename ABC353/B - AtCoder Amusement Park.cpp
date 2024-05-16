#include <iostream>
using namespace std;

int main()
{
  int N, K;
  cin >> N >> K;

  int A[N];
  for (int i = 0; i < N; i++)
    cin >> A[i];

  int count = 0;
  int seat = K;

  for (int i = 0; i < N; i++)
  {
    if (seat < A[i])
    {
      count++;
      seat = K;
    }
    seat -= A[i];
  }

  cout << count + 1 << endl;
  return 0;
}
