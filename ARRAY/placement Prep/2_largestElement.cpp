#include <bits/stdc++.h>
using namespace std;
/*int findLargest(int a[], int n)
{
  int max = INT_MIN;
  for (int i = 0; i < n; i++)
  {
    if (a[i] > max)
    {
      max = a[i];
    }
  }
  return max;
}
*/
/*int findMax(int a[], int n)
{
  for (int i = 0; i < n; i++)
  {
    bool flag = true;
    for (int j = 0; j < n; j++)
    {
      if (a[j] > a[i])
      {

        flag = false;
        break;
      }
    }
    if (flag == true)
    {
      return i;
    }
  }
}*/
/*int findMin(int a[], int n)
{
  int min = INT_MAX;
  for (int i = 0; i < n; i++)
  {
    if (a[i] < min)
    {
      min = a[i];
    }
  }
  return min;
}*/
int getMax(int a[], int n)
{
  int res = 0;
  for (int i = 0; i < n; i++)
  {
    if (a[i] > a[res])
    {
      res = i;
    }
  }
  return res;
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

  int largest = getMax(a, n);
  // int smallest = findMin(a, n);
  cout << "Largest Element is : " << a[largest] << endl;
  // cout << "Smallest Element is : " << smallest << endl;

  return 0;
}