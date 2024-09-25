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
/*Method 1 of Traversing a LL

void traverseLL(Node *temp)
{
  Node *curr=temp;
  while (curr != nullptr)
  {
    cout << curr->data << " ";
    curr = curr->next;
  }
}*/

// Method 2 (Recursion)
void traverseLL(Node *head)
{
  if (head == nullptr)
  {
    return;
  }
  cout << head->data;
  traverseLL(head->next);
}

int main()
{
  system("cls");

  Node *head = new Node(10);
  head->next = new Node(20);
  head->next->next = new Node(30);

  traverseLL(head);

  return 0;
}