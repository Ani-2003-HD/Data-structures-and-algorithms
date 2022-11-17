#include<stdio.h>
#include<stdlib.h>

//creating node of linked list
struct Node{
    int data;
    struct Node *next;
};

//traversing linked list to print the elements in the linked list
void traverseLinkedList(struct Node * ptr){
    struct Node * p = ptr;
    do{
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }while (ptr!=p);
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

    first->data = 20;
    first->next = second;

    second->data = 30;
    second->next = third;

    third->data = 40;
    third->next = fourth;

    fourth->data = 50;
    fourth->next = head;

    //calling the traversing function to print the elements in the linked list
    traverseLinkedList(head);

    return 0;
}