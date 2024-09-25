// Direct Address Table
/*#include <bits/stdc++.h>
using namespace std;

int hash[1000] = {0};
void insert(int x)
{
    ::hash[x - 1000] = 1;
}
void remove(int x)
{
    ::hash[x - 1000] = 0;
}
void search(int x)
{
    if (::hash[x] == 1)
        cout << "Found" << endl;
    else
        cout << "Not found" << endl;
}
int main()
{
    system("cls");
    insert(10);
    insert(20);
    insert(119);

    remove(119);
    search(10);
    search(20);
    search(119);

    return 0;
}*/
// For Storing Lowercase Alphabets
/*
#include <bits/stdc++.h>
using namespace std;
int count[26] = {0};
void insert(char ch)
{
    ::count[ch - 'a'] = 1;
}
void remove(char ch)
{
    ::count[ch - 'a'] = 0;
}
void search(char ch)
{
    if (::count[ch - 'a'] == 1)
        cout << "Found" << endl;
    else
        cout << "Not Found" << endl;
}
int main()
{
    system("cls");
    insert('a');
    insert('b');
    remove('a');
    search('a');
    insert('a');
    search('a');
    search('b');
    return 0;
}
*/
// Count Distinct Element
// M1 : Optimised Approach (Using Unordered Set)
/*#include <bits./stdc++.h>
using namespace std;

int Count_Distinct(int a[], int n)
{
    int count = 0;
    unordered_set<int> s;
    for (int i = 0; i < n; i++)
    {
        s.insert(a[i]);
    }
    return s.size();
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
    int count = Count_Distinct(a, n);
    cout << "Distinct Number of Elements are :" << count << endl;
    return 0;
}
*/
// M2 :Naive Approach (TC:O(N2),S:O(1))
/*
#include <bits./stdc++.h>
using namespace std;

int Count_Distinct(int a[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int flag = 0;
        for (int j = 0; j < i; j++)
        {
            if (a[i] == a[j])
                flag = 1;
        }
        if (flag == 0)
        {
            count++;
        }
    }

    return count;
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
    int count = Count_Distinct(a, n);
    cout << "Distinct Number of Elements are :" << count << endl;
    return 0;
}*/
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
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] > a[i])
            {
                cout << a[j] << " ";
                break;
            }
        }
    }
    cout << -1 << " ";

    return 0;
}