#include<stdio.h>
int main()
{
    int i , j ;
    int a[2][3] , b[2][3] , c[2][3];
    printf("enter the values of a matrix : \n");
    for ( i = 0; i < 2; i++)
    {
    for ( j = 0; j < 3; j++)
    {
        scanf("%d\t",&a[i][j]); 
        printf("%d\t",a[i][j]);
    }
    printf("\n");
    }
    
    printf("enter the values of b matrix : \n");
    for ( i = 0; i < 2 ; i++)
    {
    for ( j = 0; j < 3; j++)
    {
        scanf("%d\t",&b[i][j]);
    }
    printf("\n");
    }
    
    printf(" values of b matrix :\n");
    for ( i = 0; i < 2 ; i++)
    {
    for ( j = 0; j < 3; j++)
    {
        printf("%d\t",a[i][j]);
    }
    printf("\n");
    }
    printf("on add a and b matrixes we get :\n");
    for ( i = 0; i < 2 ; i++)
    {
    for ( j = 0; j < 3; j++)
    {
        c[i][j]=a[i][j] + b[i][j] ;
        printf("%d\t",c[i][j]);
    }
    printf("\n");
    }
    return 0;
}