#include <bits/stdc++.h>
using namespace std;

struct Node
{

  int data;
  Node *next;
  Node(int ele)
  {
    data = ele;
    next = NULL;
  }
};

void traverseLL(Node *temp)
{
  Node *curr = temp;
  while (curr != nullptr)
  {
    cout << curr->data << " ";
    curr = curr->next;
  }
}

int searchInLL(int x, Node *head)
{
  Node *curr = head;
  int pos = 1;
  while (curr != nullptr)
  {
    if (x == curr->data)
    {
      return pos;
    }
    else
    {
      pos++;
      curr = curr->next;
    }
  }
  return -1;
}

int main()
{
  system("cls");

  Node *head = new Node(10);
  head->next = new Node(20);
  head->next->next = new Node(30);
  int x;
  cin >> x;
  cout << searchInLL(x, head);

  return 0;
}