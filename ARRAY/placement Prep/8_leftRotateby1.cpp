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
void leftRotateby1(int a[], int n)
{
  int temp = a[0];
  for (int i = 1; i < n; i++)
  {
    a[i - 1] = a[i];
  }
  a[n - 1] = temp;
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
  leftRotateby1(a, n);
  printArray(a, n);
}