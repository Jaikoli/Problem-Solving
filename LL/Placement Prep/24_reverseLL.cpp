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

Node *reverseLL(Node *head)
{
  vector<int> v;
  for (Node *curr = head; curr != nullptr; curr = curr->next)
  {
    v.push_back(curr->data);
  }

  for (Node *curr = head; curr != nullptr; curr = curr->next)
  {
    curr->data = v.back();
    v.pop_back();
  }
  return head;
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
  Node *newHead = reverseLL(head);
  traverseLL(newHead);
  return 0;
}