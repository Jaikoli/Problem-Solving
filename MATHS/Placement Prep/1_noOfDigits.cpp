#include <bits/stdc++.h>
using namespace std;
/*
int countDigits(int n)
{
  n = abs(n);

  int count = 0;
  while (n != 0)
  {
    n = n / 10;
    count++;
  }
  return count;
}*/
/*
int countDigits(int n)
{
  if (n == 0)
  {
    return 0;
  }

  return 1 + countDigits(n / 10);
}*/

int countDigits(int n)
{
  return floor(log10(n) + 1);
}
int main()
{
  system("cls");
  int n;
  cin >> n;
  int res = countDigits(n);
  cout << res << endl;

  return 0;
}