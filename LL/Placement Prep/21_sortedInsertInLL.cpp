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

Node *sortedInsert(Node *head, int x)
{
  Node *temp = new Node(x);

  if (head == nullptr)
  {
    return temp;
  }
  if (head->data > x)
  {
    temp->next = head;
    return temp;
  }
  Node *curr = head;
  while (curr->next != nullptr && curr->next->data < x)
  {
    curr = curr->next;
  }

  Node *temp2 = curr->next;
  curr->next = temp;
  temp->next = temp2;

  return head;
}
int main()
{
  system("cls");

  Node *head = new Node(10);
  head->next = new Node(20);
  head->next->next = new Node(30);

  traverseLL(head);
  cout << endl;
  Node *newhead = sortedInsert(head, 5);
  traverseLL(newhead);

  return 0;
}