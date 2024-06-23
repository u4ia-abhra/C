#include<stdio.h>
void main()
{
    int n;
    printf("n=");
    scanf("%d",&n);
    int sum=0;
    for (int i = 1; i < n; i++)
    {
        if (n%i==0)
        {
            sum+=i;
        }        
    }
    if (sum==n)
    {
        printf("The given number is Perfect\n");
    }
    else
    {
        printf("The given number is not Perfect\n");
    }
}