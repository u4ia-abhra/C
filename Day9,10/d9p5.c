#include<stdio.h>
void main()
{
    int n;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        /* code */
        for(int j=1;j<=i;j++)
        {
            printf("%d ",i);
        }
        printf("\n");
    }    
}