// Basic Printing String
/*#include <bits/stdc++.h>
using namespace std;
void print_str(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        cout << s[i];
    }
    for (auto i : s)
    {
        cout << i;
    }
}
int main()
{
    system("cls");
    string s;
    cin >> s;
    print_str(s);
    return 0;
}*/
/*#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (auto i : a)
    {
        cout << i << " ";
    }
    return 0;
}*/
//*******************************************************************************************************************
// Print Frequencies of character(In Sorted Order) in
// a string of lower case alphabets
// Method 1 (Using Map)
/*
#include <bits/stdc++.h>
using namespace std;
void print_freq(string s)
{
    map<char, int> m;
    int t = s.size();
    for (int i = 0; i < t; i++)
    {
        m[s[i]] = count(s.begin(), s.end(), s[i]);
    }
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }
}
int main()
{

    string str;
    cin >> str;
    print_freq(str);

    return 0;
}*/
// Method 2(Using Counting Array)
/*
#include <bits/stdc++.h>
using namespace std;
void print_freq(string s)
{
    int count[26] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        count[s[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (count[i] > 0)
        {
            cout << char(i + 'a') << " " << count[i] << endl;
        }
    }
}
int main()
{
    system("cls");
    string str;
    cin >> str;
    print_freq(str);

    return 0;
}*/
//****************************************************************************************************
// Reverse a string
// m1 (Using Inbuilt Function)
/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    system("cls");
    string s;
    cin >> s;
    reverse(s.begin(), s.end());
    for (auto i : s)
    {
        cout << i;
    }
    return 0;
}*/
//*****************************************************************************************************88
// Check_Palindrome
// M1(Reverse Concept)
/*
#include <bits/stdc++.h>
using namespace std;
bool check_palindrome(string s)
{
    string temp = s;
    reverse(s.begin(), s.end());
    if (s == temp)
        return true;
    return false;
}
int main()
{
    system("cls");
    string s;
    cin >> s;
    bool check = check_palindrome(s);
    if (check)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
*/
// M2(Using Two Pointers)
/*
#include <bits/stdc++.h>
using namespace std;
bool check_palindrome(string s)
{
    int low = 0;
    int high = s.size() - 1;
    while (high >= low)
    {
        if (s[low] == s[high])
        {
            low++;
            high--;
        }
        else
            return false;
    }
    return true;
}
int main()
{
    system("cls");
    string s;
    cin >> s;
    bool check = check_palindrome(s);
    if (check)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}*/
//********************************************************************************************
// Printing All Subsequences of A String

//********************************************************************************************
// Check for Anagram
/*  M1
#include <bits/stdc++.h>
using namespace std;
bool check_anagram(string s1, string s2)
{
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    if (s1 == s2)
        return true;
    return false;
}
int main()
{
    system("cls");
    string s1, s2;
    cin >> s1 >> s2;
    bool check = check_anagram(s1, s2);
    if (check)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}*/
/*M2
#include <bits/stdc++.h>
using namespace std;
bool check_anagram(string s1, string s2)
{

    int count1[26] = {0};
    int count2[26] = {0};
    for (int i = 0; i < s1.size(); i++)
    {
        count1[s1[i] - 'a']++;
    }
    for (int i = 0; i < s2.size(); i++)
    {
        count2[s2[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (count1[i] != count2[i])
        {
            return false;
        }
    }

    return true;
}
int main()
{
    system("cls");
    string s1, s2;
    cin >> s1 >> s2;
    bool check = check_anagram(s1, s2);
    if (check)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}*/
// Standard Character Counting Technique
/*
#include <bits/stdc++.h>
using namespace std;
bool check_anagram(string s1, string s2)
{
    int count[256] = {0};
    if (s1.length() != s2.length())
        return false;
    for (int i = 0; i < s1.size(); i++)
    {
        count[s1[i]]++;
        count[s2[i]]--;
    }
    for (int i = 0; i < 256; i++)
    {
        if (count[i] != 0)
            return false;
    }
    return true;
}
int main()
{
    system("cls");
    string s1, s2;
    cin >> s1 >> s2;
    bool check = check_anagram(s1, s2);
    if (check)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}*/

//*******************************************************************************************************

