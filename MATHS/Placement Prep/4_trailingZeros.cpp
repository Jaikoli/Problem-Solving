
#include <bits/stdc++.h>
using namespace std;

int trailingZeros(int n)
{
  int res = 1;
  for (int i = 1; i <= n; i++)
  {
    res = res * i;
  }

  int count = 0;
  while (res % 10 == 0)
  {
    count++;
    res /= 10;
  }
  return count;
}
int main()
{
  system("cls");
  int n;
  cin >> n;
  int res = trailingZeros(n);
  cout << res << endl;

  return 0;
}