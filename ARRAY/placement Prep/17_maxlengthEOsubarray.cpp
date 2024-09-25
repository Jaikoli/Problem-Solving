#include <bits/stdc++.h>
using namespace std;

void printArray(int a[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << a[i] << " ";
  }
  cout << endl;
}
/*
void longestEOsubarray(int a[], int n)
{
  int res = 1;
  for (int i = 0; i < n; i++)
  {
    int count = 1;
    for (int j = i + 1; j < n; j++)
    {
      if (a[j] % 2 == 0 && a[j - 1] % 2 != 0 || a[j - 1] % 2 == 0 && a[j] % 2 != 0)
      {
        count++;
        res = max(res, count);
      }
      else
      {
        break;
      }
    }
  }
  cout << res << endl;
}*/

void longestEOsubarray(int a[], int n)
{
  int res = 1;
  int count = 1;
  for (int i = 1; i < n; i++)
  {
    if (a[i] % 2 == 0 && a[i - 1] % 2 != 0 || a[i - 1] % 2 == 0 && a[i] % 2 != 0)
    {
      count++;
      res = max(res, count);
    }
    else
    {
      count = 1;
    }
  }
  cout << res << endl;
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
  longestEOsubarray(a, n);

  return 0;
}