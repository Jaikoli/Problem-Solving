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

Node *insertAtBeg(Node *head, int x)
{
  Node *temp = new Node(x);
  if (head == nullptr)
  {
    temp->prev = temp;
    temp->next = temp;
    return temp;
  }
  temp->next = head;
  temp->prev = head->prev;
  Node *last = head->prev;
  head->prev = temp;
  last->next = temp;
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

  temp2->next = head;
  head->prev = temp2;
  return 0;
}