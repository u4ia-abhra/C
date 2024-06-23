#include<stdio.h>
void main()
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    int a=1,b=3,c;
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
        for (int i = 3; i <=n; i++)
        {
            /* code */
            c=a+b;
            a=b;
            b=c;
            printf("%d ",c);
        }
        
    }
        
}