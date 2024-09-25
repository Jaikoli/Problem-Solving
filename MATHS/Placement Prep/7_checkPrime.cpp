
#include <bits/stdc++.h>
using namespace std;

bool checkPrime(int n)
{
  if (n == 1)
  {
    return false;
  }
  for (int i = 2; i < n; i++)
  {
    if (n % i == 0)
    {
      return false;
    }
  }
  return true;
}
int main()
{
  system("cls");
  int n;
  cin >> n;
  bool res = checkPrime(n);
  cout << res << endl;

  return 0;
}