#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
  string S;
  cin >> S;

  vector<string> word = {"dream", "dreamer", "erase", "eraser"};

  reverse(S.begin(), S.end());
  for (int i = 0; i < 4; ++i)
    reverse(word[i].begin(), word[i].end());

  bool result = true;
  while (S.length() != 0)
  {
    bool result2 = false;
    for (int i = 0; i < word.size(); i++)
    {
      string cut_S = S.substr(0, word[i].length());
      if (cut_S == word[i])
      {
        result2 = true;
        S = S.substr(word[i].length(), S.length());
        break;
      }
    }

    if (!result2)
    {
      result = false;
      break;
    }
  }

  cout << (result ? "YES" : "NO") << endl;
}