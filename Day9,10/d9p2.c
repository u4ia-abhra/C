#include<stdio.h>
#include<math.h>
void main()
{
    int n;
    float sum=0.0;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for (int i = 1; i <= n ; i++)
    {
        /* code */
        sum+=(float)sqrt(i);
    }    
    printf("The sum of series is %f\n",sum);
}