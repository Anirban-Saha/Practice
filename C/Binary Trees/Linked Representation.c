#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node* left;
    struct node* right;
}treenode;


treenode* createNode(int value){
    treenode *ptr;
    ptr=(treenode*)malloc(sizeof(treenode));
    ptr->data=value;
    ptr->left=NULL;
    ptr->right=NULL;
    return ptr;
}
int main(){
    treenode *p1=createNode(5);
    treenode *p2=createNode(4);
    p1->left=p2;
    
}