#include <bits/stdc++.h>
using namespace std;

int main()
{
  system("cls");
  vector<pair<int, int>> v = {{1, 2}, {32, 432}, {234, 543}};
  // for (int i = 0; i < v.size(); i++)
  // {
  //   cout << v[i] << " ";
  // }
  // cout << endl;
  // range Based loops
  for (auto val : v)
  {
    cout << val.first << " " << val.second << endl;
  }

    cout << endl;
  return 0;
}