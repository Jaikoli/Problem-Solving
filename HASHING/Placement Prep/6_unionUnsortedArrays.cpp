#include <bits/stdc++.h>
using namespace std;

int UnionTwoArrays(int a[], int n1, int b[], int n2)
{
  unordered_set<int> s;
  for (int i = 0; i < n1; i++)
  {
    s.insert(a[i]);
  }
  for (int i = 0; i < n2; i++)
  {
    s.insert(b[i]);
  }
  return s.size();
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

  int res = UnionTwoArrays(a, n1, b, n2);
  cout << res << endl;

  return 0;
}