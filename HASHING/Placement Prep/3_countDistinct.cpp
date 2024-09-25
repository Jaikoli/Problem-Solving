#include <bits/stdc++.h>
using namespace std;

int countDistinct(int a[], int n)
{
  unordered_set<int> s;
  for (int i = 0; i < n; i++)
  {
    s.insert(a[i]);
  }
  return s.size();
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

  int res = countDistinct(a, n);
  cout << res << endl;

  return 0;
}