#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d\n%d",&a,&b);
    for (int i = a; i < a*b; i++)
    {
        /* code */
        if (i%a==0 && i%b==0)
        {
            /* code */
            printf("LCM = %d\n",i);
            break;
        }
        
    }
    
    if (a>b)
    {
        /* code */
        int temp=a%b;
        while (temp!=0)
        {
            /* code */
            a=b;
            b=temp;
            temp=a%b;
        }        
    }
    else
    {
        int temp=b%a;
        while (temp!=0)
        {
            /* code */
            a=b;
            b=temp;
            temp=b%a;
        }        
    }
    printf("GCD = %d\n",b);
    
}