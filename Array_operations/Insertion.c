#include<stdio.h>
/*int takeinput(int n){
    int ar[100];
    printf("Enter the elements of array");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&ar[i]);
    }
    return ar;
}
I don't know why this did not work*/
// insertion
int insert(int ar[],int n,int ele,int ind){
    if(ind>n)
        return -1;
    else
    {
        for (int i = n-1; i >= ind; i--)
        {
            ar[i+1]=ar[i];
        }
        ar[ind]=ele;
        return 1;
    }
}
//display the array
void displayarray(int ar[],int n){
    //This is traversal
    for (int i = 0; i < n; i++)
    {
        printf("%d ",ar[i]);
    }
    printf("\n");
}
int main(){
    int a[100],n,e,inde;
    printf("Enter tne number of elements in the array\n");
    scanf("%d",&n);
    printf("Enter the elements of array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element to be inserted and the index at which it is to be inseted\n");
    scanf("%d%d",&e,&inde);
    displayarray(a,n);
    insert(a,n,e,inde);
    displayarray(a,n+1);
    return 0;
}