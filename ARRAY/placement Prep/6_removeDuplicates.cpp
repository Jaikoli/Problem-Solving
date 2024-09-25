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
// Efficient Solution
int removeDuplicate(vector<int> &v)
{
  int n = v.size();
  int index = 1;
  for (int i = 1; i < n; i++)
  {
    if (v[i] != v[i - 1])
    {
      v[index] = v[i];
      index++;
    }
  }
  return index;
}
// O(n),O(n)
/*
int removeDuplicate(vector<int> &v)
{

  int n = v.size();
  if (n <= 1)
  {
    return n;
  }
  unordered_set<int> s;
  int index = 0;
  for (auto val : v)
  {
    if (s.find(val) == s.end())
    {
      v[index++] = val;
      s.insert(val);
    }
  }
  v.resize(index);
  return index;
}
*/
// Method 1
/*int removeDuplicates(int a[], int n)
{
  int temp[n];
  temp[0] = a[0];
  int j = 1;
  for (int i = 1; i < n; i++)
  {
    if (a[i] != a[i - 1])
    {
      temp[j] = a[i];
      j++;
    }
  }
  printArray(temp, j);
  cout << j << endl;
}*/

// Method 2
// Method 3

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
  // removeDuplicates(a, n);
  return 0;
}