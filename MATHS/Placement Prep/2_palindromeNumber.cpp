
#include <bits/stdc++.h>
using namespace std;

int palindromeNumber(int n)
{
  int temp = n;
  int rev = 0;
  int last = 0;
  while (temp != 0)
  {
    last = temp % 10;
    temp /= 10;
    rev = rev * 10 + last;
  }
  if (rev == n)
  {
    return true;
  }
  else
  {
    return false;
  }
}
int main()
{
  system("cls");
  int n;
  cin >> n;
  bool res = palindromeNumber(n);
  cout << res << endl;

  return 0;
}