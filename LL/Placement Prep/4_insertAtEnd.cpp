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

Node *insertAtEnd(int x, Node *head)
{
  Node *temp = new Node(x);
  if (head == nullptr)
  {
    return temp;
  }
  Node *curr = head;
  while (curr->next != nullptr)
  {
    curr = curr->next;
  }
  curr->next = temp;
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
  Node *newhead = insertAtEnd(25, head);
  traverseLL(newhead);

  return 0;
}