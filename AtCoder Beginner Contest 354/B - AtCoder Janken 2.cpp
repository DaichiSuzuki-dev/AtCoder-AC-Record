#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N;
  cin >> N;

  vector<string> S(N);
  vector<int> C(N);
  for (int i = 0; i < N; i++)
    cin >> S[i] >> C[i];

  sort(S.begin(), S.end());

  int mod = accumulate(C.begin(), C.end(), 0) % N;
  for (int i = 0; i < N; i++)
  {
    if (i == mod)
    {
      cout << S[i] << endl;
      break;
    }
  }
}
