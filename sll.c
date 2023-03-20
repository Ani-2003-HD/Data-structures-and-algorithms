#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};
struct node *head;

void create(){
    int item;
    struct node *ptr = (struct node*)malloc(sizeof(struct node*));
    printf("Enter the element\n");
    scanf("%d",&item);
    ptr->data = item;
    ptr->next = head;
    head = ptr;
    printf("node instered\n");
}

void search(){
    struct node * ptr;
    int it, i=0, f=1;
    ptr = head;
    if(ptr == NULL)
        printf("The ll is empty");
    else{
        printf("Enter the search element\n");
        scanf("%d",&it);
        while(ptr!=NULL){
            if(ptr->data==it){
                printf("element found at %d\n",i+1);
                f=0;
            }
            i++;
            ptr = ptr->next;
        }
        if(f==1)
            printf("Element not found\n");
    }
}

void display(){
   struct node *ptr = head;
    while (ptr!= NULL)
    { 
        printf("%d ",ptr->data);
        ptr = ptr->next;
    }
}

int main(){
    int c;
    do{
        printf("Menu\n1.create\n2.search\n3.display\n4.exit\nenter your choice\n");
        scanf("%d",&c);
        switch(c){
            case 1:create();
                break;
            case 2:search();
                break;
            case 3:display();
                break;
            case 4:exit(0);
            default:printf("Enter a valid choice");
                break;
        }
    }while(c);
    return 0;
}