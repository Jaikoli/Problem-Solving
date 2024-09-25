#include <bits/stdc++.h>
using namespace std;
void printMap(auto m)
{
  for (auto it : m)
  {
    cout << it.first << " " << it.second << endl;
  }
}
int main()
{
  system("cls");
  int n;
  cin >> n;
  map<string, int> mp;
  while (n--)
  {
    string s;
    cin >> s;
    mp[s] = mp[s] + 1;
  }

  printMap(mp);
  return 0;
}