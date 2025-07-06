#include <binarytree.h>
#include <stdlib.h>
#include <stdio.h>

int main(){
    node_b* my_root = create_node(0);

    return 0;
}

node_b* create_node(int data){
    node_b* root = (node_b*) malloc(sizeof(node_b*));
    
    root->data = data;
    root->left = NULL;
    root->right = NULL;
    
    return root;
}


