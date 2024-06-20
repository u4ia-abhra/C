#include<stdio.h>
void main()
{
    int sum=0;
    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++)
    {
        int n;
        scanf("%d",&n);
        sum+=n;
    }
    float avg = (float)sum/10;
    printf("The sum is %d\n",sum);
    printf("The average is %f\n",avg);
}