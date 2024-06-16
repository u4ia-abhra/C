#include<stdio.h>
void main()
{
    int p;
    printf("Enter the amount: ");
    scanf("%d",&p);
    printf("%d paisa = %d Rupee and %d paisa\n",p,p/100,p%100);
}