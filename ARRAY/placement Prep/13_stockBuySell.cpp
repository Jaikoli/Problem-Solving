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
void Stockbuy(int a[], int n)
{
  int profit = 0;
  for (int i = 1; i < n; i++)
  {
    if (a[i] > a[i - 1])
    {
      profit += a[i] - a[i - 1];
    }
  }
  cout << profit << endl;
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
  Stockbuy(a, n);

  return 0;
}