// Left Most repeating Character
// M1(Efficient Approach)
/*
#include <bits/stdc++.h>
using namespace std;
int left_most_repeating(string s)
{

    int count[26] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        count[s[i] - 'a']++;
    }
    for (int i = 0; i < s.size(); i++)
    {
        if ((count[s[i] - 'a']) > 1)
            return i;
    }

    return -1;
}
int main()
{
    system("cls");
    string s;
    cin >> s;
    int index = left_most_repeating(s);
    cout << index;
    return 0;
}*/
// M2(Most Efficient Method)
/*
#include <bits/stdc++.h>
using namespace std;
int left_most_repeating(string s)
{
    int count[256];
    fill(count, count + 256, -1);
    int res = INT_MAX;
    for (int i = 0; i < s.length(); i++)
    {
        int var = count[s[i]];
        if (var == -1)
        {
            count[s[i]] = i;
        }
        else
        {
            res = min(res, var);
        }
    }
    return (res == INT_MAX) ? -1 : res;
}
int main()
{
    system("cls");
    string s;
    cin >> s;
    int index = left_most_repeating(s);
    cout << index;
    return 0;
}*/
// m3(Using Visited Array)
/*
#include <bits/stdc++.h>
using namespace std;
int left_most_repeating(string s)
{
    bool count[256];
    int res = -1;
    fill(count, count + 256, false);
    for (int i = s.length() - 1; i >= 0; i--)
    {
        if (count[s[i]] == false)
            count[s[i]] = true;
        else
            res = i;
    }
    return res;
}
int main()
{
    system("cls");
    string s;
    cin >> s;
    int index = left_most_repeating(s);
    cout << index;
    return 0;
}*/

//**********************************************************************************
// Leftmost_non_repeating_element
/*m1
#include <bits/stdc++.h>
using namespace std;
int left_most_repeating(string s)
{

    int count[26] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        count[s[i] - 'a']++;
    }
    for (int i = 0; i < s.size(); i++)
    {
        if ((count[s[i] - 'a']) == 1)
            return i;
    }

    return -1;
}
int main()
{
    system("cls");
    string s;
    cin >> s;
    int index = left_most_repeating(s);
    cout << index;
    return 0;
}
*/
// m2
/*
#include <bits/stdc++.h>
using namespace std;
int left_most_repeating(string s)
{
    int count[256];
    int x;
    fill(count, count + 256, -1);
    for (int i = 0; i < s.length(); i++)
    {
        x = count[s[i]];
        if (x == -1)
            count[s[i]] = i;
        else
            count[s[i]] = -2;
    }
    int m_index = INT_MAX;
    for (int i = 0; i < 256; i++)
    {
        if (count[i] >= 0)
            m_index = min(m_index, count[i]);
    }
    return (m_index == INT_MAX) ? -1 : m_index;
}
int main()
{
    system("cls");
    string s;
    cin >> s;
    int index = left_most_repeating(s);
    cout << index;
    return 0;
}
*/
//**********************************************************************************
// Reverse Words in String
// m1
/*
#include <bits/stdc++.h>
using namespace std;
void reverse_words(string &s)
{
    int st = 0;
    for (int f = 0; f < s.length(); f++)
    {
        if (f == s.length() - 1)
        {
            reverse(s.begin() + st, s.begin() + f + 1);
        }
        if (s[f] == ' ')
        {
            reverse(s.begin() + st, s.begin() + f);
            st = f + 1;
        }
    }
    reverse(s.begin(), s.end());
}
int main()
{
    system("cls");
    string s;
    getline(cin, s);
    reverse_words(s);
    for (auto i : s)
    {
        cout << i;
    }
    return 0;
}
*/
// m2
/*
#include <bits/stdc++.h>
using namespace std;
void reverse_words(string &s)
{
    stack<string> st;
    string temp = "";
    for (int i = 0; i < s.length(); i++)
    {

        if (s[i] == ' ')
        {
            st.push(temp);
            temp = "";
        }
        else
        {
            temp += s[i];
        }
    }
    st.push(temp);

    while (!st.empty())
    {

        cout << st.top() << " ";
        st.pop();
    }
}

int main()
{
    system("cls");
    string s;
    getline(cin, s);
    reverse_words(s);

    return 0;
}*/
/*
#include <bits/stdc++.h>
using namespace std;
void reverse(string &s, int low, int high)
{
    while (high >= low)
    {
        swap(s[low], s[high]);
        low++;
        high--;
    }
}
void reverse_words(string &s)
{
    int st = 0, en = 0;
    int n = s.length();
    for (int en = 0; en < s.length(); en++)
    {
        if (s[en] == ' ')
        {
            reverse(s, st, en - 1);
            st = en + 1;
        }
    }
    reverse(s, st, n - 1);
    reverse(s, 0, n - 1);
}

int main()
{
    system("cls");
    string s;
    getline(cin, s);
    reverse_words(s);
    for (auto i : s)
    {
        cout << i;
    }

    return 0;
}
*/
//****************************************************************************************
// m1(Naive Approach)
/*#include <bits/stdc++.h>
using namespace std;
void patternsearch(string txt, string patt)
{
    int m = txt.length();
    int n = patt.length();
    for (int i = 0; i <= (m - n); i++)
    {
        int j;
        for (j = 0; j < n; j++)
        {
            if (patt[j] != txt[i + j])
                break;
        }
        if (j == n)
            cout << i << " ";
    }
}
int main()
{
    system("cls");
    string s1, s2;
    cin >> s1 >> s2;
    patternsearch(s1, s2);
    return 0;
}*/
