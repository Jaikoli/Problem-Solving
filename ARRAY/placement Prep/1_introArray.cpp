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
int insertPos(int a[], int n, int pos, int x, int cap)
{
  if (n == cap)
  {
    return n;
  }
  int idx = pos - 1;
  for (int i = n - 1; i >= idx; i--)
  {
    a[i + 1] = a[i];
  }
  a[idx] = x;

  return (n + 1);
}

int delElement(int a[], int n, int x)
{
  int i;
  for (i = 0; i < n; i++)
  {
    if (a[i] == x)
    {
      break;
    }
  }
  if (i == n)
  {
    return n;
  }
  for (int j = i; j < n - 1; j++)
  {
    a[j] = a[j + 1];
  }
  return n - 1;
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

  return 0;
}