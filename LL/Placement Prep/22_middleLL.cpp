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
int middleLL(Node *head)
{
  if (head == nullptr)
  {
    return 0;
  }

  Node *curr = head;
  int count = 0;
  while (curr != nullptr)
  {

    curr = curr->next;
    count++;
  }

  int mid = (count / 2) + 1;
  Node *temp = head;
  for (int i = 1; i < mid; i++)
  {
    temp = temp->next;
  }
  return (temp->data);
}*/

void middleLL(Node *head)
{
  if (head == nullptr)
    return;

  Node *slow = head, *fast = head;

  while (fast != nullptr && fast->next != nullptr)
  {
    slow = slow->next;
    fast = fast->next->next;
  }
  cout << slow->data << endl;
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
  middleLL(head);

  return 0;
}