#include<stdio.h>
void inputArray(int a[],int n);
void printArray(int a[],int n);
void main()
{
    int n;
    printf("Enter array size(N): ");
    scanf("%d",&n);
    int a[n];
    inputArray(a,n);
    printArray(a,n);
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
void printArray(int a[],int n)
{
    printf("Array contents are:\n");
    for (int i = 0; i < n; i++)
    {
        /* code */
        printf("%d ",a[i]);
    }
}