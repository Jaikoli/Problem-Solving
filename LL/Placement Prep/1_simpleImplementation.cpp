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

int main()
{
  system("cls");
  /*Method 1

  Node*head=new Node(10);
  Node *temp1=new Node(20);
  Node *temp2=new Node(30);

  head->next=temp1;
  temp1->next=temp2;

  */

  Node *head = new Node(10);
  head->next = new Node(20);
  head->next->next = new Node(30);

  Node *temp = head;
  while (temp != nullptr)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }

  return 0;
}