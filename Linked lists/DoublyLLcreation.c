#include<stdio.h>
#include<stdlib.h>

//creating node of linked list
struct Node{
    int data;
    struct Node *next;
    struct Node *prev;
};

//traversing linked list to print the elements in the linked list
void traverseLinkedList(struct Node * ptr){
    while (ptr!=NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

void traverseback(struct Node * ptr){
    while (ptr!=NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->prev;
    }
    
}
int main(){

    //initialization of pointers of linked list
    struct Node * head;
    struct Node * first;
    struct Node * second;
    struct Node * third;
    struct Node * fourth;

    //memory allocation of nodes in heap
    head = (struct Node *) malloc(sizeof(struct Node));
    first = (struct Node *) malloc(sizeof(struct Node));
    second = (struct Node *) malloc(sizeof(struct Node));
    third = (struct Node *) malloc(sizeof(struct Node));
    fourth = (struct Node *) malloc(sizeof(struct Node));

    //node initialization and linking nodes to the next nodes
    head->data = 10;
    head->next = first;
    head->prev = NULL;

    first->data = 20;
    first->next = second;
    first->prev = head;

    second->data = 30;
    second->next = third;
    second->prev = first;

    third->data = 40;
    third->next = fourth;
    third->prev = second;

    fourth->data = 50;
    fourth->next = NULL;
    fourth->prev = third;

    //calling the traversing function to print the elements in the linked list
    //traverse(fourth);
    traverseLinkedList(head);
    traverseback(fourth);
    return 0;
}