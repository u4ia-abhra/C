#include<stdio.h>
void main()
{
    int n;
    printf("n=");
    scanf("%d",&n);
    int a=0,b=1;
    if (n>=1)
    {
        printf("%d ",a);
    }
    if (n>=2)
    {
        printf("%d ",b);
    }
    if (n>=3)
    {
        // for (int i = 3; i <= n; i++)
        // {
        //     int c=a+b;
        //     printf("%d ",c);
        //     a=b;
        //     b=c;
        // }
        int i=3;
        do
        {
            int c=a+b;
            printf("%d ",c);
            a=b;
            b=c;
            i++;
        }while (i<=n);
        
    }
    
}