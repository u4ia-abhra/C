#include<stdio.h>
void main()
{
    int n;
    printf("Enter total mark secured by a student: ");
    scanf("%d",&n);
    if (n>=90)
    {
        printf("O\n");
    }
    else if (n>=80)
    {
        printf("E\n");        
    }
    else if (n>=70)
    {
        printf("A\n");
    }
    else if (n>=60)
    {
        printf("B\n");
    }
    else if (n>=50)
    {
        printf("C\n");        
    }
    else if (n>=40)
    {
        printf("D\n"); 
    }
    else
    {
        printf("F\n"); 
    }           
}