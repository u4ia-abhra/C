#include<stdio.h>
void main()
{
    int n;
    printf("Enter the distance: ");
    scanf("%d",&n);
    printf("%d meter = %d Km and %d meters.",n,n/1000,n%1000);
}