#include<stdio.h>

//This is binary search algorithm
int main(){
    int a[100],n,ele,po=0,low=0,high,mid;
    printf("Enter the number of elements in the array\n");
    scanf("%d",&n);
    printf("Enter the elements of array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element to be found\n");
    scanf("%d",&ele);
    high=n-1;
    while (low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]==ele)
        {
            printf("Element is found at %d\n",mid+1);
            po++;
            break;
        }
        else if(a[mid]<ele)
            low=mid+1;
        else
            high=mid-1;
    }
    if(po==0)
        printf("Element is not found\n");
    return 0;
}
    