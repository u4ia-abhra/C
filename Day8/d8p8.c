#include<stdio.h>
void main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int a=0,b=1,c=1;
    if (n>=1)
    {
        /* code */
        printf("%d ",a);
    }
    if (n>=2)
    {
        /* code */
        printf("%d ",b);
    }
    if (n>=3)
    {
        /* code */
        printf("%d ",c);
    }
    if (n>=4)
    {
        /* code */
        for (int i = 4; i <= n; i++)
        {
            /* code */
            int d=a+b+c;
            printf("%d ",d);
            a=b;
            b=c;
            c=d;
        }
        
    }
    
}