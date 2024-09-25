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
/*void printallsubarray(int a[], int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = i; j < n; j++)
    {
      for (int k = i; k <= j; k++)
      {
        cout << a[k] << " ";
      }
      cout << endl;
    }
  }
}*/

void printallsubarray(int a[], int n)
{
  for (int i = 0; i < n; i++)
  {
    string sub = "";
    for (int j = i; j < n; j++)
    {
      sub += to_string(a[j]) + " ";
      cout << sub << endl;
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
  printallsubarray(a, n);

  return 0;
}