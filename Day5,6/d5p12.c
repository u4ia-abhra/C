#include<stdio.h>
void main()
{
    int n1,n2,n3;
    printf("n1 = ");
    scanf("%d",&n1);
    printf("n2 = ");
    scanf("%d",&n2);
    printf("n3 = ");
    scanf("%d",&n3);
    if (n1==n2 && n2==n3)
    {
        printf("Equilateral\n");
    }
    else if (n1==n2||n2==n3||n3==n1)
    {
        printf("Isoceles\n");
    }
    else
    {
        printf("Scalene\n");
    }    
}