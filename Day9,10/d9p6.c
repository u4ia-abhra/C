#include<stdio.h>
#include<math.h>
void main()
{
    int n;
    printf("Enter value of n: ");
    scanf("%d",&n);
    int t=2;
    for (int i = 1; i <= n; i++)
    {        
        printf("%d ",t-1);
        t*=2;
    }    
}