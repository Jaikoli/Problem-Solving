#include <bits/stdc++.h>
using namespace std;

void printVector(vector<int> &v)
{

  cout << "Printing Vector" << endl;
  cout << "Size of Vector :" << v.size() << endl;

  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i] << " ";
  }

  cout << endl;
}

// void printArrayofVector(vector<int> a[], int N)
// {
//   for (int i = 0; i < N; i++)
//   {
//     cout << "Size of Vector " << i + 1 << ":" << a[i].size() << endl;
//     for (int j = 0; j < a[i].size(); j++)
//     {
//       cout << a[i][j] << " ";
//     }
//     cout << endl;
//   }
// }

// //Array of Vectors
// int main()
// {
//   system("cls");
//   int N;
//   cin >> N;
//   vector<int> a[N];
//   for (int i = 0; i < N; i++)
//   {
//     int n;
//     cin >> n;

//     for (int j = 0; j < n; j++)
//     {
//       int x;
//       cin >> x;
//       a[i].push_back(x);
//     }
//   }

//   for (int i = 0; i < N; i++)
//   {
//     printVector(a[i]);
//   }

//   return 0;
// }

// Vector of Vectors
int main()
{
  system("cls");
  vector<vector<int>> v;
  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    int num;
    cin >> num;
    // v.push_back(vector<int>{});
    vector<int> temp;
    for (int j = 0; j < num; j++)
    {
      int x;
      cin >> x;
      temp.push_back(x);
    }
    v.push_back(temp);
  }

  v[0].push_back(1111);
  for (int i = 0; i < v.size(); i++)
  {
    printVector(v[i]);
  }
  return 0;
}