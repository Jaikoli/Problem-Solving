#include <bits/stdc++.h>
using namespace std;

int intersectionTwoArrays(int a[], int n1, int b[], int n2)
{
  unordered_set<int> s1;
  for (int i = 0; i < n1; i++)
  {
    s1.insert(a[i]);
  }
  int count = 0;
  for (int i = 0; i < n2; i++)
  {
    auto it = s1.find(b[i]);
    if (it != s1.end())
    {
      count++;
      s1.erase(it);
    }
  }
  return count;
}
int main()
{
  system("cls");
  int n1, n2;
  cin >> n1 >> n2;
  int a[n1], b[n2];
  for (int i = 0; i < n1; i++)
  {
    cin >> a[i];
  }
  for (int i = 0; i < n2; i++)
  {
    cin >> b[i];
  }

  int res = intersectionTwoArrays(a, n1, b, n2);
  cout << res << endl;

  return 0;
}