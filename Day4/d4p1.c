#include<stdio.h>
void main()
{
    int s;
    printf("Enter the time: ");
    scanf("%d",&s);
    int h=s/3600;
    int m=(s%3600)/60;
    int n=s%60;
    printf("%d second = %d Hour, %d Minute and %d Second\n",s,h,m,n);
}