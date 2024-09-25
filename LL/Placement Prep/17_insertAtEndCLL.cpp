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
/*
Node *insertAtEndCLL(int x, Node *head)
{
  Node *temp = new Node(x);
  if (head == nullptr)
  {
    temp->next = temp;
    return temp;
  }
  Node *curr = head;
  while (curr->next != head)
  {
    curr = curr->next;
  }
  curr->next = temp;
  temp->next = head;
  return head;
}
*/
Node *insertAtEndCLL(int x, Node *head)
{

  Node *temp = new Node(x);
  if (head == nullptr)
  {
    temp->next = temp;
    return temp;
  }
  temp->next = head->next;
  head->next = temp;
  swap(head->data, temp->data);
  return temp;
}

int main()
{
  system("cls");

  Node *head = new Node(10);
  head->next = new Node(20);
  head->next->next = new Node(30);
  head->next->next->next = head;

  traverseCLL(head);
  cout << endl;

  Node *newhead = insertAtEndCLL(365, head);
  traverseCLL(newhead);
  return 0;
}