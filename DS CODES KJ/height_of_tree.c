//height of the tree
//raheel parekh
#include <stdio.h>
#include <stdlib.h>
 
// Structure of a Tree Node
typedef struct node {
    int data;
    struct node* left;
    struct node* right;
}node;
node* newNode(int data)
{
  node * Node = (node *)malloc(sizeof(node));
    Node->data = data;
    Node->left = NULL;
    Node->right = NULL;
    return (Node);
}
 
// Function to get the left height 
int left_height(node* node)
{
    int height = 0;
    while (node) {
        height++;
        node = node->left;
    }
    // Return the left height obtained
    return height;
}
 
// Function to get the right height
int right_height(node* node)
{
    int height = 0;
    while (node) {
        height++;
        node = node->right;
    }
 
    // Return the right height obtained
    return height;
}
 
// Function to get the count of nodes
int TotalNodes(node* root)
{
    // Base Case
    if (root == NULL)
        return 0;
    // Find the left height and the right heights
    int lh = left_height(root);
    int rh = right_height(root);
    // If left and right heights are equal return 2^height(1<<height) -1
    
    if (lh == rh)
        return (1 << lh) - 1;
    // Otherwise, recursive call
    return 1 + TotalNodes(root->left) + TotalNodes(root->right);
}
 

int main()
{
    node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(9);
    root->right->right = newNode(8);
    root->left->left->left = newNode(6);
    root->left->left->right = newNode(7);
    printf("Height Of The TREE:%d",TotalNodes(root));
    return 0;
}