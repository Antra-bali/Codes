#include<stdio.h>
int main()
{
    int arr[100];
    int i,x,pos,n;
    //Asking for the size
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    //For the elements
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        printf(" %d",arr[i]);
    }
    printf("\n");
    //Element to be inserted
    printf("Enter the new element: ");
    scanf("%d",&x);
    //The position where the new element is to be inserted
    printf("Enter the position at which you wish to enter the new element: ");
    scanf("%d",&pos);
    //Increasing the size of array
    n++;
    for(i=n-1;i>=pos;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[pos-1]=x;
    //Printing the new elements
    for(i=0;i<n;i++)
    {
    printf(" %d",arr[i]);
    }
    printf("\n");
}