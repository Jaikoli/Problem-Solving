
/*#include <bits/stdc++.h>
using namespace std;
int main()
{
    system("cls");
    pair<int, int> p_array[5];
    cout << "Insert pair of element in array:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> p_array[i].first >> p_array[i].second;
    }
    // Printing the entire pair of elements in array
    for (int i = 0; i < 5; i++)
    {
        cout << p_array[i].first << "  " << p_array[i].second << endl;
    }
    // Swapping ith and jth array element in both the arrays
    swap(p_array[0], p_array[3]);
    // For swapping of pair elements in p_array ie above Q's ans
    cout << "************" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << p_array[i].first << "  " << p_array[i].second << endl;
    }
    return 0;
}*/
/*
#include <bits/stdc++.h>
using namespace std;
void print_vector(vector<int> j)
{
    cout << "Size of vector :" << j.size() << endl;
    for (int i = 0; i < j.size(); i++)
    {
        cout << j[i] << " ";
    }
}
int main()
{
    system("cls");
    vector<int> v(10, 7);
    v.push_back(12);
    v.push_back(15);
    print_vector(v);
    v.pop_back();
    // int n, x;
    // cout << "Enter number of elements to enter:";
    // cin >> n;
    // print_vector(v);
    // for (int i = 1; i <= n; i++)
    // {
    //     cin >> x;
    //     v.push_back(x);
    //     print_vector(v);
    // }
    print_vector(v);
    return 0;
}*/
/*
#include <bits/stdc++.h>
using namespace std;
void print_vector(vector<pair<int, int>> v)
{
    cout << "Printing Vector:" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].first << " " << v[i].second << endl;
    }
}
int main()
{
    system("cls");
    vector<pair<int, int>> v;
    int x, y, z;
    cin >> x;
    for (int i = 1; i <= x; i++)
    {
        cin >> y >> z;
        v.push_back(make_pair(y, z));
    }
    print_vector(v);
    return 0;
}
*/
// Vector of Array
/*
#include <bits/stdc++.h>
using namespace std;
void print_vector(vector<int> v)
{
    cout << "Printing Vector :" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{
    system("cls");
    int N;
    cin >> N;
    vector<int> v[N];
    for (int i = 0; i < N; i++)
    {
        int n;
        cin >> n;
        for (int j = 1; j <= n; j++)
        {
            int x;
            cin >> x;
            v[i].push_back(x);
        }
    }
    cout << "Loop for printing vectors:" << endl;
    for (int i = 0; i < N; i++)
    {
        print_vector(v[i]);
    }
    return 0;
}
*/
// Vector of Vectors
/*
#include <bits/stdc++.h>
using namespace std;
void print_vector(vector<vector<int>> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    system("cls");
    vector<vector<int>> v;
    int n, x;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int o;
        cin >> o;
        vector<int> temp;
        for (int j = 0; j < o; j++)
        {
            cin >> x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }
    cout << "Printing Vector of Vector:" << endl;
    print_vector(v);
    return 0;
}*/
/*
#include <bits/stdc++.h>
using namespace std;
void print_vector(vector<int> v[], int n)
{
    cout << "\nPrinting array of vectors\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}
int main()
{
    system("cls");
    vector<int> v[5];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        for (int j = 0; j < m; j++)
        {
            int x;
            cin >> x;
            v[i].push_back(x);
        }
    }
    print_vector(v, n);
}*/
/*
#include <bits/stdc++.h>
using namespace std;
void printmap(map<int, string> &m)
{
    cout << "\n Size of Map:" << m.size() << endl;
    for (auto k : m)
    {
        cout << k.first << " " << k.second << endl;
    }
}
int main()
{
    system("cls");
    map<int, string> m;
    m[1] = "Jai";
    m[2] = "Sushant";
    m[3] = "Viraj";
    m[3] = "Sasuke";
    m.insert({0, "Harish"});
    m.insert(make_pair(7, "Tushar"));
    map<int, string>::iterator i;
    for (i = m.begin(); i != m.end(); i++)
    {
        cout << (*i).first << " " << (*i).second << endl;
    }
    cout << "Printing by another method" << endl;
    for (auto &k : m)
    {
        cout << k.first << " " << k.second << endl;
    }
    cout << "Calling function for printing vector" << endl;
    printmap(m);
    cout << "Use of method find" << endl;
    cout << "Enter the element to find in map:";
    int k;
    cin >> k;
    auto it = m.find(k);
    if (it == m.end())
    {
        cout << "Value not found";
    }
    else
    {
        cout << (*it).first << " " << (*it).second << endl;
        m.erase(it);
    }
    printmap(m);
    cout << "Enter the element to delete from map:" << endl;
    cin >> k;
    m.erase(k);
    printmap(m);

    return 0;
}*/
/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    system("cls");
    int n;
    cin >> n;
    vector<string> v;
    for (int i = 0; i < n; i++)
    {
        string x;
        cin >> x;
        v.push_back(x);
    }
    map<string, int> m;
    for (int i = 0; i < n; i++)
    {
        m[v[i]] = count(v.begin(), v.end(), v[i]);
    }
    cout << "\nPrinting the final result :" << endl;
    for (auto k : m)
    {
        cout << k.first << " " << k.second << endl;
    }

    return 0;
}*/
/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    system("cls");
    map<string, int> m;
    // int n;
    // cin>>n;
    // for(int i=0;i<n;i++)
    // {
    //     string s;
    //     cin>>s;
    //     m[s]=
    // }
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        string s;
        cin >> s >> x;
        m[s];
    }
    for (auto k : m)
    {
        cout << k.first << " " << k.second << endl;
    }
    return 0;
}*/
/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    system("cls");
    int n;
    cin >> n;
    map<string, int> m;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        m[s]++;
    }
    for (auto d : m)
    {
        cout << d.first << " " << d.second << endl;
    }
    return 0;
}*/
/*
#include <bits/stdc++.h>
using namespace std;
void printset(set<string> s)
{
    set<string>::iterator it;
    for (it = s.begin(); it != s.end(); it++)
    {
        cout << (*it) << endl;
    }
    cout << "\nPrinting using second method:" << endl;
    for (auto v : s)
    {
        cout << v << endl;
    }
    cout << s.size();
}
int main()
{
    system("cls");
    set<string> s;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string t;
        cin >> t;
        s.insert(t);
    }
    printset(s);
    cout << "Enter the element to find:";
    string st;
    cin >> st;
    auto it = s.find(st);
    if (it != s.end())
    {
        s.erase(it);
    }
    printset(s);
    return 0;
}*/
/*
#include <bits/stdc++.h>
using namespace std;
void printset(set<string> &a)
{
    for (auto v : a)
    {
        cout << v << endl;
    }
}
int main()
{
    system("cls");
    unordered_set<string> s;
    int n;
    cin >> n;
    string st;
    for (int i = 0; i < n; i++)
    {
        cin >> st;
        s.insert(st);
    }
    int q;
    cin >> q;
    while (q--)
    {
        string qu;
        cin >> qu;
        if (s.find(qu) == s.end())
        {
            cout << "no" << endl;
        }
        else
        {
            cout << "yes" << endl;
        }
    }

    return 0;
}*/
/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;

    long long max;
    cin >> t;
    while (t--)
    {
        long long count = 0;
        int n, k;
        cin >> n >> k;
        multiset<long long> m;

        for (int i = 0; i < n; i++)
        {
            long long c;
            cin >> c;
            m.insert(c);
        }

        for (int i = 0; i < k; i++)
        {
            auto it = m.rbegin();
            max = *(it);
            m.erase(m.find(max));
            m.insert(max / 2);
            count += max;
        }

        cout << count << endl;
    }
}*/

