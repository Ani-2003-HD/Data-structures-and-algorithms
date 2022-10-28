#include<stdio.h>
void displayarray(int ar[],int n){
    //This is traversal
    for (int i = 0; i < n; i++)
    {
        printf("%d ",ar[i]);
    }
    printf("\n");
}
int delete(int ar[],int n,int ind){
    if(ind>n)
        return -1;
    else
    {
        for (int i = ind; i < n-1; i++)
        {
            ar[i]=ar[i+1];
        }
        return 1;
    }
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
    printf("Enter the index at which it is to be deleted\n");
    scanf("%d",&inde);
    displayarray(a,n);
    delete(a,n,inde);
    displayarray(a,n-1);
    return 0;
}