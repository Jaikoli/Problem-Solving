#include <bits/stdc++.h>
using namespace std;
/*NAIVE
bool checkSorted(int a[], int n){
  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      if (a[i] > a[j])
      {
        return false;
      }
    }
    return true;
  }
}

*/

bool checkSorted(int a[], int n)
{
  bool chk = true;
  for (int i = 1; i < n; i++)
  {
    if (a[i - 1] > a[i])
    {
      return false;
    }
  }

  return chk;
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

  bool chk = checkSorted(a, n);
  cout << chk << endl;

  return 0;
}