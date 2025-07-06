#ifndef BINARYTREE_H
#define BINARYTREE_H

typedef struct node{
    int data;
    struct node* left;
    struct node* right;
} node_b;

node_b* create_node(int data);

#endif