/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    system("cls");
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        multiset<long long> m;
        for (int i = 0; i < n; i++)
        {
            long long c;
            cin >> c;
            m.insert(c);
        }
        long long count = 0;
        for (int i = 0; i < k; i++)
        {
            auto it = --m.end();
            long long max = *it;
            count += max;
            m.erase(it);
            m.insert(max / 2);
        }
        cout << count << endl;
    }
    return 0;
}*/
/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;
    set<int> s;
    while (q--)
    {
        int y, x;
        cin >> y >> x;

        if (y == 1)
        {
            s.insert(x);
        }
        else if (y == 2)
        {
            if (s.find(x) != s.end())
            {
                s.erase(x);
            }
        }
        else if (y == 3)
        {
            if (s.find(x) != s.end())
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
    }
    return 0;
}*/
/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    system("cls");
    int t, n, m;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        multiset<int> s;
        for (int i = 0; i < n; i++)
        {
            long long x;
            cin >> x;
            s.insert(x);
        }
        for (int i = 0; i < m; i++)
        {
            long long y;
            cin >> y;
            if (s.find(y) != s.end())
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}*/
/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    system("cls");
    int t, n, m;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        multiset<int> s;
        for (int i = 0; i < n + m; i++)
        {
            if (i < n)
            {
                long long x;
                cin >> x;
                s.insert(x);
            }
            else
            {
                long long y;
                cin >> y;
                if (s.find(y) != s.end())
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
        }
    }
    return 0;
}*/
/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    system("cls");
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        set<string> r;
        for (int i = 0; i < n; i++)
        {
            cin >> s;
            r.insert(s);
        }
        for (auto v : r)
        {
            cout << v << endl;
        }
    }
    return 0;
}*/
/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    system("cls");
    int n;
    cin >> n;
    multimap<int, string> s;
    for (int i = 0; i < n; i++)
    {
        int x;
        string y;

        cin >> y >> x;
        if (x <= 100)
            s.insert({x, y});
    }

    for (auto it = s.rbegin(); it != s.rend(); it++)
    {
        cout << (*it).second << " " << (*it).first << endl;
    }
    return 0;
}*/
/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    system("cls");
    map<pair<string, string>, vector<int>> m;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        pair<string, string> temp;
        cin >> temp.first >> temp.second;
        vector<int> v;
        for (int i = 0; i < 5; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        m[temp] = v;
    }
    cout << "\nPrinting" << endl;
    for (auto v : m)
    {
        cout << v.first.first << " " << v.first.second << " ";
        for (auto vec : v.second)
        {
            cout << vec << " ";
        }
        cout << endl;
    }
    return 0;
}*/
/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    system("cls");
    int n;
    cin >> n;
    map<int, multiset<string>> m;
    for (int i = 0; i < n; i++)
    {
        string name;
        int marks;
        cin >> name >> marks;
        if (marks <= 100 && name.size() <= 100)
            m[marks].insert(name);
    }
    for (auto it = m.rbegin(); it != m.rend(); it++)
    {
        auto &set = it->second;
        int marks = it->first;
        for (auto &v : set)
        {
            cout << v << " " << marks << endl;
        }
    }
    return 0;
}*/
/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    system("cls");
    queue<int> s;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.push(x);
    }
    while (!s.empty())
    {
        cout << s.front() << endl;
        s.pop();
    }
    return 0;
}*/
// Balanced Paranthesis
/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    system("cls");
    stack<char> s;
    string t;
    cin >> t;
    int i;
    if (s.empty())
    {
        for (i = 0; i < t.size(); i++)
        {
            if (t[i] == '(')
                s.push(t[i]);
            else if (t[i] == ')' && !(s.empty()))
            {
                s.pop();
            }
            else
            {
                cout << "no";
                return 0;
            }
        }
        if (i = (t.size()) && (s.empty()))
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }

    return 0;
}*/
/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    system("cls");
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    stack<int> s;
    for (auto it = v.rbegin(); it != v.rend(); it++)
    {
        s.push((*it));
    }
    while (!s.empty())
    {
        int top = s.top();
        s.pop();
        stack<int> s1;
        s1 = s;
        int flag = 0;
        while (!s1.empty())
        {

            int e = s1.top();
            s1.pop();
            if (e > top)
            {
                flag = 1;
                cout << e << endl;
                break;
            }
        }
        if (flag == 0)
        {
            cout << -1 << endl;
        }
    }

    return 0;
}*/
/*
#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int, int> a, pair<int, int> b)
{
    if (a.first != b.first)
    {
        return a.first < b.first;
    }
    else
    {
        return a.second > b.second;
    }
}
void printval(auto v)
{
    for (auto p : v)
    {
        cout << p.first << " " << p.second << endl;
    }
}
int main()
{
    system("cls");
    int n;
    cin >> n;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        v.push_back({x, y});
    }
    sort(v.begin(), v.end(), cmp);
    printval(v);
}*/
/*
#include <bits/stdc++.h>
using namespace std;
bool cmp(int a, int b)
{
    return a > b;
}
int main()
{
    system("cls");
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end(), cmp);
    for (auto i : v)
    {
        cout << i << endl;
    }
    return 0;
}*/
/*
#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int, string> a, pair<int, string> b)
{
    if (a.first != b.first)
    {
        return a.first > b.first;
    }
    else
    {
        return a.second < b.second;
    }
}
int main()
{
    system("cls");
    int n;
    cin >> n;
    vector<pair<int, string>> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        string y;
        cin >> y >> x;
        v.push_back({x, y});
    }
    sort(v.begin(), v.end(), cmp);
    for (auto p : v)
    {
        cout << p.second << " " << p.first << endl;
    }
} */
/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    system("cls");
    int n;
    cin >> n;
    int a[n];
    cout << "Enter array:";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        if (count(a, a + n, a[i]) > 1)
            m.insert({a[i], count(a, a + n, a[i])});
    }
    for (auto v : m)
    {
        cout << v.first << " " << v.second << endl;
    }

    return 0;
}*/
//  Common Elements between 2 Vectors
/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    system("cls");
    int n;
    cin >> n;
    vector<int> v1, v2;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v1.push_back(x);
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v2.push_back(x);
    }
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    vector<int> v(v1.size() + v2.size());
    auto it = set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), v.begin());
    for (auto sr = v.begin(); sr != it; sr++)
    {
        cout << *sr << " ";
    }
}*/
// Revision practice of STL
/*
#include <bits/stdc++.h>
using namespace std;

void printvec(vector<int> &v)
{
    vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
}

void printarray(vector<int> a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Size:" << a[i].size() << endl;
        for (int j = 0; j < a[i].size(); j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    system("cls");
    int n;
    cin >> n;
    vector<vector<int>> v;
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        vector<int> temp;
        for (int j = 0; j < m; j++)
        {
            int x;
            cin >> x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }

    for (int i = 0; i < n; i++)
    {
        printvec(v[i]);
        cout << endl;
    }
}
*/
/*
#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("cls");
    map<pair<string, string>, vector<int>> m;
    int n, r, marks;
    vector<int> temp;

    cin >> n;
    string fn, ln;
    while (n--)
    {
        cin >> fn >> ln >> r;
        while (r--)
        {
            cin >> marks;
            m[{fn, ln}].push_back(marks);
        }
    }
    for (auto v : m)
    {
        cout << v.first.first << " " << v.first.second << endl;
        for (auto vec : v.second)
        {
            cout << vec << " ";
        }
        cout << endl;
    }
}
*/
/// STACK_GFG
// Balanced Paranthesis M1
/*
#include <bits/stdc++.h>
using namespace std;
bool match(char a, char b)
{
    return ((a == '(' && b == ')') || (a == '{' && b == '}') || (a == '[' && b == ']'));
}
bool chk(char c)
{
    if (c == '(' || c == '{' || c == '[')
        return true;
    else
        return false;
}
bool sol(string &s)
{
    stack<char> st;

    for (int i = 0; i < s.size(); i++)
    {

        if (chk(s[i]))
        {
            st.push(s[i]);
        }
        else
        {
            if (st.empty())
                return false;
            char p = st.top();

            st.pop();
            bool result = match(p, s[i]);
            if (result == false)
                return false;
        }
    }
    if (st.empty())
        return true;
    else
        return false;
}
int main()
{
    system("cls");
    string s;
    cin >> s;
    bool ans = sol(s);
    if (ans == true)
        cout << "yes";
    else
        cout << "no";
}*/
/*
#include <bits/stdc++.h>
using namespace std;
bool match(char a, char b)
{
    return ((a == '(' && b == ')') || (a == '{' && b == '}') || (a == '[' && b == ']'));
}
bool chk(char c)
{
    if (c == '(' || c == '{' || c == '[')
        return true;
    else
        return false;
}
bool sol(string &s)
{
    stack<char> st;

    for (int i = 0; i < s.size(); i++)
    {

        if (chk(s[i]))
        {
            st.push(s[i]);
        }
        else
        {
            if (st.empty())
                return false;

            char p = st.top();
            st.pop();
            bool result = match(p, s[i]);
            if (result == false)
                return false;
        }
    }
    // if (st.empty())
    //     return true;
    // else
    //     return false;
    return(st.empty()==true);
}
int main()
{
    system("cls");
    string s;
    cin >> s;
    bool ans = sol(s);
    if (ans == true)
        cout << "yes";
    else
        cout << "no";
}*/
/*
#include <bits/stdc++.h>
using namespace std;
class twostack
{
    int *a;
    int cap;
    int top1;
    int top2;

public:
    twostack(int n)
    {
        cap = n;
        a = new int[n];
        top1 = -1;
        top2 = cap;
    }
    void push1(int x)
    {
        if (top1 + 1 < top2)
        {
            top1++;
            a[top1] = x;
        }
        else
        {
            cout << "Stack Overflow";
        }
    }
    void push2(int x)
    {
        if (top2 - 1 > top1)
        {
            top2--;
            a[top2] = x;
        }
        else
        {
            cout << "Stack Overflow";
        }
    }
    void pop1()
    {
        if(top1>0)
        {
            top1--;
        }
        else
        {
            cout<<"Stack Undeflow";
        }
    }
    void pop2()
    {
        if(top2<n)
        {
            top2++;
        }
        else
        {
            cout<<"Stack Undeflow";
        }
    }
    int size1()
    {
        return(top1+1);

    }
     int size2()
    {
        return(n-top2);

    }
};

*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    system("cls");
    string s;
    cin >> s;
    cout << *s.begin();
    auto r = --s.end();
    cout << *r;

    return 0;
}