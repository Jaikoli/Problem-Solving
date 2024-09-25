
#include <bits/stdc++.h>
using namespace std;

int LCM(int a, int b)
{
  int res = max(a, b);
  while (1)
  {
    if (res % a == 0 && res % b == 0)
    {
      return res;
    }
    res++;
  }
  return res;
}

int main()
{
  system("cls");
  int a, b;
  cin >> a >> b;
  int res = LCM(a, b);
  cout << res << endl;

  return 0;
}