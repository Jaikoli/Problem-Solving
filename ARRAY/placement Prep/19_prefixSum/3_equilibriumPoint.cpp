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
/*bool equilibriumPoint(int a[], int n)
{
  for (int i = 0; i < n; i++)
  {
    int left_sum = 0, right_sum = 0;
    for (int j = 0; j < i; j++)
    {
      left_sum += a[j];
    }
    for (int k = i + 1; k < n; k++)
    {
      right_sum += a[k];
    }
    if (left_sum == right_sum)
    {
      return true;
    }
  }
  return false;
}
*/

bool equilibriumPoint(int a[], int n)
{
  int totalsum = 0;
  for (int i = 0; i < n; i++)
  {
    totalsum += a[i];
  }
  int leftSum = 0;
  for (int i = 0; i < n; i++)
  {
    int rightSum = 0;
    rightSum = totalsum - a[i] - leftSum;
    if (leftSum == rightSum)
    {
      return true;
    }
    leftSum += a[i];
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

  return 0;
}