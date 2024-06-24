#include<stdio.h>
void main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        /* code */
        for (int j=1 ; j<=i; j++)
        {
            /* code */
            printf("* ");
        }
        printf("\n");
    }    
}