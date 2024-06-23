#include<stdio.h>
void main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int f=1;
    for (int i = 2; i < n; i++)
    {
        if (n%i==0)
        {
            f=0;
        }        
    }
    if (f)
    {
        printf("You have entered %d, %d is a prime number",n,n);
    }
    else
    {
        printf("You have entered %d, %d is not a prime number",n,n);
    }
    
    
}