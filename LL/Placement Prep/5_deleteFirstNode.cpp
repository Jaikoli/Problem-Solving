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

Node *deleteAtBeg(Node *head)
{
  if (head == nullptr)
  {
    return head;
  }
  else
  {
    Node *temp = head->next;
    delete head;
    return temp;
  }
}

int main()
{
  system("cls");

  Node *head = new Node(10);
  head->next = new Node(20);
  head->next->next = new Node(30);

  traverseLL(head);
  cout << endl;
  Node *newhead = deleteAtBeg(head);
  traverseLL(newhead);

  return 0;
}