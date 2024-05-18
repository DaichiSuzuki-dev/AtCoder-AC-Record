#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N;
  cin >> N;

  vector<int> A(N);
  vector<int> C(N);
  for (int i = 0; i < N; i++)
    cin >> A[i] >> C[i];

  vector<int> card;
  int max_roop = N;
  for (int i = 0; i < max_roop; i++)
  {
    bool win = true;
    for (int j = i + 1; j < max_roop; j++)
    {
      bool current_a_lose = A[i] < A[j];
      bool current_c_lose = C[i] > C[j];
      if (current_a_lose && current_c_lose)
      {
        win = false;
        break;
      }

      if (!current_a_lose && !current_c_lose)
      {
        A.erase(A.begin() + j);
        C.erase(C.begin() + j);
        j--;
        max_roop--;
      }
    }

    if (win)
    {
      card.push_back(i + 1);
    }
  }

  cout << card.size() << endl;
  for (int i = 0; i < card.size(); i++)
  {
    cout << card[i] << " ";
  }
}
