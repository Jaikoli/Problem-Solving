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
void maxDifference(int a[], int n)
{
  int max = INT_MIN;
  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      if (a[j] - a[i] > max)
      {
        max = a[j] - a[i];
      }
    }
  }
  cout << max;
}*/

void maxDifference(int a[], int n)
{
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
  maxDifference(a, n);

  return 0;
}