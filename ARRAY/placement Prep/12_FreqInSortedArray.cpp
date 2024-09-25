
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
// Using map
/*void freqInSortedArray(int a[], int n)
{
  map<int, int> m;
  for (int i = 0; i < n; i++)
  {
    m[a[i]]++;
  }

  for (auto val : m)
  {
    cout << val.first << " " << val.second << endl;
  }
}*/
void freqInSortedArray(int a[], int n)
{
  int count = 1;
  for (int i = 1; i < n; i++)
  {
    if (a[i] > a[i - 1])
    {
      cout << a[i - 1] << " " << count << endl;
      count = 1;
    }
    else
    {
      count++;
    }
  }
  cout << a[n - 1] << " " << count << endl;
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
  freqInSortedArray(a, n);

  return 0;
}