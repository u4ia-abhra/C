#include<stdio.h>
void main()
{
    int n;
    printf("n=");
    scanf("%d",&n);
    int rev=0,m=n;
    // do
    // {
    //     rev=rev*10+m%10;
    //     m/=10;
    // }while (m>0);
    for (int i = n; i >0; i/=10)
    {
        rev=rev*10+i%10;
    }
    
    printf("The reverse of %d is %d\n",n,rev);    
}