// Next Largest Element
// M1 (Naive Approach)
/*
#include <bits/stdc++.h>
using namespace std;
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

   for (int i = 0; i < n - 1; i++)
   {
       int flag = 0;
       int j;
       for (j = i + 1; j < n; j++)
       {
           if (a[j] > a[i])
           {
               flag = 1;
               cout << a[j] << " ";
               break;
           }
       }
       if (flag == 0)
       {
           cout << -1 << " ";
       }
   }
   cout << -1 << " ";

   return 0;
}
*/
// M2 (Using Stack)
#include <bits/stdc++.h>
using namespace std;
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
    vector<int> v;
    stack<int> s;
    for (int i = n - 1; i >= 0; i--)
    {
        if (s.size() == 0)
        {
            v.push_back(-1);
        }
        else if (s.size() > 0 && s.top() > a[i])
        {
            v.push_back(s.top());
        }
        else if (s.size() > 0 && s.top() <= a[i])
        {
            while (s.size() > 0 && s.top() <= a[i])
            {
                s.pop();
            }
            if (s.size() == 0)
            {
                v.push_back(-1);
            }
            else if (s.top() > a[i])
            {
                v.push_back(s.top());
            }
        }
        s.push(a[i]);
    }
    reverse(v.begin(), v.end());
    for (auto val : v)
    {
        cout << val << " ";
    }

    return 0;
}