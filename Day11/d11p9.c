#include<stdio.h>
void inputArray(int a[],int n);
int Second_largest(int a[],int n);
void main()
{
    int n;
    printf("Enter array size(N): ");
    scanf("%d",&n);
    int a[n];
    inputArray(a,n);
    printf("The Second largest element in the array is: %d",Second_largest(a,n));
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
int Second_largest(int a[],int n)
{
    int l1=a[0],l2=a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i]>l1)
        {
            /* code */
            l1=a[i];
        }        
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i]>l2 && a[i]!=l1)
        {
            /* code */
            l2=a[i];
        }        
    }
    return l2;
}