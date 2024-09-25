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

Node *deleteKNode(Node *head, int k)
{
  if (head == nullptr)
  {
    return nullptr;
  }
  if (head->next == head && k == 1)
  {
    delete head;
    return nullptr;
  }
  Node *curr = head;
  int pos = 1;
  while (curr->next != head && pos < k - 1)
  {
    curr = curr->next;
    pos++;
  }

  Node *temp = curr->next;
  curr->next = curr->next->next;
  delete temp;
  return head;
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
  int k;
  cin >> k;

  Node *newhead = deleteKNode(head, k);
  traverseCLL(newhead);
  return 0;
}