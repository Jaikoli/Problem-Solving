#include <bits/stdc++.h>
using namespace std;

bool subarray0Sum(int a[], int n)
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
    if (ps[i] == 0)
    {
      return true;
    }
    if (s.find(ps[i]) != s.end())
    {
      return true;
    }

    s.insert(ps[i]);
  }
  return false;
}

/*
bool subarray0Sum(int a[], int n)
{

  unordered_set<int> s;
  int ps = 0;
  for (int i = 0; i < n; i++)
  {
    ps += a[i];
    if (s.find(ps) != s.end())
    {
      return true;
    }
    if (ps == 0)
    {
      return true;
    }

    s.insert(ps);
  }
  return false;
}*/

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
  bool res = subarray0Sum(a, n);
  cout << res << endl;
  return 0;
}