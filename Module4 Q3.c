WAP to find reverse of a string without using stdlib functions.
Code:
#include<stdio.h>
#include<string.h>
int main()
{
    char str[50],temp;
    int i,length;
    printf("Enter a string:");
    scanf("%s",&str);
    length=strlen(str)-1;
    for(i=0;i<strlen(str)/2;i++)
    {
        temp=str[i];
        str[i]=str[length];
        str[length--]=temp;
    }
    printf("Reverse String:%s",str);
    return 0;
}
