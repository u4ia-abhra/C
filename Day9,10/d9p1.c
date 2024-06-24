#include<stdio.h>
#include<math.h>
void main()
{
    int n,sum=0;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for (int i = 1; i <= n ; i++)
    {
        /* code */
        sum+=pow(i,i);
    }    
    printf("The sum of series is %d\n",sum);
}