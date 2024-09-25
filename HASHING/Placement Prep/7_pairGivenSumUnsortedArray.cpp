#include <bits/stdc++.h>
using namespace std;
/*
void pairSum(int a[], int n, int sum)
{
  for (int i = 0; i < n - 1; i++)
  {
    int find = sum - a[i];
    for (int j = i + 1; j < n; j++)
    {
      if (a[j] == find)
      {
        cout << "yes" << endl;
        return;
      }
    }
  }
  cout << "no" << endl;
}*/

void pairSum(int a[], int n, int sum)
{
  unordered_set<int> s;
  for (int i = 0; i < n; i++)
  {
    int fd = sum - a[i];
    if (s.find(fd) != s.end())
    {
      cout << "yes";
      return;
    }
    s.insert(a[i]);
  }
  cout << "no";
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
  pairSum(a, n, sum);

  return 0;
}