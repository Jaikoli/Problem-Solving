#include <bits/stdc++.h>
using namespace std;

int getMax(int a[], int n)
{
  int max = 0;
  for (int i = 1; i < n; i++)
  {
    if (a[i] > a[max])
    {
      max = i;
    }
  }
  return max;
}
int secondLargest(int a[], int n)
{
  int max = getMax(a, n);
  int res = -1;
  for (int i = 0; i < n; i++)
  {
    if (a[i] != a[max])
    {
      if (res == -1)
      {
        res = i;
      }
      else if (a[i] > a[res])
      {
        res = i;
      }
    }
  }
  return res;
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
  cout << secondLargest(a, n);
  return 0;
}