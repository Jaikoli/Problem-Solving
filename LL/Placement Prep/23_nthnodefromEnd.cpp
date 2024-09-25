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
/*
void nthNodeEnd(Node *head, int n)
{
  int count = 0;
  for (Node *curr = head; curr != nullptr; curr = curr->next)
  {
    count++;
  }
  int move = count - n;

  if (move < 0)
  {
    return;
  }
  Node *temp = head;
  while (move--)
  {

    temp = temp->next;
  }
  cout << temp->data << endl;
}*/

void nthNodeEnd(Node *head, int n)
{

  if (head == nullptr)
  {
    return;
  }

  Node *first = head, *second = head;
  while (n--)
  {
    if (first == nullptr)
      return;
    first = first->next;
  }

  while (first != nullptr)
  {
    first = first->next;
    second = second->next;
  }
  cout << second->data << endl;
}

int main()
{
  system("cls");

  Node *head = new Node(10);
  head->next = new Node(20);
  head->next->next = new Node(30);
  head->next->next->next = new Node(40);

  traverseLL(head);
  cout << endl;
  nthNodeEnd(head, 5);

  return 0;
}