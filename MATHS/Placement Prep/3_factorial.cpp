
#include <bits/stdc++.h>
using namespace std;
/*
int factorial(int n)
{

  int res = 1;
  for (int i = 1; i <= n; i++)
  {
    res = res * i;
  }
  return res;
}*/

int factorial(int n)
{
  if (n == 0)
  {
    return 1;
  }
  return n * factorial(n - 1);
}
int main()
{
  system("cls");
  int n;
  cin >> n;
  int res = factorial(n);
  cout << res << endl;

  return 0;
}