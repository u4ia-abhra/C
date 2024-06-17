#include<stdio.h>
void main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("Sum of digits is: %d",n/100+(n%100)/10+n%10);
}