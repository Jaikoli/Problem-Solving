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
int maxSumOfK(int a[], int n, int k)
{
  int res = INT_MIN;
  for (int i = 0; i <= n - k; i++)
  {
    int sum = 0;
    for (int j = i; j < i + k; j++)
    {
      sum += a[j];
    }
    res = max(res, sum);
  }
  return res;
}*/

/*
int maxSumOfK(int a[], int n, int k)
{
  int curr_sum = 0;
  for (int i = 0; i < k; i++)
  {
    curr_sum += a[i];
  }

  int res = curr_sum;
  for (int i = k; i < n; i++)
  {
    curr_sum += (a[i] - a[i - k]);
    res = max(curr_sum, res);
  }
  return res;
}*/
// 2 pntr
int maxSumOfK(int a[], int n, int k)
{
  int l = 0, r = k, sum = 0;
  for (int i = l; i < r; i++)
  {
    sum += a[i];
  }
  int res = sum;
  while (r <= n - 1)
  {
    sum -= (a[l]);
    l++;
    r++;
    sum += a[r];
    res = max(res, sum);
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

  int res = maxSumOfK(a, n, k);
  cout << res << endl;

  return 0;
}