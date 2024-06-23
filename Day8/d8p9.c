#include<stdio.h>
void main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int sum=0;
    for (int i = 1; i <= n; i++)
    {
        /* code */
        int t=0;
        for (int j = 1; j <= i ; j++)
        {
            /* code */
            t+=j;
        }
        sum+=t;
    }
    printf("Sum = %d\n",sum);
}