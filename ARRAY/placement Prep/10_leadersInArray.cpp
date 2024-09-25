#include <bits/stdc++.h>
using namespace std;
void printArray(int a[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << a[i] << " ";
  }
  cout << endl;
} /*
 void leaderInArray(int a[], int n)
 {

   for (int i = 0; i < n; i++)
   {
     int flag = 1;
     for (int j = i + 1; j < n; j++)
     {
       if (a[j] >= a[i])
       {
         flag = 0;
         break;
       }
     }
     if (flag == 1)
     {
       cout << a[i] << " ";
     }
   }
 }*/

void leaderInArray(int a[], int n)
{
  int curld = a[n - 1];
  cout << a[n - 1] << " ";
  for (int i = n - 2; i >= 0; i--)
  {
    if (a[i] > curld)
    {
      curld = a[i];
      cout << a[i] << " ";
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
  leaderInArray(a, n);

  return 0;
}