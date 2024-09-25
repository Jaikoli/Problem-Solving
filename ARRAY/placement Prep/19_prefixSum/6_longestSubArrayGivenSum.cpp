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

int longestSubArrayGivenSum(int a[], int n, int x)
{
  int res = 0;
  int ps[n];
  ps[0] = a[0];
  for (int i = 1; i < n; i++)
  {
    ps[i] = ps[i - 1] + a[i];
  }
  unordered_map<int, int> m;

  for (int i = 0; i < n; i++)
  {
    if (m.find(ps[i]) == m.end())
    {
      m.insert({ps[i], i});
    }
  }
  for (int i = 0; i < n; i++)
  {
    if (ps[i] == x)
    {
      res = i + 1;
    }

    if (m.find(ps[i] - x) != m.end())
    {
      res = max(res, i - m[ps[i] - x]);
    }
  }
  return res;
}

/*//SIR CODE
int longestSubArrayGivenSum(int a[], int n, int x)
{
  unordered_map<int, int> m;
  int ps=0,res=0;
   for (int i = 0; i < n; i++)
  {
  ps+=a[i];
    if (ps == x)
    {
      res = i + 1;
    }
    if (m.find(ps) == m.end())
    {
      m.insert({ps, i});
    }
    if (m.find(ps - x) != m.end())
    {
      res = max(res, i - m[ps - x]);
    }
  }
  return res;
}
*/

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
  int res = longestSubArrayGivenSum(a, n, sum);
  cout << res << endl;
  return 0;
}