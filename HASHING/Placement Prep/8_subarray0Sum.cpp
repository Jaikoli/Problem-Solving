#include <bits/stdc++.h>
using namespace std;

bool subarray0Sum(int a[], int n)
{
  for (int i = 0; i < n; i++)
  {
    int sum = 0;
    for (int j = i; j < n; j++)
    {
      sum += a[j];
      if (sum == 0)
      {
        return true;
      }
    }
  }
  return false;
}
int main()
{
  system("cls");
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  bool res = subarray0Sum(a, n);
  cout << res << endl;
  return 0;
}