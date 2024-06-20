#include<stdio.h>
void main()
{
    int n;
    printf("n=");
    scanf("%d",&n);
    printf("The factors are\n");
    // for (int i = 1; i <= n; i++)
    // {
    //     if (n%i==0)
    //     {
    //         printf("%d ",i);
    //     }        
    // }
    int i=1;
    do
    {
        if (n%i==0)
        {
            printf("%d ",i);
        }
        i++;
    }while (i<=n);    
}