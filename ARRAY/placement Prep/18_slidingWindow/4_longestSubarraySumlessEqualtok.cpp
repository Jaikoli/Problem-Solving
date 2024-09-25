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

int longestSubarray(int a[], int n, int k)
{
  int l = 0, r = 0, res = 0, sum = 0;
  while (r < n - 1)
  {
    sum += a[r];

    while (sum > k)
    {
      sum -= a[l];
      l++;
    }

    if (sum <= k)
    {
      res = max(res, r - l + 1);
    }
    r++;
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
  int k;
  cin >> k;

  int res = longestSubarray(a, n, k);
  cout << res << endl;

  return 0;
}