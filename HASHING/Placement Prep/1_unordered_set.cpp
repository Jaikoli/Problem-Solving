#include <bits/stdc++.h>
using namespace std;

int main()
{
  system("cls");
  unordered_set<int> s;
  s.insert(23);
  s.insert(32);
  s.insert(543);

  for (auto val : s)
  {
    cout << val << " ";
  }
  cout << endl;
  for (auto it = s.begin(); it != s.end(); it++)
  {
    cout << (*it) << " ";
  }
  cout << endl;
  cout << "Size of Set :" << s.size() << endl;
  auto it = s.find(23);
  if (it != s.end())
  {
    s.erase(it);
  }
  else
  {
    cout << "Not found" << endl;
  }
  cout << "Size of Set :" << s.size() << endl;
  s.clear();
  s.erase(s.begin(), s.end());
  cout << "Size of Set :" << s.size() << endl;
}