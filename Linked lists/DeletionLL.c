#include<stdio.h>
#include<stdlib.h>

//creating node of linked list
struct Node{
    int data;
    struct Node *next;
};

//traversing linked list to print the elements in the linked list
void traverseLinkedList(struct Node * head){
    while (head!=NULL)
    {
        printf("Element: %d\n", head->data);
        head = head->next;
    }
}

//1.deletion of first node in the linked list
int deleteFirst(struct Node * head){
    struct Node * ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

//2.deletion of the given element at the given index in linked list
void deleteatIndex(struct Node * head, int inde){
    struct Node * ptr;
    ptr = head;
    int i=0;
    while(i!=inde-1)
    {
        ptr = ptr->next;
        head = head->next;
        i+=1;
    }
    ptr = ptr->next;
    head->next = ptr->next;
    free(ptr);
}

//3.deletion of element at the last in the linked list
void deleteatLast(struct Node * head){
    struct Node * ptr;
    ptr = head;
    while (head->next!=NULL)
    {
        head = head->next;
        if(head->next!=NULL)
        {
            ptr = ptr->next;
        }
    }
    ptr->next = NULL;
    free(head);
}

//4.deletion of node of given adress in linked list
void deleteatAddress(struct Node * head,struct Node * address){
    while (head->next!=address)
    {
        head = head->next;
    }
    head->next = address->next;
    free(address);
}

struct Node * deletegivenEle(struct Node * head, int value){
    struct Node * p = head; 
    struct Node * ptr;
    ptr = head->next;
    if(head->data==value){
        head = deleteFirst(head);
        return head;
    }
    else{
        while(ptr->data!=value && ptr->next!=NULL){
            head = head->next;
            ptr = ptr->next;
        }
        if(ptr->data==value){
            head->next = ptr->next;
            free(ptr);
        }
        else
            printf("Node with the given value not found\n");
    }
    return p;
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
    printf("Linked list before deletion\n");
    traverseLinkedList(head);
    printf("\n");
    head = deletegivenEle(head,60);
    printf("Linked list after deletion\n");
    traverseLinkedList(head);

    return 0;
}