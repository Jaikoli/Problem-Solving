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

int givenSumOfK(int a[], int n, int k, int gs)
{
  int curr_sum = 0;
  for (int i = 0; i < k; i++)
  {
    curr_sum += a[i];
  }

  if (curr_sum == gs)
  {
    return 1;
  }
  for (int i = k; i < n; i++)
  {
    curr_sum += (a[i] - a[i - k]);
    if (curr_sum == gs)
    {
      return 1;
    }
  }
  return 0;
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
  int k, sum;
  cin >> k >> sum;

  int res = givenSumOfK(a, n, k, sum);
  cout << res << endl;

  return 0;
}