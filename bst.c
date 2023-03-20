#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node * r;
    struct node * l;
};

typedef struct node Node;
Node* newnode(int d){
    Node* ptr;
    ptr = (Node*)malloc(sizeof(struct node));
    ptr->data = d;
    ptr->l = ptr->r = NULL;
    return ptr;
}
Node* insertLevel(int a[],Node* root, int i, int n){
    if(i<n){
        root = newnode(a[i]);
        root->l = insertLevel(a,root->l,2*i+1,n);
        root->r = insertLevel(a,root->r,2*i+2,n);
    }
    return root;
}

void inoreder(Node* root){
    if(root!=NULL){
        inoreder(root->l);
        printf("%d",root->data);
        inoreder(root->r);
    }
}
int main(){
    int n,i,a[50];
    Node* root;
    printf("Enter the number of nodes\n");
    scanf("%d",&n);
    printf("Enter the elements of binary tree\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    root = insertLevel(a,root,0,n);
    printf("Nodes of the binary tree constructed in level order fashion are\n");
    inoreder(root);
}