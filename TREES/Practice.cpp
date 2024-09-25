/*#include <bits/stdc++.h>
using namespace std;
struct Point {
    int x;
    int y;
};

int main() {
    // Dynamically Allocate memory for the structure
    Point *myPoint = new Point;

    // Access and assign values to the members
    myPoint->x = 10;
    myPoint->y = 20;

    // Use the structure instance
    cout << "Coordinates: (" << myPoint->x << ", " << myPoint->y << ")\n";

    // Deallocate the allocated memory
    delete myPoint;

    return 0;
}*/

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int key;
    Node *left;
    Node *right;
    Node(int x)
    {
        key = x;
        left = right = NULL;
    }
};

void inorder(Node *root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    cout << root->key << " ";
    inorder(root->right);
}
void preorder(Node *root)
{
    if (root == NULL)
        return;
    cout << root->key << " ";
    inorder(root->left);
    inorder(root->right);
}
void postorder(Node *root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    inorder(root->right);
    cout << root->key << " ";
}
int main()
{
    system("cls");

    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(50);

    inorder(root);
    cout << endl;
    preorder(root);
    cout << endl;
    postorder(root);

    return 0;
}
