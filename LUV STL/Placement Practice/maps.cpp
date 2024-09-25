#include <bits/stdc++.h>
using namespace std;

void printMap(auto mp)
{
  cout << "Size of Map" << mp.size() << endl;
  for (auto val : mp)
  {
    cout << val.first << " " << val.second << endl;
  }
}
/*
int main()
{
  system("cls");
  map<int, string> mp;
  mp[43] = "raha";
  mp[2] = "dfjdbfjbsd";
  mp[1] = "adk";
  mp[34] = "raj";
  mp[434] = "raj";
  // mp[1] = "rajesh";
  // mp[23] = "khush";
  // mp[3] = "rakesh";
  // mp[243];

  // mp.insert({44, "jayesh"});
  // mp.insert(make_pair(5, "gukesh"));

  // for (auto it = mp.begin(); it != mp.end(); it++)
  // {
  //   cout << (*it).first << "  " << (*it).second << endl;
  // }

  // Range based Loops
  // printMap(mp);

  // Find function

  // auto find_it = mp.find(34);
  // if (find_it != mp.end())
  // {
  //   cout << find_it->first << " " << find_it->second << endl;
  // }
  // else
  // {
  //   cout << "No value found!";
  // }

  // Erase Function
  mp.erase(2343);

  printMap(mp);

  return 0;
}*/