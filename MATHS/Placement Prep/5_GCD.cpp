
#include <bits/stdc++.h>
using namespace std;
/*
int GCD(int a, int b)
{
  int res = min(a, b);
  while (res != 0)
  {
    if (a % res == 0 && b % res == 0)
    {
      return res;
    }
    res--;
  }
  return res;
}*/

int GCD(int a, int b)
{
  while (a != b)
  {
    if (a > b)
    {
      a = a - b;
    }
    else
    {
      b = b - a;
    }
  }
  return a;
}

int main()
{
  system("cls");
  int a, b;
  cin >> a >> b;
  int res = GCD(a, b);
  cout << res << endl;

  return 0;
}