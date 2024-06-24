#include<stdio.h>
void main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if (i%2==1)
            {
                /* code */
                printf("%d ",j);
            }
            else
            {
                printf("%d ",i-j+1);
            }
            
        }
        printf("\n");
    }
}