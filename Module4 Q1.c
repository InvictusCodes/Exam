WAP to print the sum of first 10 natural numbers.
Code:
#include<stdio.h>
#include<math.h>
int main()
{
    int i,sum=0,ary[10];
    for(i=0;i<10;i++)
    {
        printf("Enter the number[%d]:",i);
        scanf("%d",&ary[i]);
        sum+=ary[i];
    }
    printf("Sum of the 10 natural numbers are:%d",sum);
    return 0;
}
