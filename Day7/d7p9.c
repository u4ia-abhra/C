#include<stdio.h>
void main()
{
    int n;
    printf("n=");
    scanf("%d",&n);
    int m=n,rev=0;
    // do
    // {
    //     rev=rev*10+m%10;
    //     m/=10;
    // }while (m>0);
    for (int i = n; i >0 ; i/=10)
    {
        rev=rev*10+i%10;
    }
    
    if (rev==n)
    {
        printf("The given number is Pallindrome\n");
    }
    else
    {
        printf("The given number is not Pallindrome\n");
    }
    
}