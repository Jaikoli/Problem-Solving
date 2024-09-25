#include <bits/stdc++.h>
using namespace std;

int main()
{
  system("cls");
  unordered_map<string, int> m;
  m["jai"] = 20;
  m["ram"] = 23;
  m.insert({"shyam", 34});

  for (auto val : m)
  {
    cout << val.first << " " << val.second << endl;
  }

  for (auto it = m.begin(); it != m.end(); it++)
  {
    cout << it->first << " " << it->second << endl;
  }

  auto it = m.find("jai");
  if (it != m.end())
  {
    cout << it->second << endl;
    m.erase(it);
  }
  else
  {
    cout << "Not found" << endl;
  }
  return 0;
}