#include<stdio.h>
void main()
{
    int n1,n2;
    printf("Enter 2 numbers:");
    scanf("%d,%d",&n1,&n2);
    printf("Select the operation from the menu (A for Add, S for Subtract, M for Multiplication, D for Division):");
    char c;    
    scanf("\n%c",&c);
    if (c==65)
    {
        printf("The Sum is %d\n",n1+n2);
    }
    else if (c=='S')
    {
        printf("The Difference is %d\n",n1-n2);
    }
    else if (c=='M')
    {
        printf("The Multiplication is %d\n",n1*n2);
    }
    else if (c=='D')
    {
        printf("The Division is %f\n",(float)n1/n2);
    }    
    else
    {
        printf("Invalid Input");
    }    
}