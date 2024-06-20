#include<stdio.h>
void main()
{
    int n;
    printf("n=");
    scanf("%d",&n);
    int sum=0,m=n;
    do
    {
        sum+=m%10;
        m/=10;
    }while (m>0);
    // for (int i = n; i > 0; i/=10)
    // {
    //     sum+=i%10;
    // }
    
    printf("The sum of digits of %d is %d\n",n,sum);
}