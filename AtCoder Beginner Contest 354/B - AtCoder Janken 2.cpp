#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N, C;
  cin >> N;

  string S[N];
  int res = 0;
  for (int i = 0; i < N; i++)
  {
    cin >> S[i] >> C;
    res += C;
  }

  sort(S, S + N);
  cout << (S[res % N]);
}
