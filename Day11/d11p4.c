#include<stdio.h>
void inputArray(int a[],int n);
int largest(int a[],int n);
void main()
{
    int n;
    printf("Enter array size(N): ");
    scanf("%d",&n);
    int a[n];
    inputArray(a,n);
    printf("Largest element stored in an array: %d",largest(a,n));
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
int largest(int a[],int n)
{
    int max=a[0];
    for (int i = 0; i < n; i++)
    {
        /* code */
        if (a[i]>max)
        {
            /* code */
            max=a[i];
        }        
    }
    return max;
}