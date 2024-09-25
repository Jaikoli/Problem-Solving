/*#include <bits/stdc++.h>
using namespace std;

void fun1(int x)
{
    // Returning if fun(0) is called...Rest From fun(n).....fun(1) it will run.
    // So Prints GFG n times;
    if (x == 0)
    {
        return;
    }
    cout << "GFG" << endl;
    fun1(x - 1);
}
int main()
{
    system("cls");
    fun1(2);

    return 0;
}*/
// Print N to 1 using Recursion
/*#include <bits/stdc++.h>
using namespace std;

void printn(int n)
{
    if (n == 0)
        return;
    cout << n << endl;
    printn(n - 1);
}
int main()
{
    system("cls");
    printn(5);
    return 0;
}*/
// Print 1 to N using  Recursion
/*
#include <bits/stdc++.h>
using namespace std;

void print1ton(int n)
{
    if (n == 0)
        return;
    print1ton(n - 1);
    cout << n << endl;
}
int main()
{
    system("cls");
    print1ton(5);
    return 0;
}*/
// Recursion Practice
/*
#include <bits/stdc++.h>
using namespace std;

void fun(int n)
{
    if (n == 0)
        return;
    cout << n << endl;
    fun(n - 1);
    cout << n << endl;
}
int main()
{
    system("cls");
    fun(3);
    return 0;
}
*/
/*
#include <bits/stdc++.h>
using namespace std;

void fun(int n)
{
    if (n == 0)
        return;

    fun(n - 1);
    cout << n << endl;
    fun(n - 1);
}
int main()
{
    system("cls");
    fun(3);
    return 0;
}*/
//  Decimal to Binary Convertion
/*
#include <bits/stdc++.h>
using namespace std;

void fun(int n)
{
    if (n == 0)
        return;
    // cout << n << " ";

    fun(n / 2);
    cout << n % 2;
}
int main()
{
    system("cls");
    fun(13);
    return 0;
}*/
// Factorila Using Recursion (Non Tail Recursive)
/*

#include <bits/stdc++.h>
using namespace std;

int fact(int n)
{
    if (n == 1 || n == 0)
        return 1;
    return n * fact(n - 1);
}
int main()
{
    system("cls");
    cout << fact(5);
    return 0;
}

//M2 Factorial n where n>=0
#include <bits/stdc++.h>
using namespace std;

int fact(int n)
{
    if (n == 0)
        return 1;
    return n * fact(n - 1);
}
int main()
{
    system("cls");
    cout << fact(2);

    return 0;
}
*/
// Factorial Using Recursion (Using Tail Recursion)
/*
#include <bits/stdc++.h>
using namespace std;

int fact(int n, int k)
{
    if (n == 0 || n == 1)
        return k;
    return (fact(n - 1, k * n));
}
int main()
{
    system("cls");
    cout << fact(5, 1);
    return 0;
}
*/
// Nth Fibonacci Number where n>=0
/*
#include <bits/stdc++.h>
using namespace std;

int fib(int n)
{

    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fib(n - 2) + fib(n - 1); //  Order of Sum Doesn't matter.
}
int main()
{
    system("cls");
    cout << fib(5);
    return 0;
}
*/
// Sum of Natural Number Using Recursion
#include <bits/stdc++.h>
using namespace std;

int sum(int n)
{
    if (n == 0)
        return 0;
    return n + sum(n - 1);
}
int main()
{
    system("cls");
    int n;
    cin >> n;
    cout << sum(n);

    return 0;
}