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

void traverseCLL(Node *head)
{

  if (head == nullptr)
  {
    return;
  }

  cout << head->data << " ";
  Node *curr = head->next;
  while (curr != head)
  {
    cout << curr->data << " ";
    curr = curr->next;
  }
}

int main()
{
  system("cls");

  Node *head = new Node(10);
  head->next = new Node(20);
  head->next->next = new Node(30);
  head->next->next->next = head;

  traverseCLL(head);
  return 0;
}