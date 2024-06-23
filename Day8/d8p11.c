#include<math.h>
#include<stdio.h>
void main()
{
    int n,x;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("Enter the value of x: ");
    scanf("%d",&x);
    int f=1;
    for(int i=1;i<=n;i++)
    {
        f*=i;
    }
    printf("The value of is %f\n",(float)pow(x,n)/f);
}