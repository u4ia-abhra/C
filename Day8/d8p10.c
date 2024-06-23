#include<stdio.h>
void main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int f=1;
    for(int i=1;i<=n;i++)
    {
        f*=i;
    }
    printf("The value of 1/%d! is %f\n",n,(float)1/f);
}