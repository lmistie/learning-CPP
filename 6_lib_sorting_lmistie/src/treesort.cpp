#include "libsorting.h"

struct TreeNode
{
    int value;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int val) : value(val), left(nullptr), right(nullptr) {}
};

void insert(TreeNode *&root, int value)
{
    if (root == nullptr)
    {
        root = new TreeNode(value);
    }
    else if (value < root->value)
    {
        insert(root->left, value);
    }
    else
    {
        insert(root->right, value);
    }
}

void traverseInOrder(TreeNode *root, int *arr, int &index)
{
    if (root == nullptr)
    {
        return;
    }
    traverseInOrder(root->left, arr, index);
    arr[index++] = root->value;
    traverseInOrder(root->right, arr, index);
}

void treesort(int *arr, int size)
{
    TreeNode *root = nullptr;

    for (int i = 0; i < size; i++)
    {
        insert(root, arr[i]);
    }

    int index = 0;
    traverseInOrder(root, arr, index);
}