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
void maxConsecutive1s(int a[], int n)
{
  int res = 0;
  for (int i = 0; i < n; i++)
  {
    int count = 0;
    for (int j = i; j < n; j++)
    {
      if (a[j] == 1)
      {
        count++;
      }
      else
      {
        break;
      }
    }
    res = max(res, count);
  }
  cout << res << endl;
}*/

void maxConsecutive1s(int a[], int n)
{
  int res = 0;
  int count = 0;
  for (int i = 0; i < n; i++)
  {
    if (a[i] == 0)
    {
      count = 0;
    }
    else
    {
      count++;
      res = max(res, count);
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
  maxConsecutive1s(a, n);

  return 0;
}