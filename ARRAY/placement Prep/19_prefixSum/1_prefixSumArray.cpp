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

  int prefixSum[n];
  prefixSum[0] = a[0];
  for (int i = 1; i < n; i++)
  {
    prefixSum[i] = prefixSum[i - 1] + a[i];
  }
  printArray(prefixSum, n);
  return 0;
}