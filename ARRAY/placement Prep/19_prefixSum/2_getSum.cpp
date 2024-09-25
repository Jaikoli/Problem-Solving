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
int getSum(int a[], int l, int r)
{
  int sum = 0;
  for (int i = l; i <= r; i++)
  {
    sum += a[i];
  }
  return sum;
}
*/
int getSum(int prefixSum[], int l, int r)
{
  if (l != 0)
  {
    return prefixSum[r] - prefixSum[l - 1];
  }
  else
  {
    return prefixSum[r];
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

  int res = getSum(a, 0, 5);
  cout << res << endl;

  int prefixSum[n];
  prefixSum[0] = a[0];
  for (int i = 1; i < n; i++)
  {
    prefixSum[i] = prefixSum[i - 1] + a[i];
  }

  int res2 = getSum(prefixSum, 1, 5);
  cout << res2 << endl;
  return 0;
}