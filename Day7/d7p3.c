#include<stdio.h>
void main()
{
    int n;
    printf("n=");
    scanf("%d",&n);
    int i=n;
    do
    {
        printf("%d\n",i);
        i--;
    }while(i>=1);    
}