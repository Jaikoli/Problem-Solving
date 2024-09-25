#include <bits/stdc++.h>
using namespace std;

struct Node
{

  int data;
  Node *next;
  Node *prev;
  Node(int ele)
  {
    data = ele;
    next = NULL;
    prev = NULL;
  }
};
void traverseDLL(Node *head)
{
  Node *curr = head;
  while (curr != nullptr)
  {
    cout << curr->data << " ";
    curr = curr->next;
  }
}
Node *insertAtBeg(Node *head, int x)
{

  Node *temp = new Node(x);
  temp->next = head;

  if (head != nullptr)
  {
    head->prev = temp;
  }
  return temp;
}
int main()
{
  system("cls");

  Node *head = new Node(10);
  Node *temp1 = new Node(20);
  Node *temp2 = new Node(30);

  head->next = temp1;
  temp1->prev = head;

  temp1->next = temp2;
  temp2->prev = temp1;

  traverseDLL(head);
  cout << endl;
  Node *newhead = insertAtBeg(head, 7);
  traverseDLL(newhead);
  return 0;
}