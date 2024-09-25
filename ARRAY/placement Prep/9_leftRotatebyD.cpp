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
/*
void leftRotatebyD(int a[], int n, int d)
{

  int t;
  int temp;
  for (int i = 0; i < d * n; i++)
  {
    t = i % n;
    if (t == 0)
    {
      temp = a[t];
    }
    a[t] = a[t + 1];
    if (t == n - 1)
    {
      a[t] = temp;
    }
  }
}*/
/*
void leftRotatebyD(int a[], int n, int d)
{
  int temp[d];
  for (int i = 0; i < d; i++)
  {
    temp[i] = a[i];
  }
  for (int i = d; i < n; i++)
  {
    a[i - d] = a[i];
  }

  for (int i = 0; i < d; i++)
  {
    a[n - d + i] = temp[i];
  }
}*/

void leftRotatebyD(int a[], int n, int d)
{
  reverse(a, a + d);
  reverse(a + d, a + n);
  reverse(a, a + n);
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

  int d;
  cin >> d;
  leftRotatebyD(a, n, d);
  printArray(a, n);
}