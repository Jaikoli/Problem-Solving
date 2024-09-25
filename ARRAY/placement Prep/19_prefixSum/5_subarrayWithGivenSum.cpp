#include <bits/stdc++.h>
using namespace std;

bool subarrayGivenSum(int a[], int n, int x)
{
  int ps[n];
  ps[0] = a[0];
  for (int i = 1; i < n; i++)
  {
    ps[i] = ps[i - 1] + a[i];
  }

  unordered_set<int> s;
  for (int i = 0; i < n; i++)
  {
    if (ps[i] == x)
    {
      return true;
    }
    int fd = ps[i] - x;
    if (s.find(fd) != s.end())
    {
      return true;
    }
    s.insert(ps[i]);
  }
  return false;
}

/*
bool subarrayGivenSum(int a[], int n, int x)
{
  unordered_set<int> s;
  int ps=0;
  for (int i = 0; i < n; i++)
  {
  ps+=a[i];
    if (ps == x)
    {
      return true;
    }
    int fd = ps - x;
    if (s.find(fd) != s.end())
    {
      return true;
    }
    s.insert(ps);
  }
  return false;
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
  bool res = subarrayGivenSum(a, n, sum);
  cout << res << endl;
  return 0;
}