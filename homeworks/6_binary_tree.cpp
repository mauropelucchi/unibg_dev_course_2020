/*

Given a binary tree, we need to write a program (with recursive function) 
to print all leaf nodes 
of the given binary tree from left to right.

Main steps:
1) Check if the given node is null. If null, then return from the function.
2) Check if it is a leaf node. If the node is a leaf node, then print its data.
3) If in the above step, the node is not a leaf node then check if the 
left and right children of node exist. If yes then call the function 
or left and right child of the node recursively.

Example of struct for a node:

typedef struct node 
{ 
    int data; 
    struct Node *left, *right; 
} Node;

Utility function to create a new tree node:
Node* newNode(int data) 
{ 
    Node *temp = new Node; 
    temp->data = data; 
    temp->left = temp->right = NULL; 
    return temp; 
}

*/