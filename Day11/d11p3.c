#include<stdio.h>
void inputArray(int a[],int n);
float avgArray(int a[],int n);
void main()
{
    int n;
    printf("Enter array size(N): ");
    scanf("%d",&n);
    int a[n];
    inputArray(a,n);
    printf("Average of the numbers stored in array: %f",avgArray(a,n));
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
float avgArray(int a[],int n)
{
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        /* code */
        sum+=a[i];
    }
    return (float)sum/n;
}