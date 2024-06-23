#include<stdio.h>
void main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int f=1;
    for (int i = 1; i <= n; i++)
    {
        /* code */
        f*=i;
    }
    printf("Factorial of %d is %d\n",n,f);
}