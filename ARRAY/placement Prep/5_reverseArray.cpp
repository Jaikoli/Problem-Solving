#include <bits/stdc++.h>
using namespace std;

void reverseArray(int a[], int n)
{
  int i = 0;
  int j = n - 1;
  /*for (; i < n / 2; i++)
  {
    swap(a[i], a[j]);
    i++;
    j--;
  }*/

  while (i < j)
  {

    swap(a[i], a[j]);
    i++;
    j--;
  }
}

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
  reverseArray(a, n);
  printArray(a, n);
  return 0;
}