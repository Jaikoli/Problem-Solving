// Sorting Function
/*#include <bits/stdc++.h>
using namespace std;
void print_vector(vector<int> v)
{
    for (auto i : v)
    {
        cout << i << " ";
    }
}
int main()
{
    system("cls");
    int n, sum;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end(), greater<int>());
    // sort(v.rbegin(), v.rend());
    print_vector(v);
    return 0;
}*/
/*************************************************************************************************************
If Same Marks Then Arrange Name in Lexo. Order
#include <bits/stdc++.h>
using namespace std;
void print(vector<pair<int, string>> v)
{
    for (auto i : v)
    {
        cout << i.first << " " << i.second << endl;
    }
}
bool cmp(pair<int, string> a, pair<int, string> b)
{
    if (a.first != b.first)
        return (a.first < b.first);
    else
        return (a.second < b.second);
}
int main()
{
    system("cls");
    int n, sum;
    cin >> n;
    vector<pair<int, string>> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        string y;
        cin >> x >> y;
        v.push_back({x, y});
    }
    sort(v.begin(), v.end(), cmp);
    print(v);

    return 0;
}*/
// Bubble Sort*************************************************************************************************
/*#include <bits/stdc++.h>
using namespace std;
void bubble_sort(int a[], int n)
{
    // int j = n - 1;
    // while (j > 0)
    // {
    //     for (int i = 0; i < j; i++)
    //     {
    //         if (a[i + 1] < a[i])
    //             swap(a[i], a[i + 1]);
    //     }
    //     j--;
    // }
    for (int j = n - 1; j > 0; j--)
    {
        for (int i = 0; i < j; i++)
        {
            if (a[i + 1] < a[i])
                swap(a[i], a[i + 1]);
        }
    }
    //sir
    // for (int i = 0; i < n - 1; i++)
    // {
    //     for (int j = 0; j < n - 1 - i; j++)
    //     {
    //         if (a[j] > a[j + 1])
    //             swap(a[j], a[j + 1]);
    //     }
    // }
}
int main()
{
    system("cls");
    int n, sum;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    bubble_sort(a, n);
    for (auto i : a)
    {
        cout << i << " ";
    }
    return 0;
}*/

