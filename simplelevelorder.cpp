#include <bits/stdc++.h>
using namespace std;

struct node
{
    int key;
    node *left;
    node *right;
    node(int k)
    {
        key = k;
        left = right = NULL;
    }
};
void printlevelorder(node *root)
{
    if (root == NULL)
        return;
    queue<node *> q;
    q.push(root);
    while (q.empty() == false)
    {
        node *curr = q.front();
        q.pop();
        cout << curr->key << endl;
        if (curr->left != NULL)
        {
            q.push(curr->left);
        }
        if (curr->right != NULL)
        {
            q.push(curr->right);
        }
    }
}

void printtree(node *root)
{
    int h = height(root);

    for (int i = 0; i < h; i++)
    {
        printlevelorder(root, i);
    }
}

int main()
{
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);

    cout << "Level Order traversal of binary tree is \n";
    printlevelorder(root);

    return 0;
}