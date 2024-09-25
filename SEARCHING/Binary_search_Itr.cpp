// Method I(Naive Approach)
/*#include <bits/stdc++.h>
using namespace std;
int binary_search(int a[], int n, int x)
{
    int index = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
            return i;
    }

    return index;
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
    int x;
    cin >> x;
    int index = binary_search(a, n, x);
    cout << index << endl;

    return 0;
}*/
// Method II (Best approach)(If Sorted Array is given)
/*
#include <bits/stdc++.h>
using namespace std;
int binary_search(int a[], int n, int x)
{
    int low, high, mid;
    low = 0;
    high = n - 1;
    while (low <= high)
    {
        mid = low + high / 2;
        if (a[mid] == x)
        {
            return mid;
        }
        else if (a[mid] > x)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
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
    int x;
    cin >> x;
    int index = binary_search(a, n, x                       );
    cout << index << endl;
    return 0;
}
*/
// Recursive Binary Search
/*
#include <bits/stdc++.h>
using namespace std;
void binary_search(int a[], int low, int high, int x)
{

    int mid = (low + high) / 2;
    if (a[mid] == x)
    {
        cout << mid;
        return;
    }
    else if (a[mid] > x)
        high = mid - 1;
    else
        low = mid + 1;
    if (low <= high)
    {
        binary_search(a, low, high, x);
    }
    else
        cout << -1 << endl;
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
    int x;
    cin >> x;
    binary_search(a, 0, n - 1, x);

    return 0;
}*/
// Method II (Recursive approach)(Sir Approach)
/*
#include <bits/stdc++.h>
using namespace std;
int binary_search(int a[], int low, int high, int x)
{
    if (low > high)
        return -1;
    int mid = (low + high) / 2;
    if (a[mid] == x)
        return mid;
    else if (a[mid] > x)
        return binary_search(a, low, mid - 1, x);
    else
        return binary_search(a, mid + 1, high, x);
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
    int x;
    cin >> x;
    int index = binary_search(a, 0, n - 1, x);
    cout << index << endl;

    return 0;
}*/
// 1.Index of First Occurence************************************************************************************
/*M1
#include <bits/stdc++.h>
using namespace std;
int first_occurence(int a[], int n, int x)
{
    int low = 0, high = n - 1, mid;

    while (low <= high)
    {
        mid = (low + high) / 2;
        if (a[mid] == x)
        {
            int i = mid;
            while (a[mid] == a[i] && i >= 0)
            {
                i--;
            }
            return i + 1;
        }
        else if (a[mid] > x)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
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
    int x;
    cin >> x;
    int index = first_occurence(a, n, x);
    cout << index << endl;

    return 0;
}*/
/*M2
#include <bits/stdc++.h>
using namespace std;
int binary_search(int a[], int low, int high, int x)
{
    if (low > high)
        return -1;
    int mid = (low + high) / 2;
    if (a[mid] == x)
    {
        if (a[mid - 1] == x && mid >= 1)
            return binary_search(a, low, mid - 1, x);
        else
            return mid;
    }
    else if (a[mid] > x)
    {
        return binary_search(a, low, mid - 1, x);
    }
    else
        return binary_search(a, mid + 1, high, x);
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
    int x;
    cin >> x;
    int index = binary_search(a, 0, n - 1, x);
    cout << index << endl;

    return 0;
}
*/
/*M3
// Best approach is Iterative approach
#include <bits/stdc++.h>
using namespace std;
int binary_search(int a[], int n, int x)
{
    int low = 0, mid;
    int high = n - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (a[mid] == x)
        {
            if (a[mid - 1] == x && mid >= 1)
            {
                high = mid - 1;
            }
            else
                return mid;
        }
        else if (a[mid] > x)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
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
    int x;
    cin >> x;
    int index = binary_search(a, n, x);
    cout << index << endl;

    return 0;
}
*/
// 2.Index of Last Occurence***************************************************************
// M1(Optiminised Approach)
/*
#include <bits/stdc++.h>
using namespace std;
int binary_search(int a[], int n, int x)
{
    int low = 0, mid;
    int high = n - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (a[mid] == x)
        { // M1
            // if (a[mid + 1] == x && mid + 2 <= n)
            // {
            //     low = mid + 1;
            // }
            // else
            // {
            //     return mid;
            // }
            if (a[mid + 1] != x || mid == (n - 1))
            {
                return mid;
            }
            else
            {
                low = mid + 1;
            }
        }
        else if (a[mid] > x)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
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
    int x;
    cin >> x;
    int index = binary_search(a, n, x);
    cout << index << endl;

    return 0;
}
*/
// Linear search
/*
#include <bits/stdc++.h>
using namespace std;
int binary_search(int a[], int n, int x)
{
    int index = -1;
    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] == x)
        {
            return i;
        }
    }
    return index;
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
    int x;
    cin >> x;
    int index = binary_search(a, n, x);
    cout << index << endl;

    return 0;
}
*/
// Count Occurences in Sorted Array*******************************************************************************
// o(n)
/*
#include <bits/stdc++.h>
using namespace std;
int count_occur(int a[], int n, int x)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
            count++;
        else if (a[i] > x)
            break;
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
    int x;
    cin >> x;
    int count = count_occur(a, n, x);
    cout << count << endl;
    return 0;
}*/
/*M2(O(Log(n)))
#include <bits/stdc++.h>
using namespace std;
int first_occur(int a[], int n, int x)
{
    int low, mid, high;
    low = 0;
    high = n - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (a[mid] == x)
        {
            if (a[mid - 1] == x && mid >= 1)
            {
                high = mid - 1;
            }
            else
                return mid;
        }
        else if (a[mid] > x)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
}
int last_occur(int a[], int n, int x)
{
    int low, mid, high;
    low = 0;
    high = n - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (a[mid] == x)
        {
            if (a[mid + 1] == x && mid + 2 <= n)
            {
                low = mid + 1;
            }
            else
                return mid;
        }
        else if (a[mid] > x)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
}
int count_occur(int a[], int n, int x)
{
    int first = first_occur(a, n, x);
    if (first == -1)
    {
        return 0;
    }
    else
        return (last_occur(a, n, x) - first + 1);
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
    int x;
    cin >> x;
    int count = count_occur(a, n, x);
    cout << count << endl;

    return 0;
}*/
// Count_1_Occur
// M1(Niave)
/*
#include <bits/stdc++.h>
using namespace std;
int count_1_occur(int a[], int n)
{

    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
        {
            return n - i;
        }
    }
    return 0;
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

    int count = count_1_occur(a, n);
    cout << count << endl;

    return 0;
}*/
// M2 (Use of Same First_Occur Function and then Return N-first)
// Square root*************************************************************************
// M1(inbuilt)(O(Log(n)))
/*
#include <bits/stdc++.h>
using namespace std;
int sq_root(int n)
{
    int srt = sqrt(n);
    return (int)(srt);
}
int main()
{
    system("cls");
    int n;
    cin >> n;

    int x = sq_root(n);
    cout << x << endl;

    return 0;
}
*/
// M2
/*
#include <bits/stdc++.h>
using namespace std;
int sq_root(int n)
{
    // for (int i = 0;; i++)
    // {
    //     int temp = i * i;
    //     if (temp == n || (n > temp && n < ((i + 1) * (i + 1))))
    //         return i;
    // }
    // int i = 0;
    // while (1)
    // {
    //     int temp = i * i;
    //     if (temp == n || (n > temp && n < ((i + 1) * (i + 1))))
    //         return i;
    //     i++;
    // }
    int i = 0;
    while (i * i <= n)
        i++;
    return i - 1;
}
int main()
{
    system("cls");
    int n;
    cin >> n;

    int x = sq_root(n);
    cout << x << endl;

    return 0;
}*/
// M3(Binary Search)(O(log(n)))
/*#include <bits/stdc++.h>
using namespace std;
int sq_root(int n)
{
    int low, high, mid;
    low = 0;
    high = n;
    int ans;
    while (high >= low)
    {
        mid = (low + high) / 2;
        if (n == mid * mid)
            return mid;
        else if (n > mid * mid)
        {
            low = mid + 1;
            ans = mid;
        }
        else
            high = mid - 1;
    }
    return ans;
}
int main()
{
    system("cls");
    int n;
    cin >> n;

    int x = sq_root(n);
    cout << x << endl;

    return 0;
}*/
// Search in Infinite size array*******************************************
/*TC:o(log(pos))
#include <bits/stdc++.h>
using namespace std;
int search_infinite_array(int low, int high, int x, vector<long long> v)
{
    int mid;

    while (high >= low)
    {
        mid = (low + high) / 2;
        if (v[mid] == x)
            return mid;
        else if (v[mid] > x)
        {
            high = mid - 1;
        }
        else
            low = mid + 1;
    }
    return -1;
}
int search(vector<long long> v, int x)
{
    if (v[0] == x)
        return 0;
    int i = 1;
    int temp;
    while (1)
    {
        if (v[i] < x)
        {
            temp = i;
            i *= 2;
        }
        else if (v[i] == x)
            return i;
        else
            break;
    }
    int mid = search_infinite_array(temp, i, x, v);
    return mid;
}

int main()
{
    system("cls");

    vector<long long> v;
    for (int i = 0;; i++)
    {
        long long x;
        cin >> x;
        if (x == -1)
            break;
        v.push_back(x);
    }
    // cout << "size=" << v.size() << endl;
    // cout << "last element=" << v[v.size() - 1];
    long long x;
    cin >> x;
    int index = search(v, x);
    cout << index << endl;

    return 0;
}*/
// Search in Sorted Rotated Array************************************************
/*
#include <bits/stdc++.h>
using namespace std;
int binary_search(int a[], int low, int high, int x)
{
    int mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (a[mid] == x)
        {
            return mid;
        }
        else if (a[mid] > x)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}
int search_sorted_rotated(int a[], int n, int x)
{
    int low, mid, high, temp;
    low = 0;
    high = n - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if ((a[mid] > a[mid - 1]) && (a[mid + 1] < a[mid]))
        {
            temp = mid;
            break;
        }
        else if ((a[mid] > a[mid - 1]) && (a[mid + 1] > a[mid]))
            low = mid + 1;
        else
            high = mid - 1;
    }
    // return -1;
    int s1 = binary_search(a, 0, temp, x);
    int s2 = binary_search(a, temp + 1, n - 1, x);
    return max(s1, s2);
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
    int x;
    cin >> x;
    int index = search_sorted_rotated(a, n, x);
    cout << index << endl;
    return 0;
}*/

