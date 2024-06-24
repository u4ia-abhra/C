#include<stdio.h>
void main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if (i==1 || i==n)
        {
            /* code */
            for(int j=1;j<=n;j++)
            {
                printf("*");
            }
        }
        else
        {
            for(int j=1;j<=n;j++)
            {
                if (j==1 || j==n)
                {
                    /* code */
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
}