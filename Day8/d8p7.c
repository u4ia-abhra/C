#include<stdio.h>
void main()
{
    int n;
    printf("n = ");
    scanf("%d",&n);
    int m=n,sum=0;
    while (m>0)
    {
        int d=m%10;
        int f=1;
        for (int i = 1; i <= d; i++)
        {
            /* code */
            f*=i;
        }
        sum+=f;
        m/=10;
    }
    if (sum==n)
    {
        /* code */
        printf("The given number is Strong\n");
    }
    else
    {
        printf("The given number is not Strong\n");
    }    
}