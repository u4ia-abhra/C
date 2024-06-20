#include<stdio.h>
void main()
{
    int n;
    printf("n=");
    scanf("%d",&n);
    int sum=0,m=n;
    // do
    // {
    //     int t=m%10;
    //     sum+=t*t*t;
    //     m/=10;
    // }while (m>0);
    for (int i = n; i > 0; i/=10)
    {
        int t=i%10;
        sum+=t*t*t;
    }
    
    if (sum==n)
    {
        printf("The given number is Armstrong\n");
    }
    else
    {
        printf("The given number is not Armstrong\n");
    }
    
}