#include<stdio.h>
void inputArray(int a[],int n);
void printArray(int a[],int n);
void deleteArray(int a[],int n,int p);
void main()
{
    int n,p;
    printf("Enter array size(N): ");
    scanf("%d",&n);
    int a[n];
    inputArray(a,n);
    printf("Input the position where to delete: ");
    scanf("%d",&p);
    deleteArray(a,n,p);
    printArray(a,n-1);
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
void deleteArray(int a[],int n,int p)
{
    for (int i = p-1; i < n; i++)
    {
        /* code */
        a[i]=a[i+1];
    }    
}