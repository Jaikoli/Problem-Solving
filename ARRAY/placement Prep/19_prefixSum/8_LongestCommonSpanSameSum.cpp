#include <bits/stdc++.h>
using namespace std;

/*int longestSubArrayGivenSum(int a[], int n, int x)
{
  int res = 0;
  for (int i = 0; i < n; i++)
  {
    int sum = 0;
    for (int j = i; j < n; j++)
    {
      sum += a[j];
      if (sum == x)
      {
        res = max(res, j - i + 1);
      }
    }
  }
  return res;
}*/

int LongestCommonSpanSameSum(int a[], int n)
{
}

void printArray(int a[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << a[i] << " ";
  }
  cout << endl;
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
  int sum;
  cin >> sum;
  int res = LongestCommonSpanSameSum(a, n);
  cout << res << endl;
  return 0;
}