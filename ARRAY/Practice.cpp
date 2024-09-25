// Array are always are passed by reference
/*
#include <bits/stdc++.h>
using namespace std;
void pass(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        a[i] *= 5;
    }
}
int main()
{
    system("cls");
    int n = 5;
    int a[5] = {22, 321, 34, 321, 34};
    pass(a, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }
    return 0;
}*/
/*#include <bits/stdc++.h>
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
    for (int i = 0; i < n; i++)
        cout << "Address of " << i + 1 << "element:" << a + i << endl;

    return 0;
}*/
// Linear searching in array
/*
#include <bits/stdc++.h>
using namespace std;
int linear_search(int a[], int n)
{
    int e;
    cout << "\nEnter element to search:";
    cin >> e;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == e)
        {
            return i;

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
    int i = linear_search(a, n);
    cout << i << endl;
    return 0;
}*/
/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    system("cls");
    int n, x;
    cin >> n;
    int a[n];
    cin >> x;
    for (int i = 0; i < x; i++)
    {
        cin >> a[i];
    }
    int pos, ele;
    cin >> pos >> ele;
    for (int i = x; i > (pos - 1); --i)
    {
        a[i] = a[i - 1];
    }
    a[pos - 1] = ele;
    for (int i = 0; i < (x + 1); i++)
    {
        cout << a[i] << endl;
    }
    return 0;
}*/
// Insertion at particular position
/*#include <bits/stdc++.h>
using namespace std;
int insert(int a[], int n, int x, int cap, int pos)
{
    if (cap == n)
        return n;
    for (int i = n; i > pos - 1; i--)
    {
        a[i] = a[i - 1];
    }
    a[pos - 1] = x;
    return n + 1;
}
void print(int a[], int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }
}
int main()
{
    system("cls");
    int cap, n, pos, x;
    cin >> cap >> n;
    int a[cap];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (cap == n)
    {
        cout << "Insertion not possible" << endl;
        print(a, n);
        return 0;
    }

    cin >> pos >> x;
    int size = insert(a, n, x, cap, pos);
    print(a, size);

    return 0;
}*/
// Deletion in array at particular position
/*
#include <bits/stdc++.h>
using namespace std;
int delete_e(int a[], int n, int x)
{
    int k;
    for (k = 0; k < n; k++)
    {
        if (a[k] == x)
            break;
    }
    if (k == n)
        return n;

    for (int i = k; i < n; i++)
    {
        a[i] = a[i + 1];
    }
    return n - 1;
}
void print(int a[], int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }
}
int main()
{
    system("cls");
    int cap, n, x;
    cin >> cap >> n;
    int a[cap];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> x;
    int size = delete_e(a, n, x);
    print(a, size);
}
*/
// Largest Element Index
// Method 1
/*#include <bits/stdc++.h>
using namespace std;
int max(int a[], int n)
{
    int temp;
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            temp = i;
        }
    }
    return temp;
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
    int i = max(a, n);
    cout << "Maximum Element index :" << i << endl;
    return 0;
}*/
// Method II
/*#include <bits/stdc++.h>
using namespace std;
int max(int a[], int n)
{
    int max_index = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[i] > a[max_index])
        {
            max_index = i;
        }
    }
    return max_index;
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
    int i = max(a, n);
    cout << "Maximum Element index :" << i << endl;
    return 0;
}
*/
// Second Largest element(Naive Approach)
/*#include <bits/stdc++.h>
using namespace std;
int second_max(int a[], int n)
{
    int temp, s = -1;
    int max = *max_element(a, a + n);
    for (int i = 0; i < n; i++)
    {
        if (a[i] == max)
        {
            temp = i;
            break;
        }
    }
    int k = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == a[temp])
            continue;

        if (a[i] > k && a[i] != max)
        {
            k = a[i];
            s = i;
        }
    }
    return s;
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
    int i = second_max(a, n);
    cout << i << endl;
    return 0;
}

*/
/*
#include <bits/stdc++.h>
using namespace std;
int max(int a[], int n)
{
    int max_index = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[i] > a[max_index])
        {
            max_index = i;
        }
    }
    return max_index;
}
int second_max(int a[], int n)
{
    int temp = -1;
    int large = max(a, n);
    int second_max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == a[large])
            continue;
        if (a[i] > second_max)
        {
            second_max = a[i];
            temp = i;
        }
    }
    return temp;
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
    int i = second_max(a, n);
    cout << i << endl;
    return 0;
}*/
// Method 3
/*
#include <bits/stdc++.h>
using namespace std;
int max(int a[], int n)
{
    int max_index = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[i] > a[max_index])
        {
            max_index = i;
        }
    }
    return max_index;
}
int second_max(int a[], int n)
{
    int sc_index = -1;
    int lr = max(a, n);
    for (int i = 0; i < n; i++)
    {
        if (a[i] == a[lr])
            continue;
        if (sc_index == -1)
        {
            sc_index = i;
        }
        else if (a[i] > a[sc_index])
        {
            sc_index = i;
        }
    }

    return sc_index;
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
    int i = second_max(a, n);
    cout << i << endl;
    return 0;
}
*/
// Best approach
/*
#include <bits/stdc++.h>
using namespace std;
int second_max(int a[], int n)
{
    int sc = -1, lr = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[i] > a[lr])
        {
            sc = lr;
            lr = i;
        }
        else if (a[i] != a[lr])
        {
            if (sc == -1 || a[i] > a[sc])
            {
                sc = i;
            }
        }
    }
    return sc;
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
    int i = second_max(a, n);
    cout << i << endl;
    return 0;
}*/
// Making Alias of Array
/*#include <bits/stdc++.h>
using namespace std;
void printarr(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
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
    int *b = a;//B and A are same...No two different copies
    printarr(b, n);
    sort(a, a + n);
    printarr(b, n);

    return 0;
}*/
// Check if array is sorted
/*#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("cls");
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(a, a + n);

    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}*/
