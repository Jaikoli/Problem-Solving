#include <bits/stdc++.h>
using namespace std;

int main()
{
  system("cls");

  // pair<int, string> p1;
  // p1 = make_pair(2, "jai");

  // pair<int, string> &p2 = p1;
  // p1.first = 23;

  // cout << p1.first << " " << p1.second << endl;
  // cout << p2.first << " " << p2.second << endl;

  // Array of Pairs

  // pair<int, int> pair_array[4];
  // pair_array[0] = {10, 5};
  // pair_array[1] = {2, 32};
  // pair_array[2] = {33, 0};
  // pair_array[3] = {45, 4};

  // swap(pair_array[0], pair_array[3]);
  // cout << "Printing First Array:" << endl;
  // for (int i = 0; i < 4; i++)
  // {
  //   cout << pair_array[i].first << " ";
  // }
  // cout << endl;
  // cout << "Printing second Array:" << endl;
  // for (int i = 0; i < 4; i++)
  // {
  //   cout << pair_array[i].second << " ";
  // }

  // Taking input from pair

  pair<int, int> p;

  cin >> p.first >> p.second;

  cout << "The pair entered is: {" << p.first << " " << p.second << "}" << endl;

  return 0;
}