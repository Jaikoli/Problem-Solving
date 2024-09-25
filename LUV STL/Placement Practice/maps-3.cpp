#include <bits/stdc++.h>
using namespace std;
// unordered Maps
int main()
{
  system("cls");
  int n;
  cin >> n;
  unordered_map<string, int> m;
  while (n--)
  {
    string s;
    cin >> s;
    m[s]++;
  }

  int q;
  cin >> q;
  while (q--)
  {
    string s;
    cin >> s;
    // auto it = m.find(s);
    // if (it != m.end())
    // {
    //   cout << it->second << endl;
    // }
    cout << m[s] << endl;
  }
  return 0;
}