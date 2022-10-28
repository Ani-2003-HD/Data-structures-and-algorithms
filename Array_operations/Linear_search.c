#include<stdio.h>

//This is linear search algorithm
int main(){
    int a[100],n,ele,po=0;
    printf("Enter the number of elements in the array\n");
    scanf("%d",&n);
    printf("Enter the elements of array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element to be found\n");
    scanf("%d",&ele);
    for (int i = 0; i < n; i++)
    {
        if(a[i]==ele)
        {
            printf("Element is found at %d\n",i+1);
            po++;
            break;
        }
    }
    if(po==0)
        printf("Element is not found in the given array\n");
    return 0;
}