// Method II(Best approach)
/*#include <bits/stdc++.h>
using namespace std;
bool chksorted(int a[], int n)
{
    bool flag = true;
    for (int i = 1; i < n; i++)
    {
        if (a[i - 1] > a[i])
        {

            return false;
        }
    }
    return flag;
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
    if (chksorted(a, n))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}*/
// Reversing Array M-1
/*#include <bits/stdc++.h>
using namespace std;
void printarr(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
void rev(int a[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        swap(a[i], a[(n - 1) - i]);
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
    rev(a, n);
    printarr(a, n);
    return 0;
}
*/
// Reversing Array M-II (2 Pointer approach)
/*
#include <bits/stdc++.h>
using namespace std;
void printarr(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
void rev(int a[], int n)
{
    int low = 0;
    int high = n - 1;
    while (low < high)
    {
        swap(a[low], a[high]);
        low++;
        high--;
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
    rev(a, n);
    printarr(a, n);
    return 0;
}*/
/*
//Move zeros to end
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
    for (int i = 0; i < n; i++)
    {
        if (a[i] != 0)
        {
            v.push_back(a[i]);
        }
    }
    for (auto s : v)
    {
        cout << s << " ";
    }
    for (int i = 0; i < n - v.size(); i++)
    {
        cout << 0 << " ";
    }

    return 0;
}*/
// Remove Duplicates (Naive approach)
/*
#include <bits/stdc++.h>
using namespace std;
vector<int> remove_duplicate(int *a, int n)
{
    vector<int> v;
    int st = 0;
    v.push_back(a[st]);
    for (int i = 1; i < n; i++)
    {
        if (a[i] != a[st])
        {
            st = i;
            v.push_back(a[st]);
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
    vector<int> v = remove_duplicate(a, n);
    for (auto s : v)
    {
        cout << s << " ";
    }
    cout << "\n"
         << v.size() << endl;
}*/
// Left rotate array by 1
/*
#include <bits/stdc++.h>
using namespace std;
void printarr(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
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
    int temp = a[0];
    for (int i = 0; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }
    a[n - 1] = temp;
    printarr(a, n);

    return 0;
}*/
// Left rotate array by D places
/*#include <bits/stdc++.h>
using namespace std;
void printarr(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
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
    int d;
    cin >> d;
    int temp[d];
    for (int i = 0; i < d; i++)
    {
        temp[i] = a[i];
    }
    for (int i = 0; i < n - d; i++)
    {
        a[i] = a[d + i];
    }
    for (int i = 0; i < d; i++)
    {
        a[n - d + i] = temp[i];
    }
    printarr(a, n);

    return 0;
}*/
// Leader in an array
/*m1(o(n2))
#include <bits/stdc++.h>
using namespace std;

vector<int> leader(int a[], int n)
{
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        bool flag = true;
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
            {
                flag = false;
            }
        }
        if (flag)
            v.push_back(a[i]);
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
    auto v = leader(a, n);
    for (auto s : v)
    {
        cout << s << " ";
    }

    return 0;
}
*/
// m2
/*
#include <bits/stdc++.h>
using namespace std;

vector<int> leader(int a[], int n)
{
    vector<int> v;
    v.push_back(a[n - 1]);
    int temp = a[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        if (a[i] > temp)
        {
            temp = a[i];
            v.push_back(a[i]);
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
    auto v = leader(a, n);
    for (auto s : v)
    {
        cout << s << " ";
    }

    return 0;
}*/
// Maximum Difference
/*#include <bits/stdc++.h>
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
    multiset<int> s;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int t = (a[j] - a[i]);
            s.insert(t);
        }
    }
    auto it = s.rbegin();
    cout << (*it) << endl;

    return 0;
}*/
// Freq in Sorted Order
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

    for (int i = 0; i < n;)
    {
        int t = count(a, a + n, a[i]);
        cout << a[i] << " " << t << endl;
        i += t;
    }
    return 0;
}*/
// Freq in Unsorted Order
/*#include <bits/stdc++.h>
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

    for (int i = 0; i < n;)
    {
        int t = count(a, a + n, a[i]);
        cout << a[i] << " " << t << endl;
        i += t;
    }
    return 0;
}*/
// Stock Buy and Sell I & II(Best Approach)
/*
#include <bits/stdc++.h>
using namespace std;
int max_profit(int a[], int n)
{
    int profit = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[i - 1] < a[i])
        {
            profit += a[i] - a[i - 1];
        }
    }
    return profit;
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
    int profit = max_profit(a, n);
    cout << profit << endl;
    return 0;
}*/
// Trapping Rain Water
/*
#include <bits/stdc++.h>
using namespace std;
pair<int, int> check_heights(int a[], int low, int high)
{
    int i = low;
    while (a[i] < a[i + 1])
    {
        low = i + 1;
        i++;
    }
    int j = high;
    while (a[j - 1] > a[j])
    {
        high = j - 1;
        j--;
    }
    return {low, high};
}
int min(int a, int b)
{
    if (a >= b)
        return b;
    else
        return a;
}
int cnt(int a[], int x, int y)
{
    int c = 0;
    for (int i = x + 1; i < y; i++)
    {
        c++;
    }
    return c;
}
int trap_water(int a[], int n)
{
    pair<int, int> h = check_heights(a, 0, n - 1);
    int amount = 0;
    int m = min(a[h.first], a[h.second]);
    int count = cnt(a, h.first, h.second);
    amount = m * count;
    for (int i = h.first + 1; i < h.second; i++)
    {
        if (m > a[i])
        {
            amount -= a[i];
        }
    }

    return amount;
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
    int water_amount = trap_water(a, n);
    cout << water_amount << endl;
    return 0;
}*/
// Maximum Consecutive ones
// method I(Naive approoch)
/*#include <bits/stdc++.h>
using namespace std;

int maximum_con_ones(int a[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int ec = 0;
        for (int j = i; j < n; j++)
        {
            if (a[j] == 1)
            {
                ec++;
            }
            else
                break;
        }
        count = max(ec, count);
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
    int r = maximum_con_ones(a, n);
    cout << r << endl;
    return 0;
}*/
// Method II
/*
#include <bits/stdc++.h>
using namespace std;

int maximum_con_ones(int a[], int n)
{
    int count = 0;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            count = max(sum, count);
            sum = 0;
            continue;
        }
        else
        {
            sum += a[i];
            if (i == n - 1)
                return max(sum, count);
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
    int r = maximum_con_ones(a, n);
    cout << r << endl;
    return 0;
}*/
// Method 3(Best approach)
/*
#include <bits/stdc++.h>
using namespace std;
int maximum_con_ones(int a[], int n)
{
    int count = 0;
    int ec = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
            ec = 0;
        else
        {
            ec++;
            count = max(ec, count);
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
    int r = maximum_con_ones(a, n);
    cout << r << endl;
    return 0;
}
*/
// Printing all subarrays of a given Array
/*
#include <bits/stdc++.h>
using namespace std;
void print_sub_array(int a[], int n)
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
        cout << endl;
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
    print_sub_array(a, n);
    return 0;
}*/
// Maximum Subarray Sum
// Method I(Not a good approach)
/*
#include <bits/stdc++.h>
using namespace std;
vector<int> v;
void print_sub_array(int a[], int n)
{
    int mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int count = 0;
            for (int k = i; k <= j; k++)
            {
                cout << a[k] << " ";
                count += a[k];
            }
            mx = max(count, mx);
            v.push_back(count);
            cout << endl;
        }
        cout << endl;
    }
    cout << "MAX:" << mx << endl;
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
    print_sub_array(a, n);
    cout << "Printing all sum:" << endl;
    for (auto s : v)
    {
        cout << s << endl;
    }
    return 0;
}
*/
// M-II(Naive approach)
/*
#include <bits/stdc++.h>
using namespace std;
int max_sum_subarray(int a[], int n)
{
    int mx_sum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += a[j];
            mx_sum = max(sum, mx_sum);
        }
    }

    return mx_sum;
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
    int mx_sum = max_sum_subarray(a, n);
    cout << "Max=" << mx_sum << endl;
    return 0;
}
*/
// M III(Best approach)(Kadane Approach)
/*
#include <bits/stdc++.h>
using namespace std;
int max_sum_subarray(int a[], int n)
{
    int max_sum = a[0];
    int mx = a[0];
    for (int i = 1; i < n; i++)
    {
        mx = max(a[i], a[i] + mx);
        max_sum = max(mx, max_sum);
    }
    return max_sum;
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
    int mx_sum = max_sum_subarray(a, n);
    cout << "Max=" << mx_sum << endl;
    return 0;
}*/
// Longest Even Odd Subarray
// Method I(Naive approach)
/*
#include <bits/stdc++.h>
using namespace std;
int long_eo_subarray(int a[], int n)
{
    int mx_len = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int count = 1;
        for (int j = i; j < n - 1; j++)
        {
            if ((a[j] % 2 == 0 && a[j + 1] % 2 != 0) || (a[j] % 2 != 0 && a[j + 1] % 2 == 0))
            {
                count++;
            }
            else
                break;
        }
        mx_len = max(count, mx_len);
    }

    return mx_len;
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
    int mx_len = long_eo_subarray(a, n);
    cout << "Max=" << mx_len << endl;
    return 0;
}*/
// Method 2(Efficient approach)
/*
#include <bits/stdc++.h>
using namespace std;
int long_eo_subarray(int a[], int n)
{
    int max_len = INT_MIN;
    int sub_len = 1;
    for (int i = 1; i < n; i++)
    {
        if ((a[i] % 2 == 0 && a[i - 1] % 2 != 0) || (a[i] % 2 != 0 && a[i - 1] % 2 == 0))
        {
            sub_len++;
            max_len = max(sub_len, max_len);
        }
        else
        {
            sub_len = 1;
        }
    }

    return max_len;
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
    int mx_len = long_eo_subarray(a, n);
    cout << "Max=" << mx_len << endl;
    return 0;
}
*/
// Majority ELement
/*
//Naive approach
#include <bits/stdc++.h>
using namespace std;
auto majority_element(int a[], int n)
{
    map<int, vector<int>> m;
    for (int i = 0; i < n; i++)
    {
        if (count(a, a + n, a[i]) > (n / 2))
        {
            m[count(a, a + n, a[i])].push_back(i);
        }
    }
    return m;
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
    auto m = majority_element(a, n);
    if (m.size() != 0)
    {
        for (auto v : m)
        {
            for (auto vec : v.second)
            {
                cout << vec << " ";
            }
        }
    }
    else
        cout << -1;
    return 0;
}
*/
// Method II (Naive approach)
/*#include <bits/stdc++.h>
using namespace std;
vector<int> majority_element(int a[], int n)
{
    vector<int> v;
    // int index = -1;
    for (int i = 0; i < n; i++)
    {
        if (count(a, a + n, a[i]) > (n / 2))
        {
            v.push_back(i);
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
    auto index = majority_element(a, n);
    if (index.size() != 0)
    {
        for (auto v : index)
        {
            cout << v << endl;
        }
    }
    else
        cout << -1;
    return 0;
}*/
/*
#include <bits/stdc++.h>
using namespace std;
int majority_element(int a[], int n)
{

    int index = -1;
    for (int i = 0; i < n; i++)
    {
        if (count(a, a + n, a[i]) > (n / 2))
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
    auto index = majority_element(a, n);
    cout << index << endl;
    return 0;
}*/
// Majority Element(Naive Approach)
/*
#include <bits/stdc++.h>
using namespace std;
int majority_element(int a[], int n)
{

    int index = -1;

    for (int i = 0; i <= n / 2; i++)
    {
        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                count++;
            }
        }
        if (count > (n / 2))
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
    auto index = majority_element(a, n);
    cout << index << endl;
    return 0;
}*/
// Method  IV (Moore Voting algorithm)
/*
#include <bits/stdc++.h>
using namespace std;
int majority_element(int a[], int n)
{
    int index = 0;
    int count = 1;
    for (int i = 1; i < n; i++)
    {
        if (a[i] == a[index])
        {
            count++;
        }
        else
            count--;
        if (count == 0)
        {
            count = 1;
            index = i;
        }
    }

    int countnew = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[index] == a[i])
        {
            countnew++;
        }
    }
    if (countnew > n / 2)
    {
        return index;//return a[index]>>To  directly return ME
    }
    else
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
    auto index = majority_element(a, n);
    cout << index << endl;
    return 0;
}*/
// Maximum Sum of Subarray for K length
// Method I(Naive Approach :O(n2)
/*
#include <bits/stdc++.h>
using namespace std;
int maxsumsubarray_k(int a[], int n, int k)
{
    int max_sum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < (i + k) && j < n; j++)
        {
            sum += a[j];
        }
        max_sum = max(sum, max_sum);
    }

    return max_sum;
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
    int k;
    cin >> k;
    int max_sum = maxsumsubarray_k(a, n, k);
    cout << max_sum << endl;

    return 0;
}*/

