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
void maxsumsubarray(int a[], int n)
{
  int res = INT_MIN;
  for (int i = 0; i < n; i++)
  {
    int sum = 0;
    for (int j = i; j < n; j++)
    {
      sum += a[j];
      res = max(res, sum);
    }
  }

  cout << res << endl;
}*/

void maxsumsubarray(int a[], int n)
{
  int res = a[0];
  int max_sum = a[0];
  for (int i = 1; i < n; i++)
  {
    res = max(a[i], res + a[i]);
    max_sum = max(res, max_sum);
  }
  cout << max_sum;
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
  maxsumsubarray(a, n);

  return 0;
}