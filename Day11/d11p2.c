#include<stdio.h>
void inputArray(int a[],int n);
int sumArray(int a[],int n);
void main()
{
    int n;
    printf("Enter array size(N): ");
    scanf("%d",&n);
    int a[n];
    inputArray(a,n);
    printf("Sum of the numbers stored in array: %d",sumArray(a,n));
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
int sumArray(int a[],int n)
{
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        /* code */
        sum+=a[i];
    }
    return sum;
}