#include<stdio.h>
void main()
{
    int p,c,m;
    printf("Input the marks obtained in Physics: ");
    scanf("%d",&p);
    printf("Input the marks obtained in Chemistry: ");
    scanf("%d",&c);
    printf("Input the marks obtained in Mathematics: ");
    scanf("%d",&m);
    if (m>=65 && p>=55 && c>=50 && ((p+c+m)>=190 || (p+m)>=140))
    {
        printf("The candidate is eligible for admission.\n");
    }
    else
    {
        printf("The candidate is not eligible for admission.\n");
    }
    
}