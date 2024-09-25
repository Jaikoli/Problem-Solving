#include <bits/stdc++.h>
using namespace std;

void reverse(string &s, int l, int r)
{
  while (l < r)
  {
    swap(s[l], s[r]);
    l++;
    r--;
  }
}
string print(string s)
{
  int n = s.length();
  int st = 0;
  for (int i = 0; i < n; i++)
  {
    if (s[i] == ' ')
    {
      reverse(s, st, i - 1);
      st = i + 1;
    }
  }
  reverse(s, st, n - 1);
  reverse(s, 0, n - 1);
  return s;
}
int main()
{
  system("cls");
  string s;
  getline(cin, s);
  cout << print(s) << endl;

  return 0;
}