// Selection Sort*************************************************************************
// Naive Appproach( M1)
/*
#include <bits/stdc++.h>
using namespace std;
int min(int a[], int n)
{
    int min = INT_MAX;
    int temp;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
            temp = i;
        }
    }
    return temp;
}
void selection_sort(int a[], int n)
{
    int temp[n];
    for (int i = 0; i < n; i++)
    {
        int min_index = min(a, n);
        temp[i] = a[min_index];
        a[min_index] = INFINITY;
    }
    for (int i = 0; i < n; i++)
    {
        a[i] = temp[i];
    }

}
int main()
{
    system("cls");
    int n, sum;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    selection_sort(a, n);
    for (auto i : a)
    {
        cout << i << " ";
    }
    return 0;
}*/
// M2(Selection Sort)
/*
#include <bits/stdc++.h>
using namespace std;
int min(int a[], int n, int low)
{
    int min = INT_MAX;
    int temp;
    for (int i = low; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
            temp = i;
        }
    }
    return temp;
}
void selection_sort(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        swap(a[i], a[min(a, n, i)]);
    }
}
int main()
{
    system("cls");
    int n, sum;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    selection_sort(a, n);
    for (auto i : a)
    {
        cout << i << " ";
    }
    return 0;
}
*/
// Insertion Sort*******************************************************************8
/*#include <bits/stdc++.h>
using namespace std;
void insertion_sort(int a[], int n)
{
    int key, j;
    for (int i = 1; i < n; i++)
    {
        key = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
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
    insertion_sort(a, n);
    for (auto i : a)
    {
        cout << i << " ";
    }
    return 0;
}*/
// Merging Two Sorted Array*********************************************
/*M1(Not Recommended)
#include <bits/stdc++.h>
using namespace std;
void merge_two_Sortedarray(int a[], int n1, int n2, int b[], int c[])
{
    int i, j, k;
    i = 0;
    j = 0;
    k = 0;
    int r;
    if (n1 > n2)
    {
        r = n1 - n2;
        for (int i = n1; i < n1 + r; i++)
        {
            a[i] = INT_MAX;
        }
    }
    else
    {
        r = n2 - n1;
        for (int i = n2; i < n2 + r; i++)
        {
            b[i] = INT_MAX;
        }
    }

    while ((i < n1 || i < n1 + r) && (j < n2 + r || j < n2))
    {
        if (a[i] >= b[j])
        {
            c[k] = b[j];
            j++;
            k++;
        }
        else
        {
            c[k] = a[i];
            i++;
            k++;
        }
    }
}
int main()
{
    system("cls");
    int n1, n2;
    cin >> n1 >> n2;
    int a[n1], b[n2];
    for (int i = 0; i < n1; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n2; i++)
    {
        cin >> b[i];
    }
    int t = n1 + n2;
    int c[t];
    merge_two_Sortedarray(a, n1, n2, b, c);
    for (auto i : c)
    {
        cout << i << " ";
    }

    return 0;
}
*/
// M2(Naive approach)
/*#include <bits/stdc++.h>
using namespace std;
void merge_two_Sortedarray(int a[], int b[], int n1, int n2)
{
    int c[n1 + n2];
    for (int i = 0; i < n1; i++)
    {
        c[i] = a[i];
    }
    for (int i = 0; i < n2; i++)
    {
        c[i + n1] = b[i];
    }
    sort(c, c + n1 + n2);
    for (auto i : c)
    {
        cout << i << " ";
    }
}
int main()
{
    system("cls");
    int n1, n2;
    cin >> n1 >> n2;
    int a[n1], b[n2];
    for (int i = 0; i < n1; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n2; i++)
    {
        cin >> b[i];
    }

    merge_two_Sortedarray(a, b, n1, n2);

    return 0;
}*/
/*//m3
#include <bits/stdc++.h>
using namespace std;
void merge_two_Sortedarray(int a[], int b[], int n1, int n2)
{
  int i, j;
  i = j = 0;
  while (i < n1 && j < n2)
  {
      if (a[i] >= b[j])
      {
          cout << b[j] << " ";
          j++;
      }
      else
      {
          cout << a[i] << " ";
          i++;
      }
  }
  while (i < n1)
  {
      cout << a[i] << " ";
      i++;
  }
  while (j < n2)
  {
      cout << b[j] << " ";
      j++;
  }
}
int main()
{
  system("cls");
  int n1, n2;
  cin >> n1 >> n2;
  int a[n1], b[n2];
  for (int i = 0; i < n1; i++)
  {
      cin >> a[i];
  }
  for (int i = 0; i < n2; i++)
  {
      cin >> b[i];
  }

  merge_two_Sortedarray(a, b, n1, n2);

  return 0;
}*/
// Merge Function of merge sort******************************************************
/*
#include <bits/stdc++.h>
using namespace std;
void merge_function(int a[], int low, int mid, int high)
{
    int r = high - low + 1;
    int i = low;
    int j = mid + 1;
    int c[r];
    int k = 0;
    while ((i < mid + 1) && (j < high + 1))
    {
        if (a[i] <= a[j])
        {
            c[k] = a[i];
            i++;
            k++;
        }
        else
        {
            c[k] = a[j];
            j++;
            k++;
        }
    }
    while (i < mid + 1)
    {
        c[k] = a[i];
        i++;
        k++;
    }
    while (j < high + 1)
    {
        c[k] = a[j];
        j++;
        k++;
    }
    for (int i = 0; i < r; i++)
    {
        a[i + low] = c[i];
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
    int low, high, mid;
    cin >> low >> mid >> high;
    merge_function(a, low, mid, high);
    for (auto i : a)
    {
        cout << i << " ";
    }

    return 0;
}
*/
// Intersection of sorted array**********************************************
/*#include <bits/stdc++.h>
using namespace std;
void intersection_of_sortedarray(int a[], int b[], int x, int y)
{

    int i = 0;
    int j = 0;
    vector<int> c;

    while (i < x && j < y)
    {
        while (a[i] == a[i + 1] && i < x - 1)
        {
            i++;
        }
        while (b[j] == b[j + 1] && j < y - 1)
        {
            j++;
        }
        if (a[i] != b[j])
        {
            if (a[i] < b[j])
                i++;
            else if (a[i] > b[j])
                j++;
        }
        else if (a[i] == b[j])
        {
            c.push_back(a[i]);
            i++;
            j++;
        }
    }
    for (auto i : c)
    {
        cout << i << " ";
    }
}
int main()
{
    system("cls");
    int x, y;
    cin >> x >> y;
    int a[x];
    int b[y];
    for (int i = 0; i < x; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < y; i++)
    {
        cin >> b[i];
    }

    intersection_of_sortedarray(a, b, x, y);

    return 0;
}
*/
// Naive Partition***********************************************************************
/*#include <bits/stdc++.h>
using namespace std;
void naive_partition(int a[], int n, int k)
{
    int c[n];
    int r = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < a[k])
        {
            c[r] = a[i];
            r++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] == a[k])
        {
            c[r] = a[i];
            r++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] > a[k])
        {
            c[r] = a[i];
            r++;
        }
    }
    for (auto i : c)
    {
        cout << i << " ";
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
    int index;
    cin >> index;
    naive_partition(a, n, index);
    return 0;
}
*/
// Lomuto Partition***********************************************************************************************8
/*
#include <bits/stdc++.h>
using namespace std;
void lomuto_partition(int a[], int low, int high)
{
    int pivot = a[high];
    int i = low - 1;
    for (int j = 0; j < high - 1; j++)
    {
        if (a[j] <= pivot)
        {
            i++;
            swap(a[i], a[j]);
        }
    }
    swap(a[i + 1], a[high]);
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
    int l, h;
    cin >> l >> h;

    lomuto_partition(a, l, h);
    for (auto i : a)
    {
        cout << i << " ";
    }
    return 0;
}
*/