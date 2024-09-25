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
// Method 1
/*
void moveZeros(int a[], int n)
{
  auto it = remove(a, a + n, 0);
  for (; it != a + n; it++)
  {
    (*it) = 0;
  }
}*/
// Method 2 Brute Force 1
/*void moveZeros(int a[], int n)
{
  int count = 0;
  int b[n];
  int j = 0;
  for (int i = 0; i < n; i++)
  {
    if (a[i] != 0)
    {
      b[j] = a[i];
      j++;
      count++;
    }
  }
  for (int i = 0; i < n; i++)
  {
    if (i < count)
      a[i] = b[i];
    else
      a[i] = 0;
  }
}*/
// Method 3 Naive Brute force
/*
void moveZeros(int a[], int n)
{
  for (int i = 0; i < n; i++)
  {
    if (a[i] == 0)
    {
      for (int j = i + 1; j < n; j++)
      {
        if (a[j] != 0)
        {
          swap(a[i], a[j]);
          break;
        }
      }
    }
  }
}
*/
// Efficient Approach

void moveZeros(int a[], int n)
{
  int count = 0;
  for (int i = 0; i < n; i++)
  {
    if (a[i] != 0)
    {
      swap(a[i], a[count]);
      count++;
    }
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
  moveZeros(a, n);
  printArray(a, n);
  return 0;
}