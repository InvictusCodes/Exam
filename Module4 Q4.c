WAP to print transpose of matrix.
Code:
#include<stdio.h>
int main()
{
    int mat[10][10],transp[10][10];
    int r,c,i,j;
    printf("Enter the number of rows and columns :");
    scanf(" %d %d",&r,&c);
    printf("Enter the elements of matrix:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Elements[%d][%d]:",i,j);
            scanf("%d",&mat[i][j]);

        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            transp[j][i]=mat[i][j];

        }
    }
    printf("\nOriginal matrix:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    printf("\nTranspose of the Matrix:\n");
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("%d ",transp[i][j]);

        }
        printf("\n");
    }
    return 0;
}
