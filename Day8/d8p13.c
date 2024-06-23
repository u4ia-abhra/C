#include<math.h>
#include<stdio.h>
void main()
{
    int n,x;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("Enter the value of x: ");
    scanf("%d",&x);
    float sum=0;
    for(int i=1;i<=n;i++)
    {
        int f=1;
        for(int j=1;j<=2*(i-1);i++)
        {
            f*=i;
        }
        sum+=(float)pow(x,2*(i-1));
    }
    printf("The value is %f\n",sum);
}