/*//Sir's Solution(o(logn))
#include <bits/stdc++.h>
using namespace std;
int search_sorted_rotated(int a[], int n, int x)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (a[mid] == x)
            return mid;
        if (a[low] <= a[mid])
        {
            if (x >= a[low] && x < a[mid])
                high = mid - 1;
            else
                low = mid + 1;
        }
        else
        {
            if (x > a[mid] && x <= a[high])
            {
                low = mid + 1;
            }
            else
                high = mid - 1;
        }
    }
    return -1;
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
    int x;
    cin >> x;
    int index = search_sorted_rotated(a, n, x);
    cout << index << endl;
    return 0;
}*/
// Finding Peak Element (Not Smaller than neighbours)*********************************************************
// M1(Naive Solution)
/*
#include <bits/stdc++.h>
using namespace std;
auto peak_element(int a[], int n)
{
    vector<int> v;
    if (n == 1)
    {
        v.push_back(0);
        // return;
    }
    else
    {
        if (a[0] > a[1])
        {
            v.push_back(0);
        }
        if (a[n - 1] > a[n - 2])
        {
            v.push_back(n - 1);
        }
        for (int i = 1; i < n - 1; i++)
        {
            if (a[i] > a[i + 1] && a[i] > a[i - 1])
            {
                v.push_back(i);
            }
        }
    }
    return v;
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

    auto index = peak_element(a, n);
    for (auto i : index)
    {
        cout << i << endl;
    }
    return 0;
}
*/
// M2 (Efficient Approach)
/*
#include <bits/stdc++.h>
using namespace std;
int peak_element(int a[], int n)
{
    int low, high, mid;
    low = 0;
    high = n - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if ((mid == 0 || a[mid] >= a[mid - 1]) && (mid == n - 1 || a[mid] >= a[mid + 1]))
            return mid;
        else if (mid > 0 && a[mid] <= a[mid - 1])
            high = mid - 1;
        else
            low = mid + 1;
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

    auto index = peak_element(a, n);
    cout << index << endl;
    return 0;
}
*/
// Two Pointer Approach****************************************************************************************
// Check if exists a pair  adds up to a given target value.
// Method 1(Naive approach)
/*
#include <bits/stdc++.h>
using namespace std;
bool check_pair_sum(int a[], int n, int sum)
{
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] + a[j] == sum)
                return true;
        }
    }
    return flag;
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
    cin >> sum;
    if (check_pair_sum(a, n, sum))
        cout << "True";
    else
        cout << "False";

    return 0;
}*/
// M2 Two pointer approach
/*
#include <bits/stdc++.h>
using namespace std;
bool check_pair_sum(int a[], int n, int sum)
{
    bool flag = false;
    int low, high;
    low = 0;
    high = n - 1;
    while (low < high)
    {
        if (a[low] + a[high] == sum)
            return true;
        else if ((a[low] + a[high]) > sum)
            high--;
        else
            low++;
    }
    return flag;
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
    cin >> sum;
    if (check_pair_sum(a, n, sum))
        cout << "True";
    else
        cout << "False";

    return 0;
}*/
// Triplet in sorted Array*****************************************************************
// Naive Approach(0(n3))
/*#include <bits/stdc++.h>
using namespace std;

bool check_triplet_sum(int a[], int n, int x)
{
    for (int i = 0; i <= n - 3; i++)
    {
        for (int j = i + 1; j <= n - 2; j++)
        {
            for (int k = j + 1; k <= n - 1; k++)
            {
                if (a[i] + a[j] + a[k] == x)
                    return true;
            }
        }
    }
    return false;
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
    cin >> sum;
    if (check_triplet_sum(a, n, sum))
        cout << "True";
    else
        cout << "False";

    return 0;
}*/
// Efficient Approach(Using Two pointer)(o(n2))
/*
#include <bits/stdc++.h>
using namespace std;
bool check_pair_sum(int a[], int low, int high, int sum)
{
    bool flag = false;

    while (low < high)
    {
        if (a[low] + a[high] == sum)
            return true;
        else if ((a[low] + a[high]) > sum)
            high--;
        else
            low++;
    }
    return flag;
}
bool check_triplet_sum(int a[], int n, int x)
{
    int low, high;
    for (int i = 0; i < n - 2; i++)
    {
        low = i + 1;
        high = n - 1;
        if (check_pair_sum(a, low, high, x - a[i]))
            return true;
    }
    return false;
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
    cin >> sum;
    if (check_triplet_sum(a, n, sum))
        cout << "True";
    else
        cout << "False";

    return 0;
}*/
