/*#include <bits/stdc++.h>
using namespace std;
struct Queue
{
    int cap;
    int size, front;
    int *a;
    Queue(int c)
    {
        cap = c;
        size = 0;
        front = 0;
        a = new int[c];
    }
    bool isFull()
    {
        return (cap == size);
    }
    bool isEmpty()
    {
        return (size == 0);
    }
    void enqueue(int x)
    {
        if (isFull())
            return;
        int rear = (front + size - 1) % cap;
        rear = (rear + 1) % cap;
        a[rear] = x;
        size++;
    }
    void dequeue()
    {
        if (isEmpty())
            return;
        front = (front + 1) % cap;
        size--;
    }
    int getFront()
    {
        if (isEmpty())
            return -1;
        else
            return front;
    }
    int getRear()
    {
        if (isEmpty())
            return -1;
        else
            return (front + size - 1) % cap;
    }
};
int main()
{
    system("cls");
    struct Queue q(5);
    q.enqueue(5);
    q.enqueue(15);
    q.enqueue(25);
    q.enqueue(55);
    q.dequeue();
    q.dequeue();
    q.enqueue(25);
    q.enqueue(55);
    q.enqueue(1);

    int x = q.getFront();
    int y = q.getRear();
    cout << "Front " << x << " "
         << "Rear " << y << endl;

    return 0;
}*/
// Revision of circular Queue Implementation
/*
#include <bits/stdc++.h>
using namespace std;

struct Queue
{
    int cap;
    int size;
    int *a;
    int front;
    Queue(int c)
    {
        cap = c;
        size = 0;
        front = 0;
        a = new int[cap];
    }
    void enqueue(int x)
    {
        if (isFull())
            return;
        int rear = (front + size - 1) % cap;
        rear = (rear + 1) % cap;
        a[rear] = x;
        size++;
    }
    void dequeue()
    {
        if (isEmpty())
            return;
        front = (front + 1) % cap;
        size--;
    }
    int getFront()
    {
        if (isEmpty())
            return -1;
        else
            return front;
    }
    int getRear()
    {
        if (isEmpty())
            return -1;
        else
            return (front + size - 1) % cap;
    }
    bool isEmpty()
    {
        return (size == 0);
    }
    bool isFull()
    {
        return (cap == size);
    }
};

int main()
{
    system("cls");
    Queue q(5);
    q.enqueue(23);
    q.enqueue(3);
    q.enqueue(2);
    q.enqueue(273);
    q.enqueue(230);
    q.dequeue();
    q.dequeue();
    q.enqueue(1);
    q.enqueue(2);
    q.dequeue();
    q.enqueue(21);
    cout << q.getFront() << " " << q.getRear() << endl;

    return 0;
}*/
// Implement Stack Using 2 Queue
/*
#include <bits/stdc++.h>
using namespace std;
struct Stack
{
    queue<int> q1, q2;
    void push(int x)
    {
        while (!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }
        q1.push(x);
        while (!q2.empty())
        {
            q1.push(q2.front());
            q2.pop();
        }
    }
    void pop()
    {
        if (q1.empty())
            return;
        else
            q1.pop();
    }
    bool isEmpty()
    {
        return q1.empty();
    }

    int top()
    {
        if (q1.empty())
            return -1;
        else
            return q1.front();
    }
};

int main()
{
    system("cls");
    Stack s;
    s.push(5);
    s.push(12);
    s.push(14);
    s.push(7);
    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;

    return 0;
}*/

// Reverse a Queue
/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    system("cls");
    queue<int> q;
    while (1)
    {
        int x;
        cin >> x;
        if (x == -1)
            break;
        else
            q.push(x);
    }

    stack<int> s;
    while (!q.empty())
    {
        s.push(q.front());
        q.pop();
    }
    while (!s.empty())
    {
        q.push(s.top());
        s.pop();
    }
    cout << endl;

    cout << "Front"
         << " "
         << "Rear" << endl;
    cout << q.front() << " " << q.back() << endl;
    cout << "Printing Queue after Reverse:-" << endl;
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("cls");

    return 0;
}