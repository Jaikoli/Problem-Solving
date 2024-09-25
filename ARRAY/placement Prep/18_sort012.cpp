#include <bits/stdc++.h>
using namespace std;

void sort012(int a[], int n)
{
  int cnt0 = 0, cnt1 = 0, cnt2 = 0;
  for (int i = 0; i < n; i++)
  {
    if (a[i] == 0)
    {
      cnt0++;
    }
    if (a[i] == 1)
    {
      cnt1++;
    }
    if (a[i] == 2)
    {
      cnt2++;
    }
  }

  int index = 0;
  while (cnt0--)
  {
    a[index++] = 0;
  }

  while (cnt1--)
  {
    a[index++] = 1;
  }

  while (cnt2--)
  {
    a[index++] = 2;
  }
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
  sort012(a, n);
  return 0;
}