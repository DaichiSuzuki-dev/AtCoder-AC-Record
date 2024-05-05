#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
  string S;
  cin >> S;

  vector<string> word = {"dream", "dreamer", "erase", "eraser"};

  string result = "NO";
  for (int i = 0; i < S.length(); i++)
  {
    
  }
  // for (int i = 0; i < word.size(); i++)
  // {
  //   string cut_S = S.substr(S.length() - word[i].length(), word[i].length());
  //   if (cut_S == word[i])
  //   {
  //     result = "YES";
  //   }
  // }

  cout << result << endl;
}