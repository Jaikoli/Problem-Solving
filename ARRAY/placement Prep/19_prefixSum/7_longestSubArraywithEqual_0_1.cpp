#include <bits/stdc++.h>
using namespace std;

int longestSubArraywithEqual_0_1(int a[], int n)
{
  int res = 0;
  for (int i = 0; i < n; i++)
  {
    int s1 = 0, s2 = 0;
    for (int j = i; j < n; j++)
    {
      if (a[j] == 1)
      {
        s1++;
      }
      if (a[j] == 0)
      {
        s2++;
      }
      if (s1 == s2)
      {
        res = max(res, j - i + 1);
      }
    }
  }
  return res;
}
// Efficient approach
/*
Convert array where all 0s are convert to -1
Then call for function longest subarray with given sum
where sum=0*/
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

  int res = longestSubArraywithEqual_0_1(a, n);
  cout << res << endl;
  return 0;
}