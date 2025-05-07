WAP to count the number of digits,alphabets and special characters in an  input string.
Code:
#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    int i=0,digits=0,alphabets=0,specialchar=0;
    printf("Enter a string:");
    scanf("%s",str);
    while(str[i]!=0)
    {
        if((str[i]>='0' && str[i]<='9'))
        {
            digits++;
        }
        else if((str[i]>= 'A' && str[i]<='Z')||(str[i]>='a' && str[i]<='z'))
        {
            alphabets++;
        }
        else
        {
            specialchar++;
        }
        i++;
    }
    printf("The string contains digits=%d\n",digits);
    printf("The string contains alphabets=%d\n",alphabets);
    printf("The string conatins special characters=%d",specialchar);
    return 0;
}
