#include<stdio.h>
void main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int sum = (n%10)*100+(n%100)/10*10+n/100*1;
    printf("Sum of digits is: %d",sum);
}