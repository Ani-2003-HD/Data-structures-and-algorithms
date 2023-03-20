#include <stdio.h>
#include <stdlib.h>

// Node structure of BST
struct node {
    int data;
    struct node *left;
    struct node *right;
};

// Function to create a new node
struct node* createNode(int data) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Function to insert a node in BST
struct node* insertNode(struct node* root, int data) {
    if (root == NULL) {
        return createNode(data);
    }
    if (data < root->data) {
        root->left = insertNode(root->left, data);
    }
    else if (data > root->data) {
        root->right = insertNode(root->right, data);
    }
    return root;
}

// Function for Inorder traversal
void inorderTraversal(struct node* root) {
    if (root == NULL) {
        return;
    }
    inorderTraversal(root->left);
    printf("%d ", root->data);
    inorderTraversal(root->right);
}

// Function for Preorder traversal
void preorderTraversal(struct node* root) {
    if (root == NULL) {
        return;
    }
    printf("%d ", root->data);
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

// Function for Postorder traversal
void postorderTraversal(struct node* root) {
    if (root == NULL) {
        return;
    }
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    printf("%d ", root->data);
}

void displayMenu() {
    printf("\n\nMenu:\n");
    printf("1. Create a BST of N Integers\n");
    printf("2. Traverse the BST in Inorder\n");
    printf("3. Traverse the BST in Preorder\n");
    printf("4. Traverse the BST in Postorder\n");
    printf("5. Exit\n");
    printf("Enter your choice: ");
}

int main() {
    struct node* root = NULL;
    int choice, data, n;
    while (1) {
        displayMenu();
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter the number of integers to insert: ");
                scanf("%d", &n);
                printf("Enter %d integers:\n", n);
                for (int i = 1; i <= n; i++) {
                    scanf("%d", &data);
                    root = insertNode(root, data);
                }
                printf("BST created successfully!\n");
                break;
            case 2:
                printf("Inorder Traversal: ");
                inorderTraversal(root);
                printf("\n");
                break;
            case 3:
                printf("Preorder Traversal: ");
                preorderTraversal(root);
                printf("\n");
                break;
            case 4:
                printf("Postorder Traversal: ");
                postorderTraversal(root);
                printf("\n");
                break;
            case 5:
                printf("Exiting program...\n");
                exit(0);
            default:
                printf("Invalid choice!\n");
        }
    }
    return 0;
}
