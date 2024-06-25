#include<stdio.h>
void inputArray(int a[],int n);
int ProductArray(int a[],int n);
void main()
{
    int n;
    printf("Enter array size(N): ");
    scanf("%d",&n);
    int a[n];
    inputArray(a,n);
    printf("Product of the array elements = %d\n",ProductArray(a,n));
}
void inputArray(int a[],int n)
{
    for (int i = 0; i < n; i++)
    {
        /* code */
        printf("Enter number%d: ",i+1);
        scanf("%d",&a[i]);
    }
}
int ProductArray(int a[],int n)
{
    int pro=1;
    for (int i = 0; i < n; i++)
    {
        pro*=a[i];
    }
    return pro;
}