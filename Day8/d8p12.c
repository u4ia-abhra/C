#include<stdio.h>
void main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    float sum=0;
    for (int i = 1; i <= n; i++)
    {       
        sum+=(float)1/i;
    }
    printf("Sum = %f\n",sum);
}