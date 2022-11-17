#include<stdio.h>
#include<stdlib.h>

//creating node of linked list
struct Node{
    int data;
    struct Node *next;
};

//traversing linked list to print the elements in the linked list
void traverseLinkedList(struct Node * ptr){
    while (ptr!=NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

//1.insertion of the elements at the beginning
int insertatbeginning(struct Node * ptr, int deta){
    struct Node * zeroth;
    zeroth = (struct Node *) malloc(sizeof(struct Node));
    zeroth->data = deta;
    zeroth->next = ptr;
    return zeroth;
}

//2.insertion of element at the given index
int insertatIndex(struct Node * ptr, int deta, int indx){
    int i=0;
    struct Node * index;
    index = (struct Node *) malloc(sizeof(struct Node));
    index->data = deta;
    while (i!=indx-1)
    {
        ptr = ptr->next;
        i+=1;
    }
    index->next = ptr->next;
    ptr->next = index;
    return ptr;
}

//3.inserting a node at the last of linked list
int insertatLast(struct Node * ptr, int deta){
    struct Node * last;
    last = (struct Node *) malloc(sizeof(struct Node));
    last->data = deta;
    last->next = NULL;
    while (ptr->next!=NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = last;
    return ptr;
}

//4.insertion of element after the given aderss in the linked list
int insertatAdress(struct Node * adress, int deta){
    struct Node * addres;
    addres = (struct Node *) malloc(sizeof(struct Node));
    addres->data = deta;
    addres->next = adress->next;
    adress->next = addres;
    return adress;
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
    fourth->next = NULL;

    //calling the traversing function to print the elements in the linked list
    printf("Linked list before insertion\n");
    traverseLinkedList(head);
    head = insertatbeginning(head,1);
    printf("\nLinked list after insertion\n");
    traverseLinkedList(head);

    return 0;
}