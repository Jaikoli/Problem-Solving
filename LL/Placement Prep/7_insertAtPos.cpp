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

Node *insertAtPs(int x, Node *head, int pos)
{
  Node *temp = new Node(x);

  if (pos == 1)
  {
    temp->next = head;
    return temp;
  }
  Node *curr = head;
  int i = 1;
  while (curr != nullptr && i < pos - 1)
  {
    curr = curr->next;
    i++;
  }
  if (curr == nullptr)
  {
    return head;
  }
  Node *temp1 = curr->next;
  curr->next = temp;
  temp->next = temp1;

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
  Node *newhead = insertAtPs(25, head, 2);
  traverseLL(newhead);

  return 0;
}