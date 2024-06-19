#include<stdio.h>
void main()
{
    char c;
    printf("Enter an alphabet: ");
    scanf("%c",&c);
    if (c>='a' && c<='z')
    {
        c=c-32;
        printf("The upper case of the entered letter is %c\n",c);
    }
    else if (c>='A' && c<='Z')
    {
        printf("You have entered %c which is already in upper case\n",c);
    }
    else
    {
        printf("Invalid Input\n");
    }
    
    
}