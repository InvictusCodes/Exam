WAP for addition of matrices:
Code:
#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],c[10][10];
    int m,n,i,j;
    printf("Enter number of rows and columns of the matrix:");
    scanf("%d %d",&m,&n);
    for(i=0;i<=m-1;i++)
    for(j=0;j<=n-1;j++)
    {
        printf("\nEnter the elements of matrix A[%d][%d]:",i,j);
        scanf("%d",&a[i][j]);
    }
    for(i=0;i<=m-1;i++)
    for(j=0;j<=n-1;j++)
    {
        printf("\nEnter the elements of matrix B[%d][%d]:",i,j);
        scanf("%d",&b[i][j]);
    }    
    printf("\nMatrix A");
    for(i=0;i<=m-1;i++)
    {
        for(j=0;j<=n-1;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\nMatrix B");
    for(i=0;i<=m-1;i++)
    {
        for(j=0;j<=n-1;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<=m-1;i++)
    {
        for(j=0;j<=n-1;j++)
            c[i][j]=a[i][j]+b[i][j];
    }
    printf("\nMatrix C");
    for(i=0;i<=m-1;i++)
    {
        for(j=0;j<=n-1;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