// Maximum Sum Subarray of length k(Sliding Window)
/*#include <bits/stdc++.h>
using namespace std;
int maxsumsubarray_k(int a[], int n, int k)
{
    int sum = 0;
    for (int i = 0; i < k; i++)
    {
        sum += a[i];
    }
    int max_sum = sum;
    for (int i = k; i < n; i++)
    {
        sum = sum + a[i] - a[(i - k)];
        max_sum = max(sum, max_sum);
    }
    return max_sum;
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
    int k;
    cin >> k;
    int max_sum = maxsumsubarray_k(a, n, k);
    cout << max_sum << endl;

    return 0;
}*/
// Check Subarray with Given Sum When K=Fix(Using Sliding Window)
/*
#include <bits/stdc++.h>
using namespace std;

int maxsumsubarray_k(int a[], int n, int k, int g_sum)
{
    int flag = 0;
    int sum = 0;
    for (int i = 0; i < k; i++)
    {
        sum += a[i];
    }
    if (sum == g_sum)
    {
        return 1;
    }
    for (int i = k; i < n; i++) // ith index is last element of current sliding window
    {
        sum = sum + a[i] - a[i - k];
        if (sum == g_sum)
        {
            return 1;
        }
    }

    return flag;
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
    int k, sum;
    cin >> k >> sum;

    int flag = maxsumsubarray_k(a, n, k, sum);
    if (flag)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;

    return 0;
}*/
// Check SubArray with Given Sum(O(N2))
/*#include <bits/stdc++.h>
using namespace std;

int checksubarray_sum(int a[], int n, int g_sum)
{
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += a[j];
            if (sum == g_sum)
                return 1;
        }
    }
    return flag;
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
    int sum;
    cin >> sum;

    int flag = checksubarray_sum(a, n, sum);
    if (flag)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;

    return 0;
}*/
/*
#include <bits/stdc++.h>
using namespace std;

bool checksubarray_sum(int a[], int n, int g_sum)
{

    int s = 0, curr_sum = a[0];
    for (int e = 1; e < n; e++)
    {
        while (curr_sum > g_sum && s < e - 1)
        {
            curr_sum -= a[s];
            s++;
        }
        if (g_sum == curr_sum)
        {
            return true;
        }
        if (e < n)
            curr_sum += a[e];
    }
    return curr_sum == g_sum;
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
    int sum;
    cin >> sum;
    bool flag = checksubarray_sum(a, n, sum);
    if (flag)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;

    return 0;
}*/
