#include <bits/stdc++.h>
using namespace std;

void freqArrayElements(int a[], int n)
{
  unordered_map<int, int> m;
  for (int i = 0; i < n; i++)
  {
    m[a[i]]++;
  }
  for (int i = 0; i < n; i++)
  {
    if (m[a[i]] != -1)
    {
      cout << a[i] << " " << m[a[i]] << endl;
    }
    m[a[i]] = -1;
  }
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

  freqArrayElements(a, n);

  return